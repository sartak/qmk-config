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

enum combo_events {
  COMBO_LAYERS,
  COMBO_DELETE_WORD,
  COMBO_EXCLAMATION,
  COMBO_QUESTION,
  COMBO_SEMICOLON,
  COMBO_COLON,
  CHORD_the,
  CHORD_probably,
  CHORD_quick_brown_fox,
  CHORD_one,
  CHORD_out,
  CHORD_get,
  CHORD_day,
  CHORD_come,
  CHORD_like,
  CHORD_many,
  CHORD_back,
  CHORD_high,
  CHORD_last,
  CHORD_lead,
  CHORD_plan,
  CHORD_would,
  CHORD_could,
  CHORD_still,
  CHORD_under,
  CHORD_begin,
  CHORD_point,
  CHORD_small,
  CHORD_become,
  CHORD_person,
  CHORD_because,
  CHORD_present,
  CHORD_interest,
  CHORD_a,
  CHORD_A,
  CHORD_I,
  CHORD_be,
  CHORD_of,
  CHORD_by,
  CHORD_we,
  CHORD_if,
  CHORD_Elbereth,
  CHORD__ing,
  CHORD__nt,
  CHORD__ve,
  CHORD__re,
  _COMBO_LENGTH,
};
uint16_t COMBO_LEN = _COMBO_LENGTH;

