/******************************************************************************
  * @file    rominfo.h
  * @author  ROM Maker Generated
  * @version V1.0.0
  * @date   10/25/2013
  * @brief   This file contains the headers for images stored on ROM.
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


#ifndef ROMINFO_H_
#define ROMINFO_H_
#include "applicationTypes.h"



/* Arial Font Section */

const FONT_INFO gArial16[95] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x000000, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x000100, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x0001C0, .char_width = 3 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 3},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x000220, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x0002E0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x0003C0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x0004C0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x0005C0, .char_width = 11 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x000720, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x000820, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x000920, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x0009C0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x000AA0, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x000B60, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x000C60, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x000D60, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x000E80, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x000F80, .char_width = 13 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x001120, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x0011A0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x001280, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x001320, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x0013A0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x0014A0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x0015A0, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x001660, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x001760, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x001860, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x001960, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x001A60, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 96 , .start_addr = 0x001B40, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x001BC0, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x001CE0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x001DE0, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x001E60, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x001F00, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x001F80, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x0020A0, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x0021C0, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x0022E0, .char_width = 14 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x0024A0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x0025E0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x002720, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x002840, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x002960, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x002AA0, .char_width = 11 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x002C00, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x002D20, .char_width = 11 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x002E80, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x002FC0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x003100, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x003200, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x003340, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x003420, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x0034A0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x0035E0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x003720, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x003820, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x003940, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x003A80, .char_width = 9 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x003BA0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x003CE0, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x003E20, .char_width = 13 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x003FC0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x0040C0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x0041C0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x0042C0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x0043C0, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x004460, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x004500, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x0045E0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x0046C0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x0047A0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x0048A0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x0049A0, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x004AA0, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x004B80, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x004C60, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x004D40, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x004E20, .char_width = 5 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x004EC0, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x004F40, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x004FC0, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x005040, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x005140, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x005200, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x005280, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x005300, .char_width = 3 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 3},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x005360, .char_width = 10 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x0054A0, .char_width = 12 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x005620, .char_width = 7 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x005700, .char_width = 8 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x005800, .char_width = 6 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x0058C0, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x005940, .char_width = 4 , .char_height = 16, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4}
};



/* Arial Font Section */

const FONT_INFO gArial18[95] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x0059C0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x005B04, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x005BDC, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x005C6C, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x005D44, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x005E64, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x005FA8, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x0060EC, .char_width = 13 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x0062C0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x006404, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x006548, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x006620, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x006740, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x006818, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x00695C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x006AA0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x006BE4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x006D28, .char_width = 14 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x006F20, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x006FB0, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x0070D0, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x007184, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x007214, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x007358, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x00749C, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x007574, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x0076B8, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x0077FC, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x00791C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x007A60, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 96 , .start_addr = 0x007BA4, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x007C58, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x007DC0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x007F04, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x007FB8, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x00806C, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x008120, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x008288, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x008414, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x0085A0, .char_width = 16 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x0087E0, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x008990, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x008B1C, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x008C84, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x008DEC, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x008F78, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x009128, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x009290, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x009440, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x0095CC, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x00977C, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x0098E4, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x009A70, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x009B90, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x009C20, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x009DAC, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x009F5C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x00A0A0, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x00A208, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x00A394, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x00A520, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x00A688, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x00A838, .char_width = 15 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x00AA54, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x00AB98, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x00ACDC, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x00AE20, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x00AF64, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x00B018, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x00B0CC, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x00B1EC, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x00B30C, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x00B42C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x00B570, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x00B6B4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x00B7F8, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x00B918, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x00BA38, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x00BB58, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x00BC78, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x00BD2C, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x00BDBC, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x00BE70, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x00BF00, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x00C044, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x00C11C, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x00C1D0, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x00C284, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x00C314, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x00C4A0, .char_width = 13 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x00C674, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x00C794, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x00C8D8, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x00C9D4, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x00CA88, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4}
};



/* Arial Font Section */

const FONT_INFO gArial24[95] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x00CB18, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x00CD58, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x00CED8, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x00CFC8, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x00D148, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x00D358, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x00D598, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x00D7D8, .char_width = 17 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 17},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x00DB08, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x00DD48, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x00DF88, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x00E0D8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x00E2E8, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x00E498, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x00E6D8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x00E918, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x00EB58, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x00ED98, .char_width = 18 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 18},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x00F0F8, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x00F1E8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x00F428, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x00F548, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x00F638, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x00F878, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x00FAB8, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x00FC38, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x00FE48, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x010088, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x010298, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x0104D8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 96 , .start_addr = 0x0106E8, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x010838, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x010AA8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x010CE8, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x010E38, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x010F88, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x0110D8, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x011348, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x0115E8, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x011888, .char_width = 20 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 20},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x011C48, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x011F18, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x0121E8, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x012458, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x0126C8, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x012998, .char_width = 16 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x012C98, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x012F08, .char_width = 16 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x013208, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x0134D8, .char_width = 16 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x0137D8, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x013A48, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x013D18, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x013F28, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x014018, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x0142E8, .char_width = 16 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x0145E8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x014828, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x014A98, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x014D68, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x015038, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x015308, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x0155D8, .char_width = 20 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 20},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x015998, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x015BD8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x015E18, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x016058, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x016298, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x0163E8, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x016538, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x016748, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x016958, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x016B68, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x016D78, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x016F88, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x0171C8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x0173D8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x0175E8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x0177F8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x017A08, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x017B58, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x017C48, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x017D98, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x017E88, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x0180C8, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x018248, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x018398, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x0184E8, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x0185D8, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x0188A8, .char_width = 17 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 17},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x018BD8, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x018DE8, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x019028, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x0191D8, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x0192F8, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5}
};



/* Arial Black Font Section */

const FONT_INFO gArialBlack18[95] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x0193E8, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x01952C, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x019628, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x0196B8, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x0197B4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x0198F8, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x019A60, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x019BA4, .char_width = 14 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x019D9C, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x019F04, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x01A048, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x01A120, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x01A240, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x01A33C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x01A480, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x01A5C4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x01A708, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x01A84C, .char_width = 13 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x01AA20, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x01AAB0, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x01AC18, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x01ACCC, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x01AD5C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x01AEA0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x01AFE4, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x01B0E0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x01B224, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x01B368, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x01B4AC, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x01B5F0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 96 , .start_addr = 0x01B734, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x01B7E8, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x01B908, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x01BA4C, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x01BB00, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x01BBB4, .char_width = 6 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x01BC8C, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x01BDF4, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x01BFA4, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x01C154, .char_width = 15 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x01C370, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x01C520, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x01C6AC, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x01C838, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x01C97C, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x01CB08, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x01CC94, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x01CDD8, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x01CF64, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x01D0F0, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x01D2A0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x01D3E4, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x01D594, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x01D6D8, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x01D78C, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x01D918, .char_width = 11 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x01DAA4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x01DBE8, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x01DD2C, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x01DE94, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x01DFFC, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x01E164, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x01E314, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x01E4C4, .char_width = 8 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x01E5E4, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x01E728, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x01E86C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x01E9B0, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x01EA40, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x01EAD0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x01EC14, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x01ED58, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x01EE9C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x01EFE0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x01F124, .char_width = 10 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x01F28C, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x01F3D0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x01F514, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x01F658, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x01F79C, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x01F850, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x01F8E0, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x01F994, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x01FA24, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x01FB68, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x01FC64, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x01FD18, .char_width = 5 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x01FDCC, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x01FE5C, .char_width = 12 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x02000C, .char_width = 13 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x0201E0, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x020324, .char_width = 9 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x020468, .char_width = 7 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x020564, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x0205F4, .char_width = 4 , .char_height = 18, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 4}
};



/* Arial Black Font Section */

const FONT_INFO gArialBlack24[95] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x020684, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x020894, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x020A14, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x020B04, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x020C54, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x020E04, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x021044, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x0212B4, .char_width = 18 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 18},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x021614, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x021854, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x021A64, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x021BE4, .char_width = 10 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x021DC4, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x021F74, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x022184, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x022394, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x0225A4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x0227B4, .char_width = 17 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 17},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x022AE4, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x022C04, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x022E44, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x022F64, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x023084, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x023294, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x0234A4, .char_width = 8 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x023624, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x023834, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x023A44, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x023C54, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x023E64, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 96 , .start_addr = 0x024074, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x024194, .char_width = 10 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x024374, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x024584, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x0246D4, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x0247F4, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x024944, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x024B84, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x024E54, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x025124, .char_width = 19 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 19},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x0254B4, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x025784, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x025A24, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x025C64, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x025EA4, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x026144, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x0263E4, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x026624, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x0268C4, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x026B64, .char_width = 16 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 16},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x026E64, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x027074, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x027344, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x027584, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x0276D4, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x027974, .char_width = 14 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 14},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x027C14, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x027E24, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x028064, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x0282D4, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x028544, .char_width = 13 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 13},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x0287B4, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x028A84, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x028D54, .char_width = 10 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 10},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x028F34, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x029144, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x029354, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x029564, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x029684, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x0297A4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x0299B4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x029BC4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x029DD4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x029FE4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x02A1F4, .char_width = 12 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 12},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x02A434, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x02A644, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x02A854, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x02AA64, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x02AC74, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x02AD94, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x02AEB4, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x02AFD4, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x02B0F4, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x02B304, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x02B4B4, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x02B604, .char_width = 7 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 7},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x02B754, .char_width = 5 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 5},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x02B844, .char_width = 15 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 15},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x02BB14, .char_width = 17 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 17},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x02BE44, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x02C054, .char_width = 11 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 11},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x02C264, .char_width = 9 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 9},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x02C414, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x02C534, .char_width = 6 , .char_height = 24, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 6}
};



/* Terminal Font Section */

const FONT_INFO gTerminal12[94] = {
    (FONT_INFO){.char_id = 126 , .start_addr = 0x02C654, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 125 , .start_addr = 0x02C714, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 124 , .start_addr = 0x02C7D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 123 , .start_addr = 0x02C894, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 122 , .start_addr = 0x02C954, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 121 , .start_addr = 0x02CA14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 120 , .start_addr = 0x02CAD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 119 , .start_addr = 0x02CB94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 118 , .start_addr = 0x02CC54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 117 , .start_addr = 0x02CD14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 116 , .start_addr = 0x02CDD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 115 , .start_addr = 0x02CE94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 114 , .start_addr = 0x02CF54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 113 , .start_addr = 0x02D014, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 112 , .start_addr = 0x02D0D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 111 , .start_addr = 0x02D194, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 110 , .start_addr = 0x02D254, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 109 , .start_addr = 0x02D314, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 108 , .start_addr = 0x02D3D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 107 , .start_addr = 0x02D494, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 106 , .start_addr = 0x02D554, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 105 , .start_addr = 0x02D614, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 104 , .start_addr = 0x02D6D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 103 , .start_addr = 0x02D794, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 102 , .start_addr = 0x02D854, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 101 , .start_addr = 0x02D914, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 100 , .start_addr = 0x02D9D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 99 , .start_addr = 0x02DA94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 98 , .start_addr = 0x02DB54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 97 , .start_addr = 0x02DC14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 95 , .start_addr = 0x02DCD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 94 , .start_addr = 0x02DD94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 93 , .start_addr = 0x02DE54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 92 , .start_addr = 0x02DF14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 91 , .start_addr = 0x02DFD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 90 , .start_addr = 0x02E094, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 89 , .start_addr = 0x02E154, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 88 , .start_addr = 0x02E214, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 87 , .start_addr = 0x02E2D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 86 , .start_addr = 0x02E394, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 85 , .start_addr = 0x02E454, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 84 , .start_addr = 0x02E514, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 83 , .start_addr = 0x02E5D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 82 , .start_addr = 0x02E694, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 81 , .start_addr = 0x02E754, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 80 , .start_addr = 0x02E814, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 79 , .start_addr = 0x02E8D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 78 , .start_addr = 0x02E994, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 77 , .start_addr = 0x02EA54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 76 , .start_addr = 0x02EB14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 75 , .start_addr = 0x02EBD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 74 , .start_addr = 0x02EC94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 73 , .start_addr = 0x02ED54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 72 , .start_addr = 0x02EE14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 71 , .start_addr = 0x02EED4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 70 , .start_addr = 0x02EF94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 69 , .start_addr = 0x02F054, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 68 , .start_addr = 0x02F114, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 67 , .start_addr = 0x02F1D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 66 , .start_addr = 0x02F294, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 65 , .start_addr = 0x02F354, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 64 , .start_addr = 0x02F414, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 63 , .start_addr = 0x02F4D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 62 , .start_addr = 0x02F594, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 61 , .start_addr = 0x02F654, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 60 , .start_addr = 0x02F714, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 59 , .start_addr = 0x02F7D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 58 , .start_addr = 0x02F894, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 57 , .start_addr = 0x02F954, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 56 , .start_addr = 0x02FA14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 55 , .start_addr = 0x02FAD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 54 , .start_addr = 0x02FB94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 53 , .start_addr = 0x02FC54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 52 , .start_addr = 0x02FD14, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 51 , .start_addr = 0x02FDD4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 50 , .start_addr = 0x02FE94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 49 , .start_addr = 0x02FF54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 48 , .start_addr = 0x030014, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 47 , .start_addr = 0x0300D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 46 , .start_addr = 0x030194, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 45 , .start_addr = 0x030254, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 44 , .start_addr = 0x030314, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 43 , .start_addr = 0x0303D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 42 , .start_addr = 0x030494, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 41 , .start_addr = 0x030554, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 40 , .start_addr = 0x030614, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 39 , .start_addr = 0x0306D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 38 , .start_addr = 0x030794, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 37 , .start_addr = 0x030854, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 36 , .start_addr = 0x030914, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 35 , .start_addr = 0x0309D4, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 34 , .start_addr = 0x030A94, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 33 , .start_addr = 0x030B54, .char_width = 8 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 8},
    (FONT_INFO){.char_id = 32 , .start_addr = 0x030C14, .char_width = 24 , .char_height = 12, .char_xoffset = 0, .char_yoffset = 0, .char_xadvance = 24}
};



