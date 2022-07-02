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
#define VENDOR_ID       0x6a6b   // Jels (JK)
#define PRODUCT_ID      0x0087  // Jels 87
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jels
#define PRODUCT         Jels87

/* Define Matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/*Define Matrix Pins */
#define MATRIX_ROW_PINS \
    { A15, B3, B6, B5, B13, B12, B11, B10, A3, A2, A0, A1}
#define MATRIX_COL_PINS \
    { A6, A5, A7, B0, B1, B2, B14, B7, F1 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 0