const uint16_t PROGMEM combo_layers[] = {TO(SYMBOL), TO(NUMBER), COMBO_END};
const uint16_t PROGMEM combo_delete_word[] = {LSFT_T(KC_BSPC), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_exclamation[] = {TH(E), TH(DOT), COMBO_END};
const uint16_t PROGMEM combo_question[] = {TH(I), TH(COMM), COMBO_END};
const uint16_t PROGMEM combo_semicolon[] = {TH(A), TH(QUOTE), COMBO_END};
const uint16_t PROGMEM combo_colon[] = {TH(A), TH(ENT), COMBO_END};
const uint16_t PROGMEM combo_the[] = {TH(T), TH(H), TH(E), COMBO_END};
const uint16_t PROGMEM combo_probably[] = {TH(P), TH(B), TH(L), TH(Y), COMBO_END};
const uint16_t PROGMEM combo_quick_brown_fox[] = {TH(B), TH(Q), TH(X), TH(QUOTE), COMBO_END};
const uint16_t PROGMEM combo_one[] = {TH(O), TH(N), TH(E), COMBO_END};
const uint16_t PROGMEM combo_out[] = {TH(O), TH(U), TH(T), COMBO_END};
const uint16_t PROGMEM combo_get[] = {TH(G), TH(E), TH(T), COMBO_END};
const uint16_t PROGMEM combo_day[] = {TH(D), TH(A), TH(Y), COMBO_END};
const uint16_t PROGMEM combo_come[] = {TH(C), TH(O), TH(M), COMBO_END};
const uint16_t PROGMEM combo_like[] = {TH(L), TH(I), TH(K), COMBO_END};
const uint16_t PROGMEM combo_many[] = {TH(M), TH(N), TH(Y), COMBO_END};
const uint16_t PROGMEM combo_back[] = {TH(B), TH(A), TH(C), COMBO_END};
const uint16_t PROGMEM combo_high[] = {TH(H), TH(I), TH(G), COMBO_END};
const uint16_t PROGMEM combo_last[] = {TH(L), TH(A), TH(S), COMBO_END};
const uint16_t PROGMEM combo_lead[] = {TH(E), TH(A), TH(D), COMBO_END};
const uint16_t PROGMEM combo_plan[] = {TH(P), TH(L), TH(N), COMBO_END};
const uint16_t PROGMEM combo_would[] = {TH(W), TH(O), TH(U), COMBO_END};
const uint16_t PROGMEM combo_could[] = {TH(C), TH(O), TH(U), COMBO_END};
const uint16_t PROGMEM combo_still[] = {TH(S), TH(T), TH(L), COMBO_END};
const uint16_t PROGMEM combo_under[] = {TH(U), TH(N), TH(D), COMBO_END};
const uint16_t PROGMEM combo_begin[] = {TH(E), TH(G), TH(I), COMBO_END};
const uint16_t PROGMEM combo_point[] = {TH(P), TH(O), TH(I), COMBO_END};
const uint16_t PROGMEM combo_small[] = {TH(M), TH(A), TH(L), COMBO_END};
const uint16_t PROGMEM combo_become[] = {TH(C), TH(M), TH(E), COMBO_END};
const uint16_t PROGMEM combo_person[] = {TH(P), TH(S), TH(N), COMBO_END};
const uint16_t PROGMEM combo_because[] = {TH(B), TH(E), TH(A), COMBO_END};
const uint16_t PROGMEM combo_present[] = {TH(R), TH(N), TH(T), COMBO_END};
const uint16_t PROGMEM combo_interest[] = {TH(I), TH(N), TH(R), COMBO_END};
const uint16_t PROGMEM combo_a[] = {TH(A), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_A[] = {TH(A), LSFT_T(KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo_I[] = {TH(I), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_be[] = {TH(B), TH(E), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_of[] = {TH(O), TH(F), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_by[] = {TH(B), TH(Y), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_we[] = {TH(W), TH(E), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_if[] = {TH(I), TH(F), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_Elbereth[] = {TH(E), TH(L), TH(B), TH(H), COMBO_END};
const uint16_t PROGMEM combo__ing[] = {TH(I), TH(N), TH(G), COMBO_END};
const uint16_t PROGMEM combo__nt[] = {TH(N), TH(QUOTE), TH(T), COMBO_END};
const uint16_t PROGMEM combo__ve[] = {TH(QUOTE), TH(V), TH(E), COMBO_END};
const uint16_t PROGMEM combo__re[] = {TH(QUOTE), TH(R), TH(E), COMBO_END};

combo_t key_combos[] = {
  [COMBO_LAYERS] = COMBO(combo_layers, OSL(FUNCTION)),
  [COMBO_DELETE_WORD] = COMBO(combo_delete_word, LALT(KC_BSPC)),
  [COMBO_EXCLAMATION] = COMBO(combo_exclamation, KC_EXCLAIM),
  [COMBO_QUESTION] = COMBO(combo_question, KC_QUESTION),
  [COMBO_SEMICOLON] = COMBO(combo_semicolon, KC_SEMICOLON),
  [COMBO_COLON] = COMBO(combo_colon, KC_COLON),

  [CHORD_the] = COMBO_ACTION(combo_the),
  [CHORD_probably] = COMBO_ACTION(combo_probably),
  [CHORD_quick_brown_fox] = COMBO_ACTION(combo_quick_brown_fox),
  [CHORD_one] = COMBO_ACTION(combo_one),
  [CHORD_out] = COMBO_ACTION(combo_out),
  [CHORD_get] = COMBO_ACTION(combo_get),
  [CHORD_day] = COMBO_ACTION(combo_day),
  [CHORD_come] = COMBO_ACTION(combo_come),
  [CHORD_like] = COMBO_ACTION(combo_like),
  [CHORD_many] = COMBO_ACTION(combo_many),
  [CHORD_back] = COMBO_ACTION(combo_back),
  [CHORD_high] = COMBO_ACTION(combo_high),
  [CHORD_last] = COMBO_ACTION(combo_last),
  [CHORD_lead] = COMBO_ACTION(combo_lead),
  [CHORD_plan] = COMBO_ACTION(combo_plan),
  [CHORD_would] = COMBO_ACTION(combo_would),
  [CHORD_could] = COMBO_ACTION(combo_could),
  [CHORD_still] = COMBO_ACTION(combo_still),
  [CHORD_under] = COMBO_ACTION(combo_under),
  [CHORD_begin] = COMBO_ACTION(combo_begin),
  [CHORD_point] = COMBO_ACTION(combo_point),
  [CHORD_small] = COMBO_ACTION(combo_small),
  [CHORD_become] = COMBO_ACTION(combo_become),
  [CHORD_person] = COMBO_ACTION(combo_person),
  [CHORD_because] = COMBO_ACTION(combo_because),
  [CHORD_present] = COMBO_ACTION(combo_present),
  [CHORD_interest] = COMBO_ACTION(combo_interest),
  [CHORD_a] = COMBO_ACTION(combo_a),
  [CHORD_A] = COMBO_ACTION(combo_A),
  [CHORD_I] = COMBO_ACTION(combo_I),
  [CHORD_be] = COMBO_ACTION(combo_be),
  [CHORD_of] = COMBO_ACTION(combo_of),
  [CHORD_by] = COMBO_ACTION(combo_by),
  [CHORD_we] = COMBO_ACTION(combo_we),
  [CHORD_if] = COMBO_ACTION(combo_if),
  [CHORD_Elbereth] = COMBO_ACTION(combo_Elbereth),
  [CHORD__ing] = COMBO_ACTION(combo__ing),
  [CHORD__nt] = COMBO_ACTION(combo__nt),
  [CHORD__ve] = COMBO_ACTION(combo__ve),
  [CHORD__re] = COMBO_ACTION(combo__re),
};

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
             TO(SYMBOL),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(NUMBER)
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
    KC_GRAVE,      KC_TILDE,     KC_BACKSLASH,   KC_LEFT_CURLY_BRACE,  KC_DOLLAR,      KC_PERCENT,     KC_RIGHT_CURLY_BRACE,  KC_SLASH,  KC_HASH,  KC_QUOTE,
    KC_AMPERSAND,  KC_ASTERISK,  KC_EQUAL,       KC_LEFT_PAREN,        KC_LT,          KC_GT,          KC_RIGHT_PAREN,        KC_MINUS,  KC_PLUS,  KC_PIPE,
    KC_MDASH,      KC_AT,        KC_UNDERSCORE,  KC_LEFT_BRACKET,      KC_ELLIPSIS,    KC_CIRCUMFLEX,  KC_RIGHT_BRACKET,      KC_DOT,    KC_COMM,  KC_ENT,
                                                       TO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(NUMBER)
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
    KC_BRIU,      KC_6,  KC_5,  KC_4,  KC_SCREENSHOT,    KC_MUTE,  KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_QUOTE,
    KC_LANGUAGE,  KC_3,  KC_2,  KC_1,  KC_0,             KC_VOLU,  KC_LEFT,    KC_DOWN,  KC_UP,    KC_RIGHT,
    KC_BRID,      KC_9,  KC_8,  KC_7,  KC_LOCKSCR,       KC_VOLD,  KC_ZOOMIN,  KC_DOT,   KC_COMM,  KC_ENT,
                         TO(ALPHA),  LSFT_T(KC_BSPC),    LCTL_T(KC_SPC),  TO(SYMBOL)
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
  if (!pressed) {
    return;
  }

  switch(combo_index) {
    case CHORD_the:
      SEND_STRING("the ");
      break;
    case CHORD_probably:
      SEND_STRING("probably ");
      break;
    case CHORD_quick_brown_fox:
      SEND_STRING("the quick brown fox jumps over the lazy dog");
      break;
    case CHORD_one:
      SEND_STRING("one ");
      break;
    case CHORD_out:
      SEND_STRING("out ");
      break;
    case CHORD_get:
      SEND_STRING("get ");
      break;
    case CHORD_day:
      SEND_STRING("day ");
      break;
    case CHORD_come:
      SEND_STRING("come ");
      break;
    case CHORD_like:
      SEND_STRING("like ");
      break;
    case CHORD_many:
      SEND_STRING("many ");
      break;
    case CHORD_back:
      SEND_STRING("back ");
      break;
    case CHORD_high:
      SEND_STRING("high ");
      break;
    case CHORD_last:
      SEND_STRING("last ");
      break;
    case CHORD_lead:
      SEND_STRING("lead ");
      break;
    case CHORD_plan:
      SEND_STRING("plan ");
      break;
    case CHORD_would:
      SEND_STRING("would ");
      break;
    case CHORD_could:
      SEND_STRING("could ");
      break;
    case CHORD_still:
      SEND_STRING("still ");
      break;
    case CHORD_under:
      SEND_STRING("under ");
      break;
    case CHORD_begin:
      SEND_STRING("begin ");
      break;
    case CHORD_point:
      SEND_STRING("point ");
      break;
    case CHORD_small:
      SEND_STRING("small ");
      break;
    case CHORD_become:
      SEND_STRING("become ");
      break;
    case CHORD_person:
      SEND_STRING("person ");
      break;
    case CHORD_because:
      SEND_STRING("because ");
      break;
    case CHORD_present:
      SEND_STRING("present ");
      break;
    case CHORD_interest:
      SEND_STRING("interest ");
      break;
    case CHORD_a:
      SEND_STRING("a ");
      break;
    case CHORD_A:
      SEND_STRING("A ");
      break;
    case CHORD_I:
      SEND_STRING("I ");
      break;
    case CHORD_be:
      SEND_STRING("be ");
      break;
    case CHORD_of:
      SEND_STRING("of ");
      break;
    case CHORD_by:
      SEND_STRING("by ");
      break;
    case CHORD_we:
      SEND_STRING("we ");
      break;
    case CHORD_if:
      SEND_STRING("if ");
      break;
    case CHORD_Elbereth:
      SEND_STRING("Elbereth");
      break;
    case CHORD__ing:
      tap_code16(KC_BSPC);
      SEND_STRING("ing ");
      break;
    case CHORD__nt:
      tap_code16(KC_BSPC);
      SEND_STRING("n't ");
      break;
    case CHORD__ve:
      tap_code16(KC_BSPC);
      SEND_STRING("'ve ");
      break;
    case CHORD__re:
      tap_code16(KC_BSPC);
      SEND_STRING("'re ");
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_taphold(keycode, record)) {
    return false;
  }

  return true;
}
