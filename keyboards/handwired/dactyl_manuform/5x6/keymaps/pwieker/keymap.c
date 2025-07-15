#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define DE_LESS KC_NUBS
#define DE_UE KC_LBRC
#define DE_OE KC_SCLN
#define DE_AE KC_QUOT

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , DE_1  , DE_2         , DE_3         , DE_4         , DE_5  ,                             DE_6  , DE_7        , DE_8        , DE_9        , DE_0    ,DE_SS,
        KC_TAB , DE_Q  , DE_W         , DE_E         , DE_R         , DE_T  ,                             DE_Z  , DE_U        , DE_I        , DE_O        , DE_P    ,DE_UE,
        KC_LSFT, DE_A  , LGUI_T(DE_S) , LCTL_T(DE_D) , LSFT_T(DE_F) , DE_G  ,                             DE_H  , RSFT_T(DE_J), RCTL_T(DE_K), RGUI_T(DE_L), DE_OE   ,DE_AE,
        KC_LCTL, DE_Y  , DE_X         , DE_C         , DE_V         , DE_B  ,                             DE_N  , DE_M        ,DE_COMM,      DE_DOT ,      DE_MINS  ,DE_HASH,
                         DE_LESS      ,LSFT(DE_LESS),                                                                                DE_PLUS,       DE_EQL,
                                                                    LT(_RAISE, KC_BSPC),KC_SPC,     KC_ENT,  LT(_LOWER, KC_DEL),
                                                                    _______,KC_TAB,                 KC_END,  _______,
                                                                    _______, _______,                _______, _______
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                                _______,KC_PSCR,            _______, KC_P0,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NUM,KC_INS ,KC_SCRL,KC_MUTE,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
                                                  _______,_______,            KC_EQL ,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};
