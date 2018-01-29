/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

**********************************************************************************
*** Title: Noppoo Lolita Spyder hand wired custom firmware
*** Author: Daniel Fekete 
*** Version: 0.1
*** MCU: Atmega 32u4
*** Hardware: Teensy 2.0
*** Creation date: 2018.01.08.
*** Last modification date: 2018.01.10.
**********************************************************************************
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


/* TKL ANSI keymap definition macro */
#define KEYMAP( \
    K000,       K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,         K014, K015, K016,   \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,         K114, K115, K116,   \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,         K214, K215, K216,   \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313,                             \
    K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413,               K415,         \
    K500, K501, K502,                   K506,                   K510, K511, K512, K513,         K514, K515, K516    \
) { \
    { KC_##K000, KC_NO,     KC_##K002, KC_##K003, KC_##K004, KC_##K005, KC_##K006, KC_##K007, KC_##K008, KC_##K009, KC_##K010, KC_##K011, KC_##K012, KC_##K013,        KC_##K014, KC_##K015, KC_##K016 }, \
    { KC_##K100, KC_##K101, KC_##K102, KC_##K103, KC_##K104, KC_##K105, KC_##K106, KC_##K107, KC_##K108, KC_##K109, KC_##K110, KC_##K111, KC_##K112, KC_##K113,        KC_##K114, KC_##K115, KC_##K116 }, \
    { KC_##K200, KC_##K201, KC_##K202, KC_##K203, KC_##K204, KC_##K205, KC_##K206, KC_##K207, KC_##K208, KC_##K209, KC_##K210, KC_##K211, KC_##K212, KC_##K213,        KC_##K214, KC_##K215, KC_##K216 }, \
    { KC_##K300, KC_##K301, KC_##K302, KC_##K303, KC_##K304, KC_##K305, KC_##K306, KC_##K307, KC_##K308, KC_##K309, KC_##K310, KC_##K311, KC_NO,     KC_##K313,        KC_NO,     KC_NO,     KC_NO     }, \
    { KC_##K400, KC_NO,     KC_##K402, KC_##K403, KC_##K404, KC_##K405, KC_##K406, KC_##K407, KC_##K408, KC_##K409, KC_##K410, KC_##K411, KC_NO,     KC_##K413,        KC_NO,     KC_##K415, KC_NO     }, \
    { KC_##K500, KC_##K501, KC_##K502, KC_NO,     KC_NO,     KC_NO,     KC_##K506, KC_NO,     KC_NO,     KC_NO,     KC_##K510, KC_##K511, KC_##K512, KC_##K513,        KC_##K514, KC_##K515, KC_##K516 }  \
}

#define KEYMAP_LOLITA( \
    K000,       K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,    K014, K015, K016,   \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,    K114, K115, K116,   \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,    K214, K215, K216,   \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313,                        \
    K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413,          K415,         \
    K500, K501, K502,                   K506,                   K510, K511, K512, K513,    K514, K515G,K516    \
) KEYMAP( \
    K000, NO,   K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,    K014, K015, K016,   \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,    K114, K115, K116,   \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,    K214, K215, K216,   \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, NO,   K313,    NO,   NO,   NO,     \
    K400, NO,   K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, NO,   K413,    NO,   K415, NO,    \
    K500, K501, K502, NO,   NO,   NO,   K506, NO,   NO,   NO,   K510, K511, K512, K513,    K514, K515G,K516    \
)
#endif
