// Copyright 2022 Jimmy Lye (@satorusaka)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * .───┬---.
     * │ A │ B |
     * ├───┼---|
     * | C | D |
     * .-------.
     */
    [0] = LAYOUT_default(KC_A, KC_B, KC_C, KC_D)};
