/*
  ******************************************************************************
  * @file    displayTask.c
  * @author  George
  * @version V1.0.0
  * @date    Oct 18, 2013
  * @brief   
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 Vigeltek Inc</center></h2>
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
*/


/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "displayTask.h"
#include "RA8875.h"
#include "rominfo.h"

#include "stdlib.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static uint8_t bStartEvent = 0x00;
static uint8_t currentLayer = 0;
static uint8_t backBufferUpdateInProgress = 0;
static uint8_t bDisplayInitialized = 0;
static display_item_t* backScreen = 0;
static display_item_t* currScreen = 0;

static xSemaphoreHandle 		xDispSemaphore = 0;

uint8_t bHeaderEnabled = 0x00;
uint8_t bFooterEnabled = 0x00;
unsigned int X2,Y2,X3,Y3,X4,Y4;

/* Private function prototypes -----------------------------------------------*/
void DisplayImageBlockMode(uint startAddress,uint startx , uint starty, uint width, uint height);
void DisplayImageDirectWrite(const uint8_t* array,uint length, uint startx , uint starty, uint width, uint height);
FONT_INFO FindCharInfo(uint8_t c, const FONT_INFO* fontArr);
uint MeasureString(const FONT_INFO* font, char *str);
void Show_String18(const FONT_INFO* font, char *str,uint startx , uint starty);
void CutPictrue(uint8_t picnum,uint x1,uint y1,uint x2,uint y2,unsigned long x,unsigned long y);
void Soft_Reset(void);
void SetDrawingLayer(void);
void SetUpdateLayer(void);
void ShowNextScene(void);
void updateCurrentLayer(void);

/* Private functions ---------------------------------------------------------*/
void DisplayImageBlockMode(uint startAddress,uint startx , uint starty, uint width, uint height)
{
	Active_Window(startx,startx+width-1,starty,starty+height-1);
	MemoryWrite_Position(startx,starty);//Memory write position

	SROM_CLK_DIV(0X00);//FLASH frequency setting
	Serial_ROM_select1();
	Serial_ROM_Address_set_24bit();
	Select_Serial_Waveform_mode0();
	SERIAL_ROM_Read_Cycle_4bus();
	SERIAL_ROM_DMA_mode();
	SERIAL_ROM_Dual_mode1();


	DMA_Start_address_setting(startAddress);//DMA Start address setting
	DMA_block_mode_size_setting(width,height,width);
	DMA_Block_mode();//FLASH setting
	DMA_Start_enable();//FLASH setting
	Chk_DMA_Busy();
}

void DisplayImageDirectWrite(const uint8_t* array,uint length, uint startx , uint starty, uint width, uint height)
{
	int i;

	Write_Dir(0x40,0x00);
	Active_Window(startx,startx + width-1,starty,starty+height-1);//Set the work window size
	MemoryWrite_Position(0,0);//Memory write position
	LCD_CmdWrite(0x02);//start data write
	//112X140 dot
	for(i=0;i<length;i++)
	{
		LCD_DataWrite(array[i]);
		Chk_Busy();
	}
}

FONT_INFO FindCharInfo(uint8_t c, const FONT_INFO* fontArr)
{
	int x;
	FONT_INFO temp;

	for( x = 0; x < 95; x++)
		if(fontArr[x].char_id == (uint16_t)c) temp = fontArr[x];

	return temp;
}


uint MeasureString(const FONT_INFO* font, char *str)
{
	uint stringWidth = 0;

	while(*str != '\0')
	{
		uint8_t ch = (uint8_t)*str;
		FONT_INFO fontInf = FindCharInfo(ch, font);
		stringWidth += fontInf.char_width;
		++str;
	}

	return stringWidth;
}

void Show_String18(const FONT_INFO* font, char *str,uint startx , uint starty)
{
   uint x = startx;
   uint y = starty;

	while(*str != '\0')
	{
		uint8_t ch = (uint8_t)*str;
		FONT_INFO fontInf = FindCharInfo(ch, font);
		if(x + fontInf.char_width >479)
		{
			x = startx;
			y = starty + fontInf.char_height;
		}

		DisplayImageBlockMode(fontInf.start_addr, x,y, fontInf.char_width, fontInf.char_height);
		x += fontInf.char_xadvance;

		++str;
	}
}

void CutPictrue(uchar picnum,uint x1,uint y1,uint x2,uint y2,unsigned long x,unsigned long y)
{unsigned long cutaddress;uchar picnumtemp;
    Write_Dir(0X06,0X00);//FLASH frequency setting
   	Write_Dir(0X05,0Xac);//FLASH setting

	picnumtemp=picnum;

   	Write_Dir(0XBF,0X02);//FLASH setting
   	Active_Window(x1,x2,y1,y2);
   	MemoryWrite_Position(x1,y1);//Memory write position
   	cutaddress=(picnumtemp-1)*261120+y*960+x*2;
   	DMA_Start_address_setting(cutaddress);
   	DMA_block_mode_size_setting(x2-x1+1,y2-y1+1,480);
   	Write_Dir(0XBF,0X03);//FLASH setting
	Chk_DMA_Busy();
}

