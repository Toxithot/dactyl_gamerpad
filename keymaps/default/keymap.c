// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ ` │ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │TAB│Tab│ Q │ W │ E │ R │ T │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │SFT│SFT│ A │ S │ D │ F │ G │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │CTL│CTL│ Z │ X │ C │ V │   │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │ALT│SPC│   │
     * └───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_all(
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_LSFT, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LCTL, KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,
		KC_LALT, KC_SPC
    )
};
