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

#define ____ KC_NO


#define LAYOUT_all( \
    K010,       K011, K001, K002, K012,   K013, K003, K004, K014,      K005, K006, K016, K017,  K007, K008, K018, \
    K100, K101, K111, K112, K102, K103, K113, K114, K104, K105, K115, K116, K106, K107, K227,   K207, K208, K108, \
    K220, K221, K201, K202, K222, K223, K203, K204, K224, K225, K205, K206, K226, K307,         K117, K118, K228, \
    K300, K301, K331, K332, K302, K303, K333, K334, K304, K305, K335, K336, K306,                                 \
    K440, K401, K402, K442, K443, K403, K404, K444, K445, K405, K406, K446, K447,                     K407,       \
    K441,       K551,                   K553,                   K556,       K557,               K507, K508, K408  \
){ \
    {____, K001, K002, K003, K004, K005, K006, K007, K008}, \
    {K010, K011, K012, K013, K014, ____, K016, K017, K018}, \
    {K100, K101, K102, K103, K104, K105, K106, K107, K108}, \
    {____, K111, K112, K113, K114, K115, K116, K117, K118}, \
    {____, K201, K202, K203, K204, K205, K206, K207, K208}, \
    {K220, K221, K222, K223, K224, K225, K226, K227, K228}, \
    {K300, K301, K302, K303, K304, K305, K306, K307, ____}, \
    {____, K331, K332, K333, K334, K335, K336, ____, ____}, \
    {____, K401, K402, K403, K404, K405, K406, K407, K408}, \
    {K440, K441, K442, K443, K444, K445, K446, K447, ____}, \
    {____, ____, ____, ____, ____, ____, ____, K507, K508}, \
    {____, K551, ____, K553, ____, ____, K556, K557, ____}, \
}