void Soft_Reset(void)
{
	xSemaphoreTake(xDispSemaphore, portMAX_DELAY);
	{
		LCD_Reset();
		Delay1ms(500);
		LCD_Initial();
		Two_Layers();
		Delay1ms(100);
		Active_Window(0,479,0,271);
		Background_color(color_black);
		Text_color(color_white);
		Text_Cursor_Disable();
		Layer1_Visible();
		Write_To_Bank1();
		Clear_Active_Window();
		Write_To_Bank2();
		Clear_Full_Window();
		Display_ON();

		//backlight on for RAiO RA8875_demo_board_V2
		PWM1_enable();
		PWM1_duty_cycle(0xff);

		Text_color(color_white);
		Background_color(color_black);
		xSemaphoreGive(xDispSemaphore);
	}
}


void Init_Display(void)
{
	xSemaphoreTake(xDispSemaphore, portMAX_DELAY);
	{
		Delay1ms(1000);
		LowLevel_Init();
		Delay1ms(100);
		bDisplayInitialized = 0x01;
		xSemaphoreGive(xDispSemaphore);
	}

}

void SetDrawingLayer(void)
{
	if(currentLayer == 0)
	{
		Write_To_Bank2();
		//Clear_Full_Window();
	}
	else
	{
		Write_To_Bank1();
		//Clear_Full_Window();
	}
}

void SetUpdateLayer(void)
{
	if(currentLayer == 0)
	{
		Write_To_Bank1();
		//Clear_Full_Window();
	}
	else
	{
		Write_To_Bank2();
		//Clear_Full_Window();
	}
}

void ShowNextScene(void)
{
	if(currentLayer == 0)
	{
		Layer2_Visible();
		currentLayer = 1;
	}
	else
	{
		Layer1_Visible();
		currentLayer = 0;
	}
}

void Reset_Display(void)
{
	Soft_Reset();
}

