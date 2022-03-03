/* Copyright 2021 Joah Nelson (Jels)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation,   either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor paramater */
#define VENDOR_ID       0x006a   // Jels (J)
#define PRODUCT_ID      0x00ff // Jels snow led thing
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jels
#define PRODUCT         JelsSnowLEDTHING

/* Define Matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/*Define Matrix Pins */
#define MATRIX_ROW_PINS \
    { B3 }
#define MATRIX_COL_PINS \
    { C7}

/* ws2812b RGB LEDs */
#define RGB_DI_PIN F4

#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM 7  // Number of LEDs
#define RGBLIGHT_SLEEP
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_DEFAULT_VAL 0  // start off
#define RGBLIGHT_LIMIT_VAL 225  // keep PCB under 500mA
#endif

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
