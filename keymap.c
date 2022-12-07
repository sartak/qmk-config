#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
    KC_W,  KC_L,  KC_Y,  KC_P,  KC_B,    KC_Z,  KC_F,  KC_O,    KC_U,     KC_QUOTE,
    KC_C,  KC_R,  KC_S,  KC_T,  KC_G,    KC_M,  KC_N,  KC_E,    KC_I,     KC_A,
    KC_Q,  KC_J,  KC_V,  KC_D,  KC_K,    KC_X,  KC_H,  KC_DOT,  KC_COMM,  KC_ENT,
                     KC_NO,  KC_BSPC,    KC_SPC,  KC_NO
    ),
};
