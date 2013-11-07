/*
  ******************************************************************************
  * @file    displayTask.h
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


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef DISPLAYTASK_H_
#define DISPLAYTASK_H_


/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx.h"
#include "stm32l100c_discovery.h"
#include "applicationTypes.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/ 

void Init_Display(void);
void Reset_Display(void);
void DrawScreen(screen_enum_t scn);
void RefreshScreen(void);
void UpdateTime(void);
void UpdateDate(void);
void displayTask(void * pvParameters);

#endif /* DISPLAYTASK_H_ */