void DrawScreen(screen_enum_t scn)
{
	int i,j;
	int sWidth = 0;

	if(bDisplayInitialized == 0) return;

	xSemaphoreTake(xDispSemaphore, portMAX_DELAY);
	{

		SetDrawingLayer();
		switch(scn)
		{
		case EmpLoggedInScn:
			Background_color(color_black);
			Text_color(color_white);
			Clear_Active_Window();
			Show_String18(gArial18, "Client Name:", 55,5);
			Show_String18(gArial24, "Vigelette, George", 55,28); // time while the font is still loaded
			Show_String18(gArial24, "11:32 AM", 385,28); // time while the font is still loaded

			DisplayImageBlockMode(g3gIcon20.start_addr ,400, 3, g3gIcon20.image_width, g3gIcon20.image_height);
	//
	//			Layer1_Visible();
	//			Write_To_Bank1();
	//			Active_Window(0,479,0,271);

			// battery
			DisplayImageBlockMode(gBatteryIcons.start_addr,427, 3, gBatteryIcons.image_width, 20);

			// buttons
			// Row 1
			DisplayImageBlockMode(gBtnEndShift.start_addr,20, 63, gBtnEndShift.image_width, gBtnEndShift.image_height);
			DisplayImageBlockMode(gBtnTimesheet.start_addr,250, 63, gBtnTimesheet.image_width, gBtnTimesheet.image_height);

			// Row 2
			DisplayImageBlockMode(gBtnTaskList.start_addr,20, 123, gBtnTaskList.image_width, gBtnTaskList.image_height);
			DisplayImageBlockMode(gBtnSchedule.start_addr,250, 123, gBtnSchedule.image_width, gBtnSchedule.image_height);

			// Row 3
			DisplayImageBlockMode(gBtnMessages.start_addr,20, 183, gBtnMessages.image_width, gBtnMessages.image_height);
			DisplayImageBlockMode(gBtnExit.start_addr,250, 183, gBtnExit.image_width, gBtnExit.image_height);

			sWidth = MeasureString(gArial24, "Jan 21, 2013");
			Show_String18(gArial24, "Jan 21, 2013", (480 - sWidth)/2 ,250);

			break;
		case EmpLoggedOutScn:
			break;
		case ClientScn:
			break;
		case ActivationScn:
			break;
		case TestScn:
			// bte fill
			Background_color(color_black);
			Text_color(color_white);
			Graphic_Mode();
			BTE_Size_setting(15,68);
			BTE_ROP_Code(0xcc);	 //set BTE solid fill
			for(i=0;i<32;i++)
			{
				Text_Foreground_Color(i,0,0);
				BTE_Source_Destination(0,i*15,0,0);
				BTE_enable();
				Chk_Busy_BTE();

				Text_Foreground_Color(0,i*2,0);
				BTE_Source_Destination(0,i*15,0,68);
				BTE_enable();
				Chk_Busy_BTE();

				Text_Foreground_Color(0,0,i);
				BTE_Source_Destination(0,i*15,0,136);
				BTE_enable();
				Chk_Busy_BTE();

				Text_Foreground_Color(i,i*2,i);
				BTE_Source_Destination(0,i*15,0,204);
				BTE_enable();
				Chk_Busy_BTE();
			}
			break;
		case ConfigurationScn:
			Internal_CGROM();
			Font_size_16x16_8x16();
			Background_color(color_blue);
			Text_color(color_white);
			Clear_Active_Window();
			Font_Coordinate(5,5);
			Show_String("Safe-Link Device Configuration ",0);
			break;
		case AuthenticatingScn:
			break;
		case MessageListScn:
			break;
		case NewMessageScn:
			break;
		case ReadMessageScn:
			break;
		case TaskListScn:
			break;
		case TaskViewScn:
			break;
		case ScheduleScn:
			break;
		case TimeApproveScn:
			break;
		case LockedScn:
			Active_Window(0,479,0,271);
			DisplayImageBlockMode(gDeviceLockedScreen.start_addr, 0,0,gDeviceLockedScreen.image_width, gDeviceLockedScreen.image_height);
			break;
		case SplashScn:
			Active_Window(0,479,0,271);
			DisplayImageBlockMode(gsplashScreen.start_addr, 0,0,gsplashScreen.image_width, gsplashScreen.image_height);
			Text_color(color_white);
			Geometric_Coordinate(212,268,108,164);
			Draw_square();
			Text_color(color_black);
			Geometric_Coordinate(213,267,109,163);
			Draw_square_fill();
			Active_Window(0,479,0,271);
			DisplayImageBlockMode(gCycle.start_addr, 216,112,gCycle.image_width, gCycle.image_height);

			break;
		case LoadingAnim:
			Active_Window(0,479,0,271);
			Background_color(color_black);
			Text_color(color_white);
			Graphic_Mode();
			Clear_Active_Window();
			Show_String18(gArialBlack24, "Loading", 206 ,116);
			DisplayImageBlockMode(gProgressBar.start_addr,153, 145, gProgressBar.image_width, 14);
			break;
		default:
			DisplayImageBlockMode(gsplashScreen.start_addr, 0,0,gsplashScreen.image_width, gsplashScreen.image_height);
			break;
		}

		ShowNextScene();
		xSemaphoreGive(xDispSemaphore);
	}
}

void updateCurrentLayer()
{

	if(bDisplayInitialized == 0) return;

	xSemaphoreTake(xDispSemaphore, portMAX_DELAY);
	{

		if(currScreen->bAnimationEnabled)
		{
			switch(currScreen->drawScn)
			{
			case LoadingAnim:
				SetUpdateLayer();
				Active_Window(0,479,0,271);
				Background_color(color_black);
				Text_color(color_white);
				//Show_String18(gArialBlack24, "Loading", 206 ,116);
				(currScreen->currFrame)++;
				if(currScreen->currFrame < currScreen->numberFrames)
					DisplayImageBlockMode(gProgressBar.start_addr +(currScreen->currFrame * 4872),153, 145, gProgressBar.image_width, 14);
				else
					currScreen->currFrame = 0x00;

				break;
			default:
				break;
			}
		}


		xSemaphoreGive(xDispSemaphore);
	}
}

void displayTask(void * pvParameters)
{

	  STM_EVAL_LEDOn(LED4);
	  xDispSemaphore = xSemaphoreCreateMutex();
	  if(xDispSemaphore != NULL)
	  {
		  STM_EVAL_LEDOff(LED4);
		  vTaskDelay( 100 / portTICK_RATE_MS  );
		  STM_EVAL_LEDOn(LED4);

		  Init_Display();
		  STM_EVAL_LEDOff(LED4);
		  vTaskDelay( 100 / portTICK_RATE_MS  );
		  STM_EVAL_LEDOn(LED4);

		  Reset_Display();
		  STM_EVAL_LEDOff(LED4);
		  vTaskDelay( 100 / portTICK_RATE_MS  );
		  STM_EVAL_LEDOn(LED4);

		  DrawScreen(SplashScn);
		  STM_EVAL_LEDOff(LED4);

		  bDisplayInitialized = 1;

		  for(;;)
		  {

		  }

		  STM_EVAL_LEDOn(LED4);
		  bDisplayInitialized = 0;
		  vTaskDelete(NULL);
	  }

}

/************************ (C) COPYRIGHT Vigeltek Inc *****END OF FILE****/
