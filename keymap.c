#include QMK_KEYBOARD_H

#define ALPHA 0
#define SYMBOL 1
#define NUMBER 2
#define FUNCTION 3

#define KC_MDASH LALT(LSFT(KC_MINUS))
#define KC_ELLIPSIS LALT(KC_SEMICOLON)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA] = LAYOUT_split_3x5_2(
    KC_W,  KC_L,  KC_Y,  KC_P,  KC_B,    KC_Z,  KC_F,  KC_O,    KC_U,     KC_QUOTE,
    KC_C,  KC_R,  KC_S,  KC_T,  KC_G,    KC_M,  KC_N,  KC_E,    KC_I,     KC_A,
    KC_Q,  KC_J,  KC_V,  KC_D,  KC_K,    KC_X,  KC_H,  KC_DOT,  KC_COMM,  KC_ENT,
                TO(SYMBOL),  KC_BSPC,    KC_SPC,  TO(NUMBER)
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
    KC_GRAVE,      KC_TILDE,     KC_BACKSLASH,   KC_LEFT_CURLY_BRACE,  KC_DOLLAR,      KC_PERCENT,     KC_RIGHT_CURLY_BRACE,  KC_SLASH,  KC_HASH,  KC_QUOTE,
    KC_AMPERSAND,  KC_ASTERISK,  KC_EQUAL,       KC_LEFT_PAREN,        KC_LT,          KC_GT,          KC_RIGHT_PAREN,        KC_MINUS,  KC_PLUS,  KC_PIPE,
    KC_MDASH,      KC_AT,        KC_UNDERSCORE,  KC_LEFT_BRACKET,      KC_ELLIPSIS,    KC_CIRCUMFLEX,  KC_RIGHT_BRACKET,      KC_DOT,    KC_COMM,  KC_ENT,
                                                               TO(ALPHA),  KC_BSPC,    KC_SPC,  TO(NUMBER)
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_QUOTE,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,   KC_NO,    KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_DOT,  KC_COMM,  KC_ENT,
                      TO(ALPHA),  KC_BSPC,    KC_SPC,  TO(SYMBOL)
    ),

    [FUNCTION] = LAYOUT_split_3x5_2(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
                        TO(ALPHA),  KC_NO,    KC_NO,  KC_NO
    ),
};
