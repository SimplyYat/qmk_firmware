// Copyright 2022 Ethan (@rocketstrong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/*
     * .───┬---       --------.
     * │ A │ B         C | D |
     * ├───┼---       --------.
     * | E | F         G | H |
     * .-------       --------.
     * 
     */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H
    )
};

void keyboard_post_init_keymap(void) {
    // keyboard_post_init_user() moved to userspace
    #ifdef RGB_MATRIX_ENABLE
        rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_set_color_all(RGB_ORANGE); // Default startup colour
    #endif
}