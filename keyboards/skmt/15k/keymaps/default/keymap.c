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
    [0] = LAYOUT_default(
        // left hand
        KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_N, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_M, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_U, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_K, KC_I, KC_O, KC_P, KC_L, KC_SPC, KC_END, KC_HOME, KC_PSCR, KC_J)};
