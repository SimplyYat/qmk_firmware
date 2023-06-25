/*
Copyright 2023 Yat <simplyyat@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// wiring of each half
#define MATRIX_ROW_PINS \
    { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS \
    { GP8, GP9, GP10, GP11, GP12, GP13, GP14 }

#define DIODE_DIRECTION COL2ROW

// #define MASTER_LEFT
#define MASTER_RIGHT

#ifdef RGB_MATRIX_ENABLE
/* RGB settings. */
/* The pin connected to the data pin of the LEDs */
#    define WS2812_DI_PIN GP15
// The number of LEDs connected
#    define RGB_MATRIX_LED_COUNT 76
#    define RGB_MATRIX_SPLIT \
        { 38, 38 } // (Optional) For split keyboards, the number of LEDs connected on each half. X = left, Y = Right.

#endif

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET               // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17      // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
