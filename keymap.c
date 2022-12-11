#include QMK_KEYBOARD_H

#define TH(key) LT(0, key)

#define ALPHA 0
#define SYMBOL 1
#define NUMBER 2
#define FUNCTION 3

#define KC_LANGUAGE LSFT(KC_F1)
#define KC_SCREENSHOT LGUI(LSFT(KC_4))
#define KC_LOCKSCR LGUI(LCTL(KC_Q))
#define KC_ZOOMIN LGUI(KC_PLUS)
#define KC_ZOOMOUT LGUI(KC_MINUS)
#define KC_ALFRED LGUI(KC_SPC)
#define KC_MDASH LALT(LSFT(KC_MINUS))
#define KC_ELLIPSIS LALT(KC_SEMICOLON)

#define A_W TH(KC_W)
#define A_L TH(KC_L)
#define A_Y TH(KC_Y)
#define A_P TH(KC_P)
#define A_B TH(KC_B)
#define A_Z TH(KC_Z)
#define A_F TH(KC_F)
#define A_O TH(KC_O)
#define A_U TH(KC_U)
#define A_q TH(KC_QUOTE)
#define A_C TH(KC_C)
#define A_R TH(KC_R)
#define A_S TH(KC_S)
#define A_T TH(KC_T)
#define A_G TH(KC_G)
#define A_M TH(KC_M)
#define A_N TH(KC_N)
#define A_E TH(KC_E)
#define A_I TH(KC_I)
#define A_A TH(KC_A)
#define A_Q TH(KC_Q)
#define A_J TH(KC_J)
#define A_V TH(KC_V)
#define A_D TH(KC_D)
#define A_K TH(KC_K)
#define A_X TH(KC_X)
#define A_H TH(KC_H)
#define A_d TH(KC_DOT)
#define A_c TH(KC_COMM)
#define A_r TH(KC_ENT)
#define AT0 MO(SYMBOL)
#define AT1 LSFT_T(KC_BSPC)
#define AT2 LCTL_T(KC_SPC)
#define AT3 MO(NUMBER)

#define S_W KC_GRAVE
#define S_L KC_TILDE
#define S_Y KC_BACKSLASH
#define S_P KC_LEFT_CURLY_BRACE
#define S_B KC_DOLLAR
#define S_Z KC_PERCENT
#define S_F KC_RIGHT_CURLY_BRACE
#define S_O KC_SLASH
#define S_U KC_HASH
#define S_q KC_QUOTE
#define S_C KC_AMPERSAND
#define S_R KC_ASTERISK
#define S_S KC_EQUAL
#define S_T KC_LEFT_PAREN
#define S_G KC_LT
#define S_M KC_GT
#define S_N KC_RIGHT_PAREN
#define S_E KC_MINUS
#define S_I KC_PLUS
#define S_A KC_PIPE
#define S_Q KC_MDASH
#define S_J KC_AT
#define S_V KC_UNDERSCORE
#define S_D KC_LEFT_BRACKET
#define S_K KC_ELLIPSIS
#define S_X KC_CIRCUMFLEX
#define S_H KC_RIGHT_BRACKET
#define S_d KC_DOT
#define S_c KC_COMM
#define S_r KC_ENT
#define ST0 MO(ALPHA)
#define ST1 LSFT_T(KC_BSPC)
#define ST2 LCTL_T(KC_SPC)
#define ST3 MO(NUMBER)

#define N_W KC_BRIU
#define N_L KC_6
#define N_Y KC_5
#define N_P KC_4
#define N_B KC_SCREENSHOT
#define N_Z KC_MUTE
#define N_F KC_MPRV
#define N_O KC_MPLY
#define N_U KC_MNXT
#define N_q KC_QUOTE
#define N_C KC_LANGUAGE
#define N_R KC_3
#define N_S KC_2
#define N_T KC_1
#define N_G KC_0
#define N_M KC_VOLU
#define N_N KC_LEFT
#define N_E KC_DOWN
#define N_I KC_UP
#define N_A KC_RIGHT
#define N_Q KC_BRID
#define N_J KC_9
#define N_V KC_8
#define N_D KC_7
#define N_K KC_LOCKSCR
#define N_X KC_VOLD
#define N_H KC_ZOOMIN
#define N_d KC_DOT
#define N_c KC_COMM
#define N_r KC_ENT
#define NT0 MO(ALPHA)
#define NT1 LSFT_T(KC_BSPC)
#define NT2 LCTL_T(KC_SPC)
#define NT3 MO(SYMBOL)

#define F_W QK_BOOT
#define F_L KC_NO
#define F_Y KC_NO
#define F_P KC_NO
#define F_B QK_REBOOT
#define F_Z QK_REBOOT
#define F_F KC_NO
#define F_O KC_NO
#define F_U KC_NO
#define F_q QK_BOOT
#define F_C KC_NO
#define F_R KC_NO
#define F_S KC_NO
#define F_T KC_NO
#define F_G KC_NO
#define F_M KC_NO
#define F_N KC_NO
#define F_E KC_NO
#define F_I KC_NO
#define F_A KC_NO
#define F_Q KC_NO
#define F_J KC_NO
#define F_V KC_NO
#define F_D KC_NO
#define F_K KC_NO
#define F_X KC_NO
#define F_H KC_NO
#define F_d KC_NO
#define F_c KC_NO
#define F_r KC_NO
#define FT0 TO(ALPHA)
#define FT1 KC_NO
#define FT2 KC_NO
#define FT3 KC_NO

