// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define DE_SS KC_MINS
#define DE_AE KC_QUOT
#define DE_UE KC_LBRC
#define DE_OE KC_SCLN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* Base Layer
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ Q │ W │ E │ R │ T │       │ Z │ U │ I │ O │ P │ Ü │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ Ö │ Ä │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Alt│ Y │ X │ C │ V │ B │       │ N │ M │ , │ . │ ß │AlG│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *
      *                   ┌───┐           ┌───┐
      *                   │Spc├───┐   ┌───┤Spc│
      *                   └───┤ 1 │   │ 2 ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,            KC_E,            KC_R,            KC_T,                                       KC_Y,    KC_U,            KC_I,            KC_O,            KC_P,    KC_LBRC,
        KC_TAB,  KC_A,    LGUI_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                                       KC_H,    RSFT_T(KC_J),    RCTL_T(KC_K),    RGUI_T(KC_L),    KC_SCLN, KC_QUOT,
        KC_LALT, KC_Z,    KC_X,            KC_C,            KC_V,            KC_B,                                       KC_N,    KC_M,            KC_COMM,         KC_DOT,          KC_MINS, KC_RALT,
                                                                             KC_SPC, LT(1, KC_BSPC),    LT(2, KC_ENT),   KC_SPC
    ),
     /* Symbols Layer
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ ~ │ ! │ _ │ @ │ { │ } │       │ % │ & │ * │ $ │ p │ § │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ ^ │ \ │ - │ " │ ( │ ) │       │ ? │ / │ ; │ : │ = │ # │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ € │ | │ ` │ ' │ [ │ ] │       │ < │ > │ , │ . │ - │Ent│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *
      *                   ┌───┐           ┌───┐
      *                   │Spc├───┐   ┌───┤Spc│
      *                   └───┤ 1 │   │ 2 ├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        DE_TILD,  DE_EXLM,    DE_UNDS,            DE_AT,            DE_LCBR,    DE_RCBR,                               DE_PERC,    DE_AMPR,            DE_ASTR,            DE_DLR,            DE_PLUS,    LSFT(KC_3),
        DE_CIRC, DE_BSLS,    DE_MINS,    LSFT(KC_2),         DE_LPRN,    DE_RPRN,                               LSFT(DE_SS),    DE_SLSH,    DE_SCLN,    DE_COLN,    DE_EQL, DE_HASH,
        DE_EURO, DE_PIPE,    DE_GRV,            DE_QUOT,         DE_LBRC,    DE_RBRC,                               KC_NUBS,    LSFT(KC_NUBS),            KC_COMM,         KC_DOT,          KC_SLSH, KC_ENT,
                                                                        KC_SPC, KC_TRNS,            KC_TRNS,  KC_SPC
    ),
     /* Number Layer
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ _ │ _ │ _ │ _ │ _ │       │<- │UP │DWN│-> │ _ │ _ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │F12│F1 │F2 │F3 │F4 │F5 │       │F6 │F7 │F8 │F9 │F10│F11│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *
      *                   ┌───┐           ┌───┐
      *                   │Spc├───┐   ┌───┤Spc│
      *                   └───┤ 1 │   │ 2 ├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_1,    KC_2,            KC_3,            KC_4,    KC_5,                                       KC_6,    KC_7,            KC_8,            KC_9,            KC_0,    KC_PSCR,
        KC_LSFT, KC_A,    LGUI_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                               KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    KC_SCLN, KC_DEL,
        KC_F12, KC_F1,    KC_F2,            KC_F3,            KC_F4,    KC_F5,                                       KC_F6,    KC_F7,            KC_F8,         KC_F9,          KC_F10, KC_F11,
                                                                     KC_SPC, KC_BSPC,                   KC_TRNS, KC_ENT
    )
};