/* Images Section */

const IMAGE_INFO gFingerScan = (IMAGE_INFO){.start_addr = 0x030E54, .image_size = 0x037ECC, .image_width=81, .image_height=1414};
const IMAGE_INFO gProgressBar = (IMAGE_INFO){.start_addr = 0x068D20, .image_size = 0x017CA0, .image_width=174, .image_height=280};
const IMAGE_INFO g2co_48 = (IMAGE_INFO){.start_addr = 0x0809C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO g3gIcon20 = (IMAGE_INFO){.start_addr = 0x081BC0, .image_size = 0x000320, .image_width=20, .image_height=20};
const IMAGE_INFO g3gIcon32 = (IMAGE_INFO){.start_addr = 0x081EE0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO g3gIcon48 = (IMAGE_INFO){.start_addr = 0x0826E0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gAbort = (IMAGE_INFO){.start_addr = 0x0838E0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gach_48 = (IMAGE_INFO){.start_addr = 0x084AE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gad = (IMAGE_INFO){.start_addr = 0x085CE0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gAddevent = (IMAGE_INFO){.start_addr = 0x085F48, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gae = (IMAGE_INFO){.start_addr = 0x087148, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gaf = (IMAGE_INFO){.start_addr = 0x0873B0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gag = (IMAGE_INFO){.start_addr = 0x087618, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gai = (IMAGE_INFO){.start_addr = 0x087880, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gal = (IMAGE_INFO){.start_addr = 0x087AE8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gAlarmclock = (IMAGE_INFO){.start_addr = 0x087D50, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gAlarm = (IMAGE_INFO){.start_addr = 0x088F50, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gAlertIcon = (IMAGE_INFO){.start_addr = 0x08A150, .image_size = 0x000F00, .image_width=48, .image_height=40};
const IMAGE_INFO gam = (IMAGE_INFO){.start_addr = 0x08B050, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gamex_48 = (IMAGE_INFO){.start_addr = 0x08B2B8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gan = (IMAGE_INFO){.start_addr = 0x08C4B8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gao = (IMAGE_INFO){.start_addr = 0x08C720, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gar = (IMAGE_INFO){.start_addr = 0x08C988, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gas = (IMAGE_INFO){.start_addr = 0x08CBF0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gat = (IMAGE_INFO){.start_addr = 0x08CE58, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gAtomic = (IMAGE_INFO){.start_addr = 0x08D0C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gau = (IMAGE_INFO){.start_addr = 0x08E2C0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gaudioboo = (IMAGE_INFO){.start_addr = 0x08E528, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gaw = (IMAGE_INFO){.start_addr = 0x08ED28, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gax = (IMAGE_INFO){.start_addr = 0x08EF90, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gaz = (IMAGE_INFO){.start_addr = 0x08F1F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gba = (IMAGE_INFO){.start_addr = 0x08F460, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gback = (IMAGE_INFO){.start_addr = 0x08F6C8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gBatteryIcons = (IMAGE_INFO){.start_addr = 0x0908C8, .image_size = 0x002580, .image_width=48, .image_height=100};
const IMAGE_INFO gbb = (IMAGE_INFO){.start_addr = 0x092E48, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbd = (IMAGE_INFO){.start_addr = 0x0930B0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbe = (IMAGE_INFO){.start_addr = 0x093318, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbebo = (IMAGE_INFO){.start_addr = 0x093580, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gbehance = (IMAGE_INFO){.start_addr = 0x093D80, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gbf = (IMAGE_INFO){.start_addr = 0x094580, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbg = (IMAGE_INFO){.start_addr = 0x0947E8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbh = (IMAGE_INFO){.start_addr = 0x094A50, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbi = (IMAGE_INFO){.start_addr = 0x094CB8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbj = (IMAGE_INFO){.start_addr = 0x094F20, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gblogger = (IMAGE_INFO){.start_addr = 0x095188, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gblue_wifi32 = (IMAGE_INFO){.start_addr = 0x095988, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gblue_wifi48 = (IMAGE_INFO){.start_addr = 0x096188, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gBlueCheckmark = (IMAGE_INFO){.start_addr = 0x097388, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gBlueTooth32 = (IMAGE_INFO){.start_addr = 0x097B88, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gBlueTooth48 = (IMAGE_INFO){.start_addr = 0x098388, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gbm = (IMAGE_INFO){.start_addr = 0x099588, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbn = (IMAGE_INFO){.start_addr = 0x0997F0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbo = (IMAGE_INFO){.start_addr = 0x099A58, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gBomb = (IMAGE_INFO){.start_addr = 0x099CC0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gbr = (IMAGE_INFO){.start_addr = 0x09AEC0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbs = (IMAGE_INFO){.start_addr = 0x09B128, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbt = (IMAGE_INFO){.start_addr = 0x09B390, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gBtnActivate = (IMAGE_INFO){.start_addr = 0x09B5F8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnAlerts = (IMAGE_INFO){.start_addr = 0x0A1034, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnApproveTime = (IMAGE_INFO){.start_addr = 0x0A6A70, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnConfig = (IMAGE_INFO){.start_addr = 0x0AC4AC, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnDeleteMessage = (IMAGE_INFO){.start_addr = 0x0B1EE8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnEndShift = (IMAGE_INFO){.start_addr = 0x0B7924, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnExit = (IMAGE_INFO){.start_addr = 0x0BD360, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnLockExit = (IMAGE_INFO){.start_addr = 0x0C2D9C, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnMessages = (IMAGE_INFO){.start_addr = 0x0C87D8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnNewMessage = (IMAGE_INFO){.start_addr = 0x0CE214, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnReports = (IMAGE_INFO){.start_addr = 0x0D3C50, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnReset = (IMAGE_INFO){.start_addr = 0x0D968C, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnSchedule = (IMAGE_INFO){.start_addr = 0x0DF0C8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnSettings = (IMAGE_INFO){.start_addr = 0x0E4B04, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnSetup = (IMAGE_INFO){.start_addr = 0x0EA540, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnStartShift = (IMAGE_INFO){.start_addr = 0x0EFF7C, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnTaskList = (IMAGE_INFO){.start_addr = 0x0F59B8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnTest = (IMAGE_INFO){.start_addr = 0x0FB3F4, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gBtnTimesheet = (IMAGE_INFO){.start_addr = 0x100E30, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gbusinessman_delete = (IMAGE_INFO){.start_addr = 0x10686C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gbusinessman_preferences = (IMAGE_INFO){.start_addr = 0x107A6C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gButton_Bare = (IMAGE_INFO){.start_addr = 0x108C6C, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gButtonImage = (IMAGE_INFO){.start_addr = 0x10E6A8, .image_size = 0x005A3C, .image_width=210, .image_height=55};
const IMAGE_INFO gbuzz = (IMAGE_INFO){.start_addr = 0x1140E4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gbv = (IMAGE_INFO){.start_addr = 0x1148E4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbw = (IMAGE_INFO){.start_addr = 0x114B4C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gby = (IMAGE_INFO){.start_addr = 0x114DB4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gbz = (IMAGE_INFO){.start_addr = 0x11501C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gca = (IMAGE_INFO){.start_addr = 0x115284, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcalendar = (IMAGE_INFO){.start_addr = 0x1154EC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gCall = (IMAGE_INFO){.start_addr = 0x1166EC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcatalonia = (IMAGE_INFO){.start_addr = 0x1178EC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcc = (IMAGE_INFO){.start_addr = 0x117B54, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcd = (IMAGE_INFO){.start_addr = 0x117DBC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcf = (IMAGE_INFO){.start_addr = 0x118024, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcg = (IMAGE_INFO){.start_addr = 0x11828C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gch = (IMAGE_INFO){.start_addr = 0x1184F4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gchart = (IMAGE_INFO){.start_addr = 0x11875C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gCheckMarkGreen = (IMAGE_INFO){.start_addr = 0x11995C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gci = (IMAGE_INFO){.start_addr = 0x11AB5C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gCirculation = (IMAGE_INFO){.start_addr = 0x11ADC4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcirrus_48 = (IMAGE_INFO){.start_addr = 0x11BFC4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gck = (IMAGE_INFO){.start_addr = 0x11D1C4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcl = (IMAGE_INFO){.start_addr = 0x11D42C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gClockface = (IMAGE_INFO){.start_addr = 0x11D694, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gClock = (IMAGE_INFO){.start_addr = 0x11E894, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcm = (IMAGE_INFO){.start_addr = 0x11FA94, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcn = (IMAGE_INFO){.start_addr = 0x11FCFC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gco = (IMAGE_INFO){.start_addr = 0x11FF64, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gCoffeeTime = (IMAGE_INFO){.start_addr = 0x1201CC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcr = (IMAGE_INFO){.start_addr = 0x1213CC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcreativecommons = (IMAGE_INFO){.start_addr = 0x121634, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gCredit = (IMAGE_INFO){.start_addr = 0x121E34, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcs = (IMAGE_INFO){.start_addr = 0x123034, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcu = (IMAGE_INFO){.start_addr = 0x12329C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcv = (IMAGE_INFO){.start_addr = 0x123504, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcx = (IMAGE_INFO){.start_addr = 0x12376C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gcy = (IMAGE_INFO){.start_addr = 0x1239D4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gCycle = (IMAGE_INFO){.start_addr = 0x123C3C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gcz = (IMAGE_INFO){.start_addr = 0x124E3C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gdailybooth = (IMAGE_INFO){.start_addr = 0x1250A4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gDateandtime = (IMAGE_INFO){.start_addr = 0x1258A4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdate_time_preferences = (IMAGE_INFO){.start_addr = 0x126AA4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gDay = (IMAGE_INFO){.start_addr = 0x127CA4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gde = (IMAGE_INFO){.start_addr = 0x128EA4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gDeleteevent = (IMAGE_INFO){.start_addr = 0x12910C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdelicious = (IMAGE_INFO){.start_addr = 0x12A30C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gdelta_48 = (IMAGE_INFO){.start_addr = 0x12AB0C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdesignfloat = (IMAGE_INFO){.start_addr = 0x12BD0C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gdeviantart = (IMAGE_INFO){.start_addr = 0x12C50C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gDeviceLockedScreen = (IMAGE_INFO){.start_addr = 0x12CD0C, .image_size = 0x03FC00, .image_width=480, .image_height=272};
const IMAGE_INFO gdigg = (IMAGE_INFO){.start_addr = 0x16C90C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gdiners_club_48 = (IMAGE_INFO){.start_addr = 0x16D10C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdirect_debit_48 = (IMAGE_INFO){.start_addr = 0x16E30C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gDisaster = (IMAGE_INFO){.start_addr = 0x16F50C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdiscover_48 = (IMAGE_INFO){.start_addr = 0x17070C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdj = (IMAGE_INFO){.start_addr = 0x17190C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gdk = (IMAGE_INFO){.start_addr = 0x171B74, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gdm = (IMAGE_INFO){.start_addr = 0x171DDC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gdo = (IMAGE_INFO){.start_addr = 0x172044, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gDoneevent = (IMAGE_INFO){.start_addr = 0x1722AC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gdopplr = (IMAGE_INFO){.start_addr = 0x1734AC, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gdribbble = (IMAGE_INFO){.start_addr = 0x173CAC, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gdz = (IMAGE_INFO){.start_addr = 0x1744AC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gEarth = (IMAGE_INFO){.start_addr = 0x174714, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gec = (IMAGE_INFO){.start_addr = 0x175914, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gee = (IMAGE_INFO){.start_addr = 0x175B7C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO geg = (IMAGE_INFO){.start_addr = 0x175DE4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO geh = (IMAGE_INFO){.start_addr = 0x17604C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gemail = (IMAGE_INFO){.start_addr = 0x1762B4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gember = (IMAGE_INFO){.start_addr = 0x176AB4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gEmergencyoff = (IMAGE_INFO){.start_addr = 0x1772B4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gEmergencyon = (IMAGE_INFO){.start_addr = 0x1784B4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gengland = (IMAGE_INFO){.start_addr = 0x1796B4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gEnlargetime = (IMAGE_INFO){.start_addr = 0x17991C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ger = (IMAGE_INFO){.start_addr = 0x17AB1C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ges = (IMAGE_INFO){.start_addr = 0x17AD84, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO get = (IMAGE_INFO){.start_addr = 0x17AFEC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO geu = (IMAGE_INFO){.start_addr = 0x17B254, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO geuropeanunion = (IMAGE_INFO){.start_addr = 0x17B4BC, .image_size = 0x000160, .image_width=16, .image_height=11};
const IMAGE_INFO gEventinfo = (IMAGE_INFO){.start_addr = 0x17B61C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gEventmanager = (IMAGE_INFO){.start_addr = 0x17C81C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gEventstatus = (IMAGE_INFO){.start_addr = 0x17DA1C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gEvent = (IMAGE_INFO){.start_addr = 0x17EC1C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gEvents = (IMAGE_INFO){.start_addr = 0x17FE1C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gExecute = (IMAGE_INFO){.start_addr = 0x18101C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gfacebook = (IMAGE_INFO){.start_addr = 0x18221C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gfam = (IMAGE_INFO){.start_addr = 0x182A1C, .image_size = 0x000160, .image_width=16, .image_height=11};
const IMAGE_INFO gFast = (IMAGE_INFO){.start_addr = 0x182B7C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gfi = (IMAGE_INFO){.start_addr = 0x183D7C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gFilmclapper = (IMAGE_INFO){.start_addr = 0x183FE4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gFire = (IMAGE_INFO){.start_addr = 0x1851E4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gfj = (IMAGE_INFO){.start_addr = 0x1863E4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gfk = (IMAGE_INFO){.start_addr = 0x18664C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gflickr = (IMAGE_INFO){.start_addr = 0x1868B4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gfm = (IMAGE_INFO){.start_addr = 0x1870B4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gfo = (IMAGE_INFO){.start_addr = 0x18731C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gforrst = (IMAGE_INFO){.start_addr = 0x187584, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gfr = (IMAGE_INFO){.start_addr = 0x187D84, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gfriendfeed = (IMAGE_INFO){.start_addr = 0x187FEC, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gga = (IMAGE_INFO){.start_addr = 0x1887EC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggalicia = (IMAGE_INFO){.start_addr = 0x188A54, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gGauge = (IMAGE_INFO){.start_addr = 0x188CBC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ggb = (IMAGE_INFO){.start_addr = 0x189EBC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggd = (IMAGE_INFO){.start_addr = 0x18A124, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gge = (IMAGE_INFO){.start_addr = 0x18A38C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggf = (IMAGE_INFO){.start_addr = 0x18A5F4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggg = (IMAGE_INFO){.start_addr = 0x18A85C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggh = (IMAGE_INFO){.start_addr = 0x18AAC4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggi = (IMAGE_INFO){.start_addr = 0x18AD2C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggl = (IMAGE_INFO){.start_addr = 0x18AF94, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gGlobaltime = (IMAGE_INFO){.start_addr = 0x18B1FC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gGlobe = (IMAGE_INFO){.start_addr = 0x18C3FC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ggm = (IMAGE_INFO){.start_addr = 0x18D5FC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggn = (IMAGE_INFO){.start_addr = 0x18D864, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gGo = (IMAGE_INFO){.start_addr = 0x18DACC, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ggoogle = (IMAGE_INFO){.start_addr = 0x18ECCC, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO ggowalla = (IMAGE_INFO){.start_addr = 0x18F4CC, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO ggp = (IMAGE_INFO){.start_addr = 0x18FCCC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggq = (IMAGE_INFO){.start_addr = 0x18FF34, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggr = (IMAGE_INFO){.start_addr = 0x19019C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggrooveshark = (IMAGE_INFO){.start_addr = 0x190404, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO ggs = (IMAGE_INFO){.start_addr = 0x190C04, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggt = (IMAGE_INFO){.start_addr = 0x190E6C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggu = (IMAGE_INFO){.start_addr = 0x1910D4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggw = (IMAGE_INFO){.start_addr = 0x19133C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ggy = (IMAGE_INFO){.start_addr = 0x1915A4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gHistory = (IMAGE_INFO){.start_addr = 0x19180C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ghk = (IMAGE_INFO){.start_addr = 0x192A0C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ghm = (IMAGE_INFO){.start_addr = 0x192C74, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ghn = (IMAGE_INFO){.start_addr = 0x192EDC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gHolidays = (IMAGE_INFO){.start_addr = 0x193144, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gHourglass = (IMAGE_INFO){.start_addr = 0x194344, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO ghr = (IMAGE_INFO){.start_addr = 0x195544, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ght = (IMAGE_INFO){.start_addr = 0x1957AC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ghu = (IMAGE_INFO){.start_addr = 0x195A14, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO ghyves = (IMAGE_INFO){.start_addr = 0x195C7C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gicontexto_message_types_wait_blue = (IMAGE_INFO){.start_addr = 0x19647C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gid = (IMAGE_INFO){.start_addr = 0x196C7C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gie = (IMAGE_INFO){.start_addr = 0x196EE4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gil = (IMAGE_INFO){.start_addr = 0x19714C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gim = (IMAGE_INFO){.start_addr = 0x1973B4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gin = (IMAGE_INFO){.start_addr = 0x19761C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gIncome = (IMAGE_INFO){.start_addr = 0x197884, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gio = (IMAGE_INFO){.start_addr = 0x198A84, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO giq = (IMAGE_INFO){.start_addr = 0x198CEC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gir = (IMAGE_INFO){.start_addr = 0x198F54, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gis = (IMAGE_INFO){.start_addr = 0x1991BC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO git = (IMAGE_INFO){.start_addr = 0x199424, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gjcb_48 = (IMAGE_INFO){.start_addr = 0x19968C, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gje = (IMAGE_INFO){.start_addr = 0x19A88C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gjm = (IMAGE_INFO){.start_addr = 0x19AAF4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gjo = (IMAGE_INFO){.start_addr = 0x19AD5C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gjp = (IMAGE_INFO){.start_addr = 0x19AFC4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gke = (IMAGE_INFO){.start_addr = 0x19B22C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkg = (IMAGE_INFO){.start_addr = 0x19B494, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkh = (IMAGE_INFO){.start_addr = 0x19B6FC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gki = (IMAGE_INFO){.start_addr = 0x19B964, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkitty = (IMAGE_INFO){.start_addr = 0x19BBCC, .image_size = 0x0008C4, .image_width=33, .image_height=34};
const IMAGE_INFO gkm = (IMAGE_INFO){.start_addr = 0x19C490, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkn = (IMAGE_INFO){.start_addr = 0x19C6F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkp = (IMAGE_INFO){.start_addr = 0x19C960, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkr = (IMAGE_INFO){.start_addr = 0x19CBC8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkw = (IMAGE_INFO){.start_addr = 0x19CE30, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gky = (IMAGE_INFO){.start_addr = 0x19D098, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gkz = (IMAGE_INFO){.start_addr = 0x19D300, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gla = (IMAGE_INFO){.start_addr = 0x19D568, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glastfm = (IMAGE_INFO){.start_addr = 0x19D7D0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO glb = (IMAGE_INFO){.start_addr = 0x19DFD0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glc = (IMAGE_INFO){.start_addr = 0x19E238, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gli = (IMAGE_INFO){.start_addr = 0x19E4A0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glinkedin = (IMAGE_INFO){.start_addr = 0x19E708, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO glivejournal = (IMAGE_INFO){.start_addr = 0x19EF08, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO glk = (IMAGE_INFO){.start_addr = 0x19F708, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glockerz = (IMAGE_INFO){.start_addr = 0x19F970, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO glockIcon = (IMAGE_INFO){.start_addr = 0x1A0170, .image_size = 0x008000, .image_width=128, .image_height=128};
const IMAGE_INFO glr = (IMAGE_INFO){.start_addr = 0x1A8170, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gls = (IMAGE_INFO){.start_addr = 0x1A83D8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glt = (IMAGE_INFO){.start_addr = 0x1A8640, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glu = (IMAGE_INFO){.start_addr = 0x1A88A8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO glv = (IMAGE_INFO){.start_addr = 0x1A8B10, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gly = (IMAGE_INFO){.start_addr = 0x1A8D78, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gma = (IMAGE_INFO){.start_addr = 0x1A8FE0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmaestro_48 = (IMAGE_INFO){.start_addr = 0x1A9248, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmastercard_48 = (IMAGE_INFO){.start_addr = 0x1AA448, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmc = (IMAGE_INFO){.start_addr = 0x1AB648, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmd = (IMAGE_INFO){.start_addr = 0x1AB8B0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gme = (IMAGE_INFO){.start_addr = 0x1ABB18, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gMediumspeed = (IMAGE_INFO){.start_addr = 0x1ABD80, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmegavideo = (IMAGE_INFO){.start_addr = 0x1ACF80, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gmessage = (IMAGE_INFO){.start_addr = 0x1AD780, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmessage_add = (IMAGE_INFO){.start_addr = 0x1AE980, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmessage_delete = (IMAGE_INFO){.start_addr = 0x1AFB80, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmessage_edit = (IMAGE_INFO){.start_addr = 0x1B0D80, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmessages = (IMAGE_INFO){.start_addr = 0x1B1F80, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmf = (IMAGE_INFO){.start_addr = 0x1B3180, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmg = (IMAGE_INFO){.start_addr = 0x1B33E8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmh = (IMAGE_INFO){.start_addr = 0x1B3650, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmk = (IMAGE_INFO){.start_addr = 0x1B38B8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gml = (IMAGE_INFO){.start_addr = 0x1B3B20, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmm = (IMAGE_INFO){.start_addr = 0x1B3D88, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmn = (IMAGE_INFO){.start_addr = 0x1B3FF0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmo = (IMAGE_INFO){.start_addr = 0x1B4258, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gModifytime = (IMAGE_INFO){.start_addr = 0x1B44C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmoneybookers_48 = (IMAGE_INFO){.start_addr = 0x1B56C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gMoon = (IMAGE_INFO){.start_addr = 0x1B68C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gmp = (IMAGE_INFO){.start_addr = 0x1B7AC0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmq = (IMAGE_INFO){.start_addr = 0x1B7D28, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmr = (IMAGE_INFO){.start_addr = 0x1B7F90, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gms = (IMAGE_INFO){.start_addr = 0x1B81F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmt = (IMAGE_INFO){.start_addr = 0x1B8460, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmu = (IMAGE_INFO){.start_addr = 0x1B86C8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmv = (IMAGE_INFO){.start_addr = 0x1B8930, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmw = (IMAGE_INFO){.start_addr = 0x1B8B98, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmx = (IMAGE_INFO){.start_addr = 0x1B8E00, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmy = (IMAGE_INFO){.start_addr = 0x1B9068, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gmyspace = (IMAGE_INFO){.start_addr = 0x1B92D0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gmz = (IMAGE_INFO){.start_addr = 0x1B9AD0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gna = (IMAGE_INFO){.start_addr = 0x1B9D38, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gNavigator = (IMAGE_INFO){.start_addr = 0x1B9FA0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnc = (IMAGE_INFO){.start_addr = 0x1BB1A0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnc2 = (IMAGE_INFO){.start_addr = 0x1BB408, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gne = (IMAGE_INFO){.start_addr = 0x1BB670, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gNetworktime = (IMAGE_INFO){.start_addr = 0x1BB8D8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gNew = (IMAGE_INFO){.start_addr = 0x1BCAD8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gNextevent = (IMAGE_INFO){.start_addr = 0x1BDCD8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnf = (IMAGE_INFO){.start_addr = 0x1BEED8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gng = (IMAGE_INFO){.start_addr = 0x1BF140, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gni = (IMAGE_INFO){.start_addr = 0x1BF3A8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnl = (IMAGE_INFO){.start_addr = 0x1BF610, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gno = (IMAGE_INFO){.start_addr = 0x1BF878, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnote_add = (IMAGE_INFO){.start_addr = 0x1BFAE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnote_delete = (IMAGE_INFO){.start_addr = 0x1C0CE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnote_find = (IMAGE_INFO){.start_addr = 0x1C1EE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnote_new = (IMAGE_INFO){.start_addr = 0x1C30E0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnote_pinned = (IMAGE_INFO){.start_addr = 0x1C42E0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gnp = (IMAGE_INFO){.start_addr = 0x1C54E0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnr = (IMAGE_INFO){.start_addr = 0x1C5748, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnu = (IMAGE_INFO){.start_addr = 0x1C59B0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gnz = (IMAGE_INFO){.start_addr = 0x1C5C18, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gOkCancel = (IMAGE_INFO){.start_addr = 0x1C5E80, .image_size = 0x0025E0, .image_width=101, .image_height=48};
const IMAGE_INFO gom = (IMAGE_INFO){.start_addr = 0x1C8460, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gOnlineImage = (IMAGE_INFO){.start_addr = 0x1C86C8, .image_size = 0x000320, .image_width=20, .image_height=20};
const IMAGE_INFO gOnlineImage32 = (IMAGE_INFO){.start_addr = 0x1C89E8, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gOnlineImage48 = (IMAGE_INFO){.start_addr = 0x1C91E8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpa = (IMAGE_INFO){.start_addr = 0x1CA3E8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpaypal_48 = (IMAGE_INFO){.start_addr = 0x1CA650, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpe = (IMAGE_INFO){.start_addr = 0x1CB850, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gPeriodend = (IMAGE_INFO){.start_addr = 0x1CBAB8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpf = (IMAGE_INFO){.start_addr = 0x1CCCB8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpg = (IMAGE_INFO){.start_addr = 0x1CCF20, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gph = (IMAGE_INFO){.start_addr = 0x1CD188, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpiano = (IMAGE_INFO){.start_addr = 0x1CD3F0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gpin_green = (IMAGE_INFO){.start_addr = 0x1CDBF0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpin_grey = (IMAGE_INFO){.start_addr = 0x1CEDF0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpin_red = (IMAGE_INFO){.start_addr = 0x1CFFF0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpin_yellow = (IMAGE_INFO){.start_addr = 0x1D11F0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gpk = (IMAGE_INFO){.start_addr = 0x1D23F0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpl = (IMAGE_INFO){.start_addr = 0x1D2658, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gPlay = (IMAGE_INFO){.start_addr = 0x1D28C0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gplayfire = (IMAGE_INFO){.start_addr = 0x1D3AC0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gplaystation = (IMAGE_INFO){.start_addr = 0x1D42C0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gpm = (IMAGE_INFO){.start_addr = 0x1D4AC0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpn = (IMAGE_INFO){.start_addr = 0x1D4D28, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpr = (IMAGE_INFO){.start_addr = 0x1D4F90, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpresentation = (IMAGE_INFO){.start_addr = 0x1D51F8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gPreviousevent = (IMAGE_INFO){.start_addr = 0x1D63F8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gps = (IMAGE_INFO){.start_addr = 0x1D75F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpt = (IMAGE_INFO){.start_addr = 0x1D7860, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpw = (IMAGE_INFO){.start_addr = 0x1D7AC8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gpy = (IMAGE_INFO){.start_addr = 0x1D7D30, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gqa = (IMAGE_INFO){.start_addr = 0x1D7F98, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gQwertKeyboardLetters = (IMAGE_INFO){.start_addr = 0x1D8200, .image_size = 0x020940, .image_width=480, .image_height=139};
const IMAGE_INFO gre = (IMAGE_INFO){.start_addr = 0x1F8B40, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO greddit = (IMAGE_INFO){.start_addr = 0x1F8DA8, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gReducetime = (IMAGE_INFO){.start_addr = 0x1F95A8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gRemoveevent = (IMAGE_INFO){.start_addr = 0x1FA7A8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gro = (IMAGE_INFO){.start_addr = 0x1FB9A8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gRocket = (IMAGE_INFO){.start_addr = 0x1FBC10, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO grs = (IMAGE_INFO){.start_addr = 0x1FCE10, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO grss = (IMAGE_INFO){.start_addr = 0x1FD078, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gru = (IMAGE_INFO){.start_addr = 0x1FD878, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gRunapplication = (IMAGE_INFO){.start_addr = 0x1FDAE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gRun = (IMAGE_INFO){.start_addr = 0x1FECE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO grw = (IMAGE_INFO){.start_addr = 0x1FFEE0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsa = (IMAGE_INFO){.start_addr = 0x200148, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsb = (IMAGE_INFO){.start_addr = 0x2003B0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsc = (IMAGE_INFO){.start_addr = 0x200618, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gSchedule = (IMAGE_INFO){.start_addr = 0x200880, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gScheduled = (IMAGE_INFO){.start_addr = 0x201A80, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gscotland = (IMAGE_INFO){.start_addr = 0x202C80, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsd = (IMAGE_INFO){.start_addr = 0x202EE8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gse = (IMAGE_INFO){.start_addr = 0x203150, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gSearchevent = (IMAGE_INFO){.start_addr = 0x2033B8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gSelectdate = (IMAGE_INFO){.start_addr = 0x2045B8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gSettingIcon = (IMAGE_INFO){.start_addr = 0x2057B8, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsg = (IMAGE_INFO){.start_addr = 0x2069B8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsh = (IMAGE_INFO){.start_addr = 0x206C20, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsi = (IMAGE_INFO){.start_addr = 0x206E88, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gSimpleclock = (IMAGE_INFO){.start_addr = 0x2070F0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsj = (IMAGE_INFO){.start_addr = 0x2082F0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsk = (IMAGE_INFO){.start_addr = 0x208558, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gskype = (IMAGE_INFO){.start_addr = 0x2087C0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gsl = (IMAGE_INFO){.start_addr = 0x208FC0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gSlow = (IMAGE_INFO){.start_addr = 0x209228, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsm = (IMAGE_INFO){.start_addr = 0x20A428, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsn = (IMAGE_INFO){.start_addr = 0x20A690, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gso = (IMAGE_INFO){.start_addr = 0x20A8F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsocialvibe = (IMAGE_INFO){.start_addr = 0x20AB60, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gsolo_48 = (IMAGE_INFO){.start_addr = 0x20B360, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsoundcloud = (IMAGE_INFO){.start_addr = 0x20C560, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gSpeed = (IMAGE_INFO){.start_addr = 0x20CD60, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsplashScreen = (IMAGE_INFO){.start_addr = 0x20DF60, .image_size = 0x03FC00, .image_width=480, .image_height=272};
const IMAGE_INFO gspotify = (IMAGE_INFO){.start_addr = 0x24DB60, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gSquareRoundedChecked = (IMAGE_INFO){.start_addr = 0x24E360, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gSquareRoundedEmpty = (IMAGE_INFO){.start_addr = 0x24F560, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsr = (IMAGE_INFO){.start_addr = 0x250760, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gst = (IMAGE_INFO){.start_addr = 0x2509C8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gStart = (IMAGE_INFO){.start_addr = 0x250C30, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsteam = (IMAGE_INFO){.start_addr = 0x251E30, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gstop = (IMAGE_INFO){.start_addr = 0x252630, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gstumbleupon = (IMAGE_INFO){.start_addr = 0x253830, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gSun = (IMAGE_INFO){.start_addr = 0x254030, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsv = (IMAGE_INFO){.start_addr = 0x255230, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gswitch_48 = (IMAGE_INFO){.start_addr = 0x255498, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gsy = (IMAGE_INFO){.start_addr = 0x256698, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gsz = (IMAGE_INFO){.start_addr = 0x256900, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtable_sql_check = (IMAGE_INFO){.start_addr = 0x256B68, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtable_sql_delete = (IMAGE_INFO){.start_addr = 0x257D68, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTasklist = (IMAGE_INFO){.start_addr = 0x258F68, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtc = (IMAGE_INFO){.start_addr = 0x25A168, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtd = (IMAGE_INFO){.start_addr = 0x25A3D0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtechnorati = (IMAGE_INFO){.start_addr = 0x25A638, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gTemporarytooth = (IMAGE_INFO){.start_addr = 0x25AE38, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTerminate = (IMAGE_INFO){.start_addr = 0x25C038, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtf = (IMAGE_INFO){.start_addr = 0x25D238, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtg = (IMAGE_INFO){.start_addr = 0x25D4A0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gth = (IMAGE_INFO){.start_addr = 0x25D708, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gTimemachine = (IMAGE_INFO){.start_addr = 0x25D970, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimemanagement = (IMAGE_INFO){.start_addr = 0x25EB70, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimereport = (IMAGE_INFO){.start_addr = 0x25FD70, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimesettings = (IMAGE_INFO){.start_addr = 0x260F70, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimetracker = (IMAGE_INFO){.start_addr = 0x262170, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimezone = (IMAGE_INFO){.start_addr = 0x263370, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTime = (IMAGE_INFO){.start_addr = 0x264570, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimer = (IMAGE_INFO){.start_addr = 0x265770, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gTimetable = (IMAGE_INFO){.start_addr = 0x266970, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtj = (IMAGE_INFO){.start_addr = 0x267B70, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtk = (IMAGE_INFO){.start_addr = 0x267DD8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtl = (IMAGE_INFO){.start_addr = 0x268040, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtm = (IMAGE_INFO){.start_addr = 0x2682A8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtn = (IMAGE_INFO){.start_addr = 0x268510, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gTodolist = (IMAGE_INFO){.start_addr = 0x268778, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gto = (IMAGE_INFO){.start_addr = 0x269978, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gTower = (IMAGE_INFO){.start_addr = 0x269BE0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtr = (IMAGE_INFO){.start_addr = 0x26ADE0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtt = (IMAGE_INFO){.start_addr = 0x26B048, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtumblr = (IMAGE_INFO){.start_addr = 0x26B2B0, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gTurnaroundtime = (IMAGE_INFO){.start_addr = 0x26BAB0, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gtv = (IMAGE_INFO){.start_addr = 0x26CCB0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtw = (IMAGE_INFO){.start_addr = 0x26CF18, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gtwitpic = (IMAGE_INFO){.start_addr = 0x26D180, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gtwitter = (IMAGE_INFO){.start_addr = 0x26D980, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gtypepad = (IMAGE_INFO){.start_addr = 0x26E180, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gtz = (IMAGE_INFO){.start_addr = 0x26E980, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gua = (IMAGE_INFO){.start_addr = 0x26EBE8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gug = (IMAGE_INFO){.start_addr = 0x26EE50, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gum = (IMAGE_INFO){.start_addr = 0x26F0B8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gus = (IMAGE_INFO){.start_addr = 0x26F320, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO guy = (IMAGE_INFO){.start_addr = 0x26F588, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO guz = (IMAGE_INFO){.start_addr = 0x26F7F0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gva = (IMAGE_INFO){.start_addr = 0x26FA58, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gvc = (IMAGE_INFO){.start_addr = 0x26FCC0, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gve = (IMAGE_INFO){.start_addr = 0x26FF28, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gvg = (IMAGE_INFO){.start_addr = 0x270190, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gvi = (IMAGE_INFO){.start_addr = 0x2703F8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gvimeo = (IMAGE_INFO){.start_addr = 0x270660, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gvisa_48 = (IMAGE_INFO){.start_addr = 0x270E60, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gvisa_electron_48 = (IMAGE_INFO){.start_addr = 0x272060, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gvn = (IMAGE_INFO){.start_addr = 0x273260, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gvu = (IMAGE_INFO){.start_addr = 0x2734C8, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gWait = (IMAGE_INFO){.start_addr = 0x273730, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gwakoopa = (IMAGE_INFO){.start_addr = 0x274930, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gwales = (IMAGE_INFO){.start_addr = 0x275130, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gWallclock = (IMAGE_INFO){.start_addr = 0x275398, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gWeek = (IMAGE_INFO){.start_addr = 0x276598, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gwestern_union_48 = (IMAGE_INFO){.start_addr = 0x277798, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gwf = (IMAGE_INFO){.start_addr = 0x278998, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gWhiteSquare = (IMAGE_INFO){.start_addr = 0x278C00, .image_size = 0x0000B4, .image_width=9, .image_height=10};
const IMAGE_INFO gwordpress = (IMAGE_INFO){.start_addr = 0x278CB4, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gWristwatch = (IMAGE_INFO){.start_addr = 0x2794B4, .image_size = 0x001200, .image_width=48, .image_height=48};
const IMAGE_INFO gws = (IMAGE_INFO){.start_addr = 0x27A6B4, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gxing = (IMAGE_INFO){.start_addr = 0x27A91C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gyahoo = (IMAGE_INFO){.start_addr = 0x27B11C, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gye = (IMAGE_INFO){.start_addr = 0x27B91C, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gyoutube = (IMAGE_INFO){.start_addr = 0x27BB84, .image_size = 0x000800, .image_width=32, .image_height=32};
const IMAGE_INFO gyt = (IMAGE_INFO){.start_addr = 0x27C384, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gza = (IMAGE_INFO){.start_addr = 0x27C5EC, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gzm = (IMAGE_INFO){.start_addr = 0x27C854, .image_size = 0x000268, .image_width=22, .image_height=14};
const IMAGE_INFO gzw = (IMAGE_INFO){.start_addr = 0x27CABC, .image_size = 0x000268, .image_width=22, .image_height=14};




#endif

