/*  copyright 2021 Joah Nelson (Jels)
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERAHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define _____ KC_NO


#define LAYOUT_all( \
    K0000, K0001, K0002, K0003, K0004, K0005, K0006, K0007, K0008, K0009, K0010, K0011, K0012, K0013, K0014, K0015, \
    K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113, K0114, K0115, \
    K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, K0214,        K0215, \
    K0300, K0301, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313,        K0314, K0315, \
    K0400, K0401, K0402, K0403,                      K0408,                             K0412, K0413, K0414, K0415 \
){ \
    { K0000, K0001, K0002, K0003, K0004, K0005, K0006, K0007, K0008, K0009, K0010, K0011, K0012, K0013, K0014, K0015 }, \
    { K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113, K0114, K0115 }, \
    { K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, _____, K0214, K0215 }, \
    { K0300, K0301, _____, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313, K0314, K0315 }, \
    { K0400, K0401, K0402, K0403, _____, _____, _____, _____, K0408, _____, _____, _____, K0412, K0413, K0414, K0415 } \
}
