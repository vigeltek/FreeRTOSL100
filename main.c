/**
  ******************************************************************************
  * @file    main.c
  * @author  George Vigelette
  * @version V1.0.0
  * @date    Oct 18, 2013
  * @brief
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 Vigeltek Inc</center></h2>
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

// FreeRTOS Includes
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "main.h"
#include "displayTask.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define Demo_Task_PRIO          ( tskIDLE_PRIORITY  + 4 )
#define Demo_Task_STACK         ( 512 )

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
//static __IO uint32_t TimingDelay;
xTaskHandle            	Demo_Handle;
xTaskHandle				hDisplay;


/* Private function prototypes -----------------------------------------------*/
static void Demo_Task(void * pvParameters);




/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
    RCC_ClocksTypeDef RCC_Clocks;
    RCC_GetClocksFreq(&RCC_Clocks);
    SysTick_Config(RCC_Clocks.HCLK_Frequency / 1000);
    STM_EVAL_LEDInit(LED3);
	STM_EVAL_LEDOff(LED3);
	STM_EVAL_LEDInit(LED4);
	STM_EVAL_LEDOn(LED4);

    /* Create demo task */
	xTaskCreate(Demo_Task,
              (signed char const*)"DEMO",
              0x200,
              NULL,
              4,
              &Demo_Handle);

	xTaskCreate(displayTask,
              (signed char const*)"DISPLAY",
              0x800,
              NULL,
              4,
              &hDisplay);

	STM_EVAL_LEDOff(LED4);



	/* Start the FreeRTOS scheduler */
	vTaskStartScheduler();

	while(1)
	{

	}
}

/**
  * @brief  Demonstration task
  * @param  pvParameters not used
  * @retval None
  */
static void Demo_Task(void * pvParameters)
{
	// define variable for next wake time
	portTickType xNextWakeTime;
	/* Initialize xNextWakeTime - this only needs to be done once. */
	xNextWakeTime = xTaskGetTickCount();

	/* Configure LED3 on STM32L100C-Discovery */
	STM_EVAL_LEDInit(LED3);

	/* Start Demo */
	for( ;; )
	{
		// Toggle LED3
		STM_EVAL_LEDToggle(LED3);

		/* Place this task in the blocked state until it is time to run again.
		The block time is specified in ticks, the constant used converts ticks
		to ms.  While in the Blocked state this task will not consume any CPU
		time. */
		vTaskDelayUntil( &xNextWakeTime, 250 / portTICK_RATE_MS  );		//60 will be  ~15fps

	}
}

/* @brief  Tick callback function
* @param  None
* @retval None
*/
void vApplicationTickHook( void )
{

}

/* @brief  Stack Overflow callback function
* @param  None
* @retval None
*/
void vApplicationStackOverflowHook( xTaskHandle xTask, signed char *pcTaskName )
{
	STM_EVAL_LEDOff(LED4);
}

/**
  * @brief  Application Idle callback function
  * @param  None
  * @retval None
  */
void vApplicationIdleHook( void )
{
}

/**
  * @brief  Error callback function
  * @param  None
  * @retval None
  */
void vApplicationMallocFailedHook( void )
{
	STM_EVAL_LEDOff(LED4);
	while (1)
	{}
}


///**
//  * @brief  Inserts a delay time.
//  * @param  nTime: specifies the delay time length, in 1 ms.
//  * @retval None
//  */
//void Delay(__IO uint32_t nTime)
//{
//  TimingDelay = nTime;
//
//  while(TimingDelay != 0);
//}
//
///**
//  * @brief  Decrements the TimingDelay variable.
//  * @param  None
//  * @retval None
//  */
//void TimingDelay_Decrement(void)
//{
//  if (TimingDelay != 0x00)
//  {
//    TimingDelay--;
//  }
//}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {}
}
#endif
