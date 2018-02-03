/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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
*** Last modification date: 2018.02.03.
**********************************************************************************
*/

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: ANSI Qwerty Layer */
    KEYMAP(\
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8, MUTE,VOLD,VOLU,  F12,      PSCR,TRNS,PAUS, \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,      INS, HOME,PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      DEL, END, PGDN, \
        CLCK, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                      \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,           UP,        \
        LCTL,TRNS,LALT,               SPC,               RALT, FN0, LGUI,RCTL,      LEFT,DOWN,RGHT),
    /* Layer 1: Fn Media Layer */
    KEYMAP(\
        TRNS,     MPRV,MPLY,MNXT,MSTP,TRNS,TRNS,TRNS,TRNS, F9, F10 , F11,TRNS,      TRNS,SLCK,SLEP, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                      \
        TRNS,TRNS,TRNS,CALC,TRNS,TRNS,TRNS,MYCM,TRNS,TRNS,TRNS,          TRNS,           TRNS,      \
        TRNS,LGUI,TRNS,          TRNS,               TRNS,TRNS,     TRNS,TRNS,      TRNS,TRNS,TRNS),
};


const action_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
};