#include "chords.c"

enum combo_events {
  ACOMBO_LAYERS,
  SCOMBO_LAYERS,
  NCOMBO_LAYERS,
  ACOMBO_DELETE_WORD,
  SCOMBO_DELETE_WORD,
  NCOMBO_DELETE_WORD,

  CHORD_ENUM

  _COMBO_LENGTH,
};
uint16_t COMBO_LEN = _COMBO_LENGTH;

const uint16_t PROGMEM acombo_layers[] = {AT0, AT3, COMBO_END};
const uint16_t PROGMEM scombo_layers[] = {ST0, ST3, COMBO_END};
const uint16_t PROGMEM ncombo_layers[] = {NT0, NT3, COMBO_END};
const uint16_t PROGMEM acombo_delete_word[] = {AT1, AT2, COMBO_END};
const uint16_t PROGMEM scombo_delete_word[] = {ST1, ST2, COMBO_END};
const uint16_t PROGMEM ncombo_delete_word[] = {NT1, NT2, COMBO_END};

combo_t key_combos[] = {
  [ACOMBO_LAYERS] = COMBO(acombo_layers, OSL(FUNCTION)),
  [SCOMBO_LAYERS] = COMBO(scombo_layers, OSL(FUNCTION)),
  [NCOMBO_LAYERS] = COMBO(ncombo_layers, OSL(FUNCTION)),

  [ACOMBO_DELETE_WORD] = COMBO(acombo_delete_word, LALT(KC_BSPC)),
  [NCOMBO_DELETE_WORD] = COMBO(ncombo_delete_word, LALT(KC_BSPC)),
  [SCOMBO_DELETE_WORD] = COMBO(scombo_delete_word, LALT(KC_BSPC)),

  CHORD_COMBOS
};

const key_override_t zoom_out_override = ko_make_basic(MOD_MASK_SHIFT, KC_ZOOMIN, KC_ZOOMOUT);
const key_override_t **key_overrides = (const key_override_t *[]){
    &zoom_out_override,
    NULL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA] = LAYOUT_split_3x5_2(
      A_W, A_L, A_Y, A_P, A_B,  A_Z, A_F, A_O, A_U, A_q,
      A_C, A_R, A_S, A_T, A_G,  A_M, A_N, A_E, A_I, A_A,
      A_Q, A_J, A_V, A_D, A_K,  A_X, A_H, A_d, A_c, A_r,
                     AT0, AT1,  AT2, AT3
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
      S_W, S_L, S_Y, S_P, S_B,  S_Z, S_F, S_O, S_U, S_q,
      S_C, S_R, S_S, S_T, S_G,  S_M, S_N, S_E, S_I, S_A,
      S_Q, S_J, S_V, S_D, S_K,  S_X, S_H, S_d, S_c, S_r,
                     ST0, ST1,  ST2, ST3
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
      N_W, N_L, N_Y, N_P, N_B,  N_Z, N_F, N_O, N_U, N_q,
      N_C, N_R, N_S, N_T, N_G,  N_M, N_N, N_E, N_I, N_A,
      N_Q, N_J, N_V, N_D, N_K,  N_X, N_H, N_d, N_c, N_r,
                     NT0, NT1,  NT2, NT3
    ),

    [FUNCTION] = LAYOUT_split_3x5_2(
      F_W, F_L, F_Y, F_P, F_B,  F_Z, F_F, F_O, F_U, F_q,
      F_C, F_R, F_S, F_T, F_G,  F_M, F_N, F_E, F_I, F_A,
      F_Q, F_J, F_V, F_D, F_K,  F_X, F_H, F_d, F_c, F_r,
                     FT0, FT1,  FT2, FT3
    ),
};

#define TH_CASE(tap_kc, hold_kc)                      \
  case LT(0, tap_kc):                                 \
    if (record->tap.count && record->event.pressed) { \
      tap_code16(tap_kc);                             \
    } else if (record->event.pressed) {               \
      tap_code16(hold_kc);                            \
    }                                                 \
    return false;

#define TH_GUI(key) TH_CASE(key, LGUI(key))

bool process_taphold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      TH_GUI(KC_A)
      TH_GUI(KC_B)
      TH_GUI(KC_C)
      TH_GUI(KC_D)
      TH_GUI(KC_E)
      TH_GUI(KC_F)
      TH_GUI(KC_G)
      TH_GUI(KC_H)
      TH_GUI(KC_I)
      TH_GUI(KC_J)
      TH_GUI(KC_K)
      TH_GUI(KC_L)
      TH_GUI(KC_M)
      TH_GUI(KC_N)
      TH_GUI(KC_O)
      TH_GUI(KC_P)
      TH_GUI(KC_Q)
      TH_GUI(KC_R)
      TH_GUI(KC_S)
      TH_GUI(KC_T)
      TH_GUI(KC_U)
      TH_GUI(KC_V)
      TH_GUI(KC_W)
      TH_GUI(KC_X)
      TH_GUI(KC_Y)
      TH_GUI(KC_Z)
      TH_GUI(KC_ENT)
      TH_CASE(KC_QUOTE, KC_ESCAPE)
      TH_CASE(KC_DOT, KC_TAB)
      TH_CASE(KC_COMM, KC_ALFRED)
    }

    return true;
}

CHORD_FUNC
void process_combo_event(uint16_t combo_index, bool pressed) {
  process_chord_event(combo_index, pressed);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_taphold(keycode, record)) {
    return false;
  }

  return true;
}
