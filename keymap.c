#include QMK_KEYBOARD_H

#define ALPHA 0
#define SYMBOL 1
#define NUMBER 2
#define FUNCTION 3

#define KC_LANGUAGE LSFT(KC_F1)
#define KC_SCREENSHOT LGUI(LSFT(KC_4))
#define KC_LOCKSCR LGUI(LCTL(KC_Q))
#define KC_ZOOM LGUI(KC_PLUS)
#define KC_MDASH LALT(LSFT(KC_MINUS))
#define KC_ELLIPSIS LALT(KC_SEMICOLON)

const uint16_t PROGMEM combo_layers[] = {TO(SYMBOL), TO(NUMBER), COMBO_END};
const uint16_t PROGMEM combo_delete_word[] = {LSFT_T(KC_BSPC), LCTL_T(KC_SPC), COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_layers, OSL(FUNCTION)),
  COMBO(combo_delete_word, LALT(KC_BSPC)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA] = LAYOUT_split_3x5_2(
    KC_W,  KC_L,  KC_Y,  KC_P,  KC_B,    KC_Z,  KC_F,  KC_O,    KC_U,     KC_QUOTE,
    KC_C,  KC_R,  KC_S,  KC_T,  KC_G,    KC_M,  KC_N,  KC_E,    KC_I,     KC_A,
    KC_Q,  KC_J,  KC_V,  KC_D,  KC_K,    KC_X,  KC_H,  KC_DOT,  KC_COMM,  KC_ENT,
        TO(SYMBOL),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(NUMBER)
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
    KC_GRAVE,      KC_TILDE,     KC_BACKSLASH,   KC_LEFT_CURLY_BRACE,  KC_DOLLAR,      KC_PERCENT,     KC_RIGHT_CURLY_BRACE,  KC_SLASH,  KC_HASH,  KC_QUOTE,
    KC_AMPERSAND,  KC_ASTERISK,  KC_EQUAL,       KC_LEFT_PAREN,        KC_LT,          KC_GT,          KC_RIGHT_PAREN,        KC_MINUS,  KC_PLUS,  KC_PIPE,
    KC_MDASH,      KC_AT,        KC_UNDERSCORE,  KC_LEFT_BRACKET,      KC_ELLIPSIS,    KC_CIRCUMFLEX,  KC_RIGHT_BRACKET,      KC_DOT,    KC_COMM,  KC_ENT,
                                                       TO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(NUMBER)
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
    KC_BRIU,      KC_6,  KC_5,  KC_4,  KC_SCREENSHOT,    KC_MUTE,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_QUOTE,
    KC_LANGUAGE,  KC_3,  KC_2,  KC_1,  KC_0,             KC_VOLU,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,
    KC_BRID,      KC_9,  KC_8,  KC_7,  KC_LOCKSCR,       KC_VOLD,  KC_ZOOM,  KC_DOT,   KC_COMM,  KC_ENT,
                         TO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(SYMBOL)
    ),

    [FUNCTION] = LAYOUT_split_3x5_2(
    QK_BOOT,  KC_NO,  KC_NO,  KC_NO,  QK_REBOOT,    QK_REBOOT,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,
    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,        KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,        KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,
                          TO(ALPHA),  KC_NO,        KC_NO,      KC_NO
    ),
};
