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

#include <variant.h>

#ifndef WIN_EMU

void ana_set(int pin, int val)
{
  printf("[PIN] %d WRITE %d\n", (int)pin, (int)val);
}

int ana_get(int pin)
{
  printf("[PIN] %d READ\n", (int)pin);
  return -1;
}

#endif /* WIN_EMU */

int analogRead(uint8_t pin) { return ana_get(pin); }

void analogWrite(uint8_t pin, int val) { ana_set(pin, val); }

void analogClose(uint8_t pin) {}

void analogOpen(uint8_t pin, /* val, src, div */...) {}
