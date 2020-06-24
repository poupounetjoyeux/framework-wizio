/*
    Created on: 01.01.2019
    Author: Georgi Angelov
        http://www.wizio.eu/
        https://github.com/Wiz-IO

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifdef WIN_EMU

/* TODO */

#include <interface.h>
#include <variant.h>

#include <commctrl.h>

extern HWND hWndMain;
extern HWND hEditValue;
void emu_print(LPCTSTR newText);

void keyDown(WPARAM wParam)
{
    //WM_KEYDOWN:
    switch (wParam)
    {
    case VK_ESCAPE:
      leds[0].state = 1;
      break;
    case VK_F1:
        leds[1].state = 1;
        break;
    case VK_F2:
        leds[2].state = 1;
        break;
    case VK_F3:
        leds[3].state = 1;
        break;
    case VK_F4:
        leds[4].state = 1;
        break;
    case VK_F5:
        leds[5].state = 1;
        break;
    case VK_F6:
        leds[6].state = 1;
        break;
    case VK_F7:
        leds[7].state = 1;
        break;
    case VK_F8:
        leds[8].state = 1;
        break;
    case VK_F9:
        leds[9].state = 1;
        break;
    case VK_F10:
        leds[10].state = 1;
        break;
    case VK_F11:
        leds[11].state = 1;
        break;
    case VK_F12:
        leds[12].state = 1;
        break;

    case VK_A:
        {
          if(bSuccess)
          {
            analogs[0].value = newValue;
          }
          break;
        }

    default:
        break;
    }
}

void keyUp(WPARAM wParam)
{
  BOOL bSuccess;
  int newValue=GetDlgItemInt(hEditValue,0,&bSuccess,true);

    //WM_KEYUP:
    switch (wParam)
    {
      case VK_ESCAPE:
      leds[0].state = 0;
      break;
      case VK_F1:
          leds[1].state = 0;
          break;
      case VK_F2:
          leds[2].state = 0;
          break;
      case VK_F3:
          leds[3].state = 0;
          break;
      case VK_F4:
          leds[4].state = 0;
          break;
      case VK_F5:
          leds[5].state = 0;
          break;
      case VK_F6:
          leds[6].state = 0;
          break;
      case VK_F7:
          leds[7].state = 0;
          break;
      case VK_F8:
          leds[8].state = 0;
          break;
      case VK_F9:
          leds[9].state = 0;
          break;
      case VK_F10:
          leds[10].state = 0;
          break;
      case VK_F11:
          leds[11].state = 0;
          break;
      case VK_F12:
          leds[12].state = 0;
          break;

    case VK_A:
        {
          if(bSuccess)
          {
            analogs[0].value = newValue;
          }
          break;
        }
    case VK_A:
        {
          if(bSuccess)
          {
            analogs[0].value = newValue;
          }
          break;
        }
    case VK_A:
        {
          if(bSuccess)
          {
            analogs[0].value = newValue;
          }
          break;
        }
    case VK_A:
        {
          if(bSuccess)
          {
            analogs[0].value = newValue;
          }
          break;
        }
    default:
        break;
    }
}

#endif /* WIN_EMU */
