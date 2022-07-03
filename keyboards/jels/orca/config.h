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
#define VENDOR_ID       0x6a6b  // Jels (Jk)
#define PRODUCT_ID      0x6f72  // Orca (OR)
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jels
#define PRODUCT         Orca

/* Define Matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/*Define Matrix Pins */
#define MATRIX_ROW_PINS \
    {A4, A3, A14, A5, A6}
#define MATRIX_COL_PINS \
    {B11, B10, B2, B1, B0, A7, C14, C15, F0, B12, A10, A9, A8, B15, B14, B13}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define LED_CAPS_LOCK_PIN A2
