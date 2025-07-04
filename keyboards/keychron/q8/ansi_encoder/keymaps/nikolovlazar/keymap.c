/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_69(
        KC_EQL,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_ESC, MT(MOD_LCTL, KC_A),     MT(MOD_LALT, KC_S),     MT(MOD_LGUI, KC_D),    MT(MOD_LSFT, KC_F),    KC_G,              KC_H,    MT(MOD_RSFT, KC_J),    MT(MOD_RGUI, KC_K),    MT(MOD_RALT, KC_L),     MT(MOD_RCTL, KC_SCLN),  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPT,  KC_LCMD,           KC_SPC,           MO(_FN1), MO(_FN3),         KC_SPC,            KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN2), MO(_FN3),         KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    // Mac Layer 1
    [_FN1] = LAYOUT_ansi_69(
        _______, _______,    _______,    _______,   KC_MPRV,   KC_MPLY,   KC_MNXT,    KC_BRID,   KC_BRIU,   _______,   _______,   _______,   _______,   _______,          _______,
        _______, _______,  _______,  _______, _______, KC_VOLU, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  KC_HOME,  KC_PGUP, LSG(KC_RBRC), KC_VOLD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  KC_END, KC_PGDN, LSG(KC_LBRC), KC_MUTE,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    // Windows Layer 1
    [_FN2] = LAYOUT_ansi_69(
        KC_ESC,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FLXP, RM_VALD, RM_VALU,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          _______,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    // Shared Layer 2
    [_FN3] = LAYOUT_ansi_69(
        _______,  _______,  _______,  _______,   _______,   _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, KC_LABK,  KC_LBRC,  KC_LCBR, KC_LPRN, _______, _______,  KC_RPRN, KC_RCBR, KC_RBRC, KC_RABK,  _______,  _______,  _______,          _______,
        _______, KC_GRV,  _______,  _______, _______, _______,           KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  _______,  _______,  _______,          _______,
        _______, S(KC_GRV),  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // We can make some mods faster like this
        // case MT(MOD_LCTL, KC_A):
        // case MT(MOD_RSFT, KC_J):
        //     return 180;
        default:
            return TAPPING_TERM;
    }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);

    if (layer == 0) {
        // Layer 0: Default rainbow animation
        return false;
    }

    // Turn off all LEDs
    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, 0, 0, 0);
    }

    if (layer == 2) {
        // Layer 1: Light specific keys (replace indices with actual values)
        rgb_matrix_set_color(4, 1, 238, 255);
        rgb_matrix_set_color(5, 1, 238, 255);
        rgb_matrix_set_color(6, 1, 238, 255);
        rgb_matrix_set_color(7, 1, 238, 255);
        rgb_matrix_set_color(8, 1, 238, 255);

        rgb_matrix_set_color(20, 66, 255, 0);

        rgb_matrix_set_color(32, 245, 9, 9);
        rgb_matrix_set_color(33, 0, 14, 255);
        rgb_matrix_set_color(34, 0, 14, 255);
        rgb_matrix_set_color(35, 66, 255, 0);

        rgb_matrix_set_color(46, 245, 9, 9);
        rgb_matrix_set_color(47, 0, 14, 255);
        rgb_matrix_set_color(48, 0, 14, 255);
        rgb_matrix_set_color(49, 66, 255, 0);
    } else if (layer == 4) {
        // Layer 2: Light specific keys (replace indices with actual values)
        rgb_matrix_set_color(16, 255, 255, 255);
        rgb_matrix_set_color(17, 255, 255, 255);
        rgb_matrix_set_color(18, 255, 255, 255);
        rgb_matrix_set_color(19, 255, 255, 255);
        rgb_matrix_set_color(22, 255, 255, 255);
        rgb_matrix_set_color(23, 255, 255, 255);
        rgb_matrix_set_color(24, 255, 255, 255);
        rgb_matrix_set_color(25, 255, 255, 255);

        rgb_matrix_set_color(31, 255, 255, 255);
        rgb_matrix_set_color(36, 245, 9, 9);
        rgb_matrix_set_color(37, 245, 9, 9);
        rgb_matrix_set_color(38, 245, 9, 9);
        rgb_matrix_set_color(39, 245, 9, 9);

        rgb_matrix_set_color(45, 255, 255, 255);
    }

    return true;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN2]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN3]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE
