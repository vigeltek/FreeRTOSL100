/*
  ******************************************************************************
  * @file    applicationTypes.h
  * @author  George
  * @version V1.0.0
  * @date    Oct 22, 2013
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef APPLICATIONTYPES_H_
#define APPLICATIONTYPES_H_

/* Includes ------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
 typedef enum {
 	EmpLoggedInScn = 0,
 	EmpLoggedOutScn = 1,
 	ClientScn = 2,
 	ActivationScn = 3,
 	TestScn = 4,
 	ConfigurationScn = 5,
 	AuthenticatingScn = 6,
 	MessageListScn = 7,
 	NewMessageScn = 8,
 	ReadMessageScn = 9,
 	TaskListScn = 10,
 	TaskViewScn = 11,
 	ScheduleScn = 12,
 	TimesheetScn = 13,
 	TimeApproveScn = 14,
 	LockedScn = 15,
 	SplashScn = 16,
 	LoadingAnim = 17,
 	FingerScanAnim = 18
 } screen_enum_t;

typedef struct
{
	uint8_t senderTaskID;
	uint8_t bHdrEnabled;
	uint8_t bFtrEnabled;
	uint8_t bAnimationEnabled;
	uint8_t numberFrames;
	uint8_t currFrame;
	screen_enum_t drawScn;
	//portTickType tickStamp;
} display_item_t;

typedef struct
{
	uint8_t eventStart;
	screen_enum_t currScn;
	unsigned int xLoc;
	unsigned int yLoc;
} touch_point_t;

typedef enum {
	Text = 0,
	Sprite = 1,
	FullScreenSprite = 2,
	Line = 3,
	Circle = 4,
	Triangle = 5,
	SolidClear = 6
} screen_obj_enum_t;

typedef enum {
	none = 0,
	centered = 1,			// within active rectangle
	x_centered = 2,			// x parameter will be centered in relation to active rectangle
	y_centered = 3			// y parameter will be centered in relation to active rectangle
} text_align_enum_t;

typedef struct
{
	uint8_t objectId;			// max 255 objects on the screen
	screen_obj_enum_t objEnumType;
	uint8_t isHitTestable;
	void* pData;
} screen_obj_t;

typedef struct Point
{
	uint16_t x;
	uint16_t y;
} Point;

typedef struct Rectangle
{
	uint16_t x;
	uint16_t y;
	uint16_t width;
	uint16_t height;
} Rectangle;

typedef struct imageInfo
{

   uint32_t start_addr;
   uint32_t image_size;
   uint16_t image_width;
   uint16_t image_height;
} IMAGE_INFO;


typedef struct fontInfo
{
   uint16_t char_id;
   uint32_t start_addr;
   uint16_t char_width;
   uint16_t char_height;
   uint16_t char_xoffset;
   uint16_t char_yoffset;
   uint16_t char_xadvance;
} FONT_INFO;

typedef struct
{
	const FONT_INFO* font;
	text_align_enum_t alignment;
	uint16_t startX;
	uint16_t startY;
} so_text_data;

typedef struct
{
	uint16_t clearColor;
	uint16_t startX;
	uint16_t startY;
	uint16_t width;
	uint16_t height;
} so_clear_data;

typedef struct
{
	screen_enum_t screenID;
	uint8_t screenObjSize;
	screen_obj_t *screenObjects;
} screen_t;

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/ 

#endif /* APPLICATIONTYPES_H_ */


/************************ (C) COPYRIGHT Vigeltek Inc *****END OF FILE****/
