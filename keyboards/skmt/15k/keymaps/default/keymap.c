// Copyright 2022 Jimmy Lye (@satorusaka)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬───┬───┬───┬────┐
     * │ F3 │ 9 │ 6 │ 3 │ fn │
     * ├────┼───┼───┼───┼────┤
     * │ F2 │ 8 │ 5 │ 2 │ .  │
     * ├────┼───┼───┼───┼────┤
     * │ F1 │ 7 │ 4 │ 1 │ O  │
     * └────┴───┴───┴───┴────┘
     */
    [0] = LAYOUT_default(KC_1, KC_2, KC_3, KC_4, KC_5)};
