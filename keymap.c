#include QMK_KEYBOARD_H

#define TH(key) LT(0, KC_##key)

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

#include "chords.c"

const key_override_t zoom_out_override = ko_make_basic(MOD_MASK_SHIFT, KC_ZOOMIN, KC_ZOOMOUT);
const key_override_t **key_overrides = (const key_override_t *[]){
    &zoom_out_override,
    NULL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA] = LAYOUT_split_3x5_2(
    TH(W),  TH(L),  TH(Y),  TH(P),  TH(B),    TH(Z),  TH(F),  TH(O),    TH(U),     TH(QUOTE),
    TH(C),  TH(R),  TH(S),  TH(T),  TH(G),    TH(M),  TH(N),  TH(E),    TH(I),     TH(A),
    TH(Q),  TH(J),  TH(V),  TH(D),  TH(K),    TH(X),  TH(H),  TH(DOT),  TH(COMM),  TH(ENT),
             MO(SYMBOL),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  MO(NUMBER)
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
    KC_GRAVE,      KC_TILDE,     KC_BACKSLASH,   KC_LEFT_CURLY_BRACE,  KC_DOLLAR,      KC_PERCENT,     KC_RIGHT_CURLY_BRACE,  KC_SLASH,  KC_HASH,  KC_QUOTE,
    KC_AMPERSAND,  KC_ASTERISK,  KC_EQUAL,       KC_LEFT_PAREN,        KC_LT,          KC_GT,          KC_RIGHT_PAREN,        KC_MINUS,  KC_PLUS,  KC_PIPE,
    KC_MDASH,      KC_AT,        KC_UNDERSCORE,  KC_LEFT_BRACKET,      KC_ELLIPSIS,    KC_CIRCUMFLEX,  KC_RIGHT_BRACKET,      KC_DOT,    KC_COMM,  KC_ENT,
                                                       MO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  MO(NUMBER)
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
    KC_BRIU,      KC_6,  KC_5,  KC_4,  KC_SCREENSHOT,    KC_MUTE,  KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_QUOTE,
    KC_LANGUAGE,  KC_3,  KC_2,  KC_1,  KC_0,             KC_VOLU,  KC_LEFT,    KC_DOWN,  KC_UP,    KC_RIGHT,
    KC_BRID,      KC_9,  KC_8,  KC_7,  KC_LOCKSCR,       KC_VOLD,  KC_ZOOMIN,  KC_DOT,   KC_COMM,  KC_ENT,
                         MO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  MO(SYMBOL)
    ),

    [FUNCTION] = LAYOUT_split_3x5_2(
    QK_BOOT,  KC_NO,  KC_NO,  KC_NO,  QK_REBOOT,    QK_REBOOT,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,
    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,        KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,        KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,
                          TO(ALPHA),  KC_NO,        KC_NO,      KC_NO
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

#define TH_GUI(key) TH_CASE(KC_##key, LGUI(KC_##key))

bool process_taphold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      TH_GUI(A)
      TH_GUI(B)
      TH_GUI(C)
      TH_GUI(D)
      TH_GUI(E)
      TH_GUI(F)
      TH_GUI(G)
      TH_GUI(H)
      TH_GUI(I)
      TH_GUI(J)
      TH_GUI(K)
      TH_GUI(L)
      TH_GUI(M)
      TH_GUI(N)
      TH_GUI(O)
      TH_GUI(P)
      TH_GUI(Q)
      TH_GUI(R)
      TH_GUI(S)
      TH_GUI(T)
      TH_GUI(U)
      TH_GUI(V)
      TH_GUI(W)
      TH_GUI(X)
      TH_GUI(Y)
      TH_GUI(Z)
      TH_GUI(ENT)
      TH_CASE(KC_QUOTE, KC_ESCAPE)
      TH_CASE(KC_DOT, KC_TAB)
      TH_CASE(KC_COMM, KC_ALFRED)
    }

    return true;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
  process_chord_event(combo_index, pressed);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_taphold(keycode, record)) {
    return false;
  }

  return true;
}
