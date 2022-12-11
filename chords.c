#define CHORD_ENUM \
  CHORD_the, \
  CHORD_probably, \
  CHORD_quick_brown_fox, \
  CHORD_one, \
  CHORD_out, \
  CHORD_get, \
  CHORD_day, \
  CHORD_come, \
  CHORD_like, \
  CHORD_many, \
  CHORD_back, \
  CHORD_high, \
  CHORD_last, \
  CHORD_lead, \
  CHORD_plan, \
  CHORD_would, \
  CHORD_could, \
  CHORD_still, \
  CHORD_under, \
  CHORD_begin, \
  CHORD_point, \
  CHORD_small, \
  CHORD_become, \
  CHORD_person, \
  CHORD_because, \
  CHORD_present, \
  CHORD_interest, \
  CHORD_a, \
  CHORD_A, \
  CHORD_I, \
  CHORD_be, \
  CHORD_of, \
  CHORD_by, \
  CHORD_we, \
  CHORD_if, \
  CHORD_Elbereth, \
  CHORD__ing, \
  CHORD__nt, \
  CHORD__ve, \
  CHORD__re,

const uint16_t PROGMEM chord_the[] = {TH(T), TH(H), TH(E), COMBO_END};
const uint16_t PROGMEM chord_probably[] = {TH(P), TH(B), TH(L), TH(Y), COMBO_END};
const uint16_t PROGMEM chord_quick_brown_fox[] = {TH(B), TH(Q), TH(X), TH(QUOTE), COMBO_END};
const uint16_t PROGMEM chord_one[] = {TH(O), TH(N), TH(E), COMBO_END};
const uint16_t PROGMEM chord_out[] = {TH(O), TH(U), TH(T), COMBO_END};
const uint16_t PROGMEM chord_get[] = {TH(G), TH(E), TH(T), COMBO_END};
const uint16_t PROGMEM chord_day[] = {TH(D), TH(A), TH(Y), COMBO_END};
const uint16_t PROGMEM chord_come[] = {TH(C), TH(O), TH(M), COMBO_END};
const uint16_t PROGMEM chord_like[] = {TH(L), TH(I), TH(K), COMBO_END};
const uint16_t PROGMEM chord_many[] = {TH(M), TH(N), TH(Y), COMBO_END};
const uint16_t PROGMEM chord_back[] = {TH(B), TH(A), TH(C), COMBO_END};
const uint16_t PROGMEM chord_high[] = {TH(H), TH(I), TH(G), COMBO_END};
const uint16_t PROGMEM chord_last[] = {TH(L), TH(A), TH(S), COMBO_END};
const uint16_t PROGMEM chord_lead[] = {TH(E), TH(A), TH(D), COMBO_END};
const uint16_t PROGMEM chord_plan[] = {TH(P), TH(L), TH(N), COMBO_END};
const uint16_t PROGMEM chord_would[] = {TH(W), TH(O), TH(U), COMBO_END};
const uint16_t PROGMEM chord_could[] = {TH(C), TH(O), TH(U), COMBO_END};
const uint16_t PROGMEM chord_still[] = {TH(S), TH(T), TH(L), COMBO_END};
const uint16_t PROGMEM chord_under[] = {TH(U), TH(N), TH(D), COMBO_END};
const uint16_t PROGMEM chord_begin[] = {TH(E), TH(G), TH(I), COMBO_END};
const uint16_t PROGMEM chord_point[] = {TH(P), TH(O), TH(I), COMBO_END};
const uint16_t PROGMEM chord_small[] = {TH(M), TH(A), TH(L), COMBO_END};
const uint16_t PROGMEM chord_become[] = {TH(C), TH(M), TH(E), COMBO_END};
const uint16_t PROGMEM chord_person[] = {TH(P), TH(S), TH(N), COMBO_END};
const uint16_t PROGMEM chord_because[] = {TH(B), TH(E), TH(A), COMBO_END};
const uint16_t PROGMEM chord_present[] = {TH(R), TH(N), TH(T), COMBO_END};
const uint16_t PROGMEM chord_interest[] = {TH(I), TH(N), TH(R), COMBO_END};
const uint16_t PROGMEM chord_a[] = {TH(A), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_A[] = {TH(A), LSFT_T(KC_BSPC), COMBO_END};
const uint16_t PROGMEM chord_I[] = {TH(I), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_be[] = {TH(B), TH(E), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_of[] = {TH(O), TH(F), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_by[] = {TH(B), TH(Y), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_we[] = {TH(W), TH(E), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_if[] = {TH(I), TH(F), LCTL_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM chord_Elbereth[] = {TH(E), TH(L), TH(B), TH(H), COMBO_END};
const uint16_t PROGMEM chord__ing[] = {TH(I), TH(N), TH(G), COMBO_END};
const uint16_t PROGMEM chord__nt[] = {TH(N), TH(QUOTE), TH(T), COMBO_END};
const uint16_t PROGMEM chord__ve[] = {TH(QUOTE), TH(V), TH(E), COMBO_END};
const uint16_t PROGMEM chord__re[] = {TH(QUOTE), TH(R), TH(E), COMBO_END};

#define CHORD_COMBOS \
  [CHORD_the] = COMBO_ACTION(chord_the), \
  [CHORD_probably] = COMBO_ACTION(chord_probably), \
  [CHORD_quick_brown_fox] = COMBO_ACTION(chord_quick_brown_fox), \
  [CHORD_one] = COMBO_ACTION(chord_one), \
  [CHORD_out] = COMBO_ACTION(chord_out), \
  [CHORD_get] = COMBO_ACTION(chord_get), \
  [CHORD_day] = COMBO_ACTION(chord_day), \
  [CHORD_come] = COMBO_ACTION(chord_come), \
  [CHORD_like] = COMBO_ACTION(chord_like), \
  [CHORD_many] = COMBO_ACTION(chord_many), \
  [CHORD_back] = COMBO_ACTION(chord_back), \
  [CHORD_high] = COMBO_ACTION(chord_high), \
  [CHORD_last] = COMBO_ACTION(chord_last), \
  [CHORD_lead] = COMBO_ACTION(chord_lead), \
  [CHORD_plan] = COMBO_ACTION(chord_plan), \
  [CHORD_would] = COMBO_ACTION(chord_would), \
  [CHORD_could] = COMBO_ACTION(chord_could), \
  [CHORD_still] = COMBO_ACTION(chord_still), \
  [CHORD_under] = COMBO_ACTION(chord_under), \
  [CHORD_begin] = COMBO_ACTION(chord_begin), \
  [CHORD_point] = COMBO_ACTION(chord_point), \
  [CHORD_small] = COMBO_ACTION(chord_small), \
  [CHORD_become] = COMBO_ACTION(chord_become), \
  [CHORD_person] = COMBO_ACTION(chord_person), \
  [CHORD_because] = COMBO_ACTION(chord_because), \
  [CHORD_present] = COMBO_ACTION(chord_present), \
  [CHORD_interest] = COMBO_ACTION(chord_interest), \
  [CHORD_a] = COMBO_ACTION(chord_a), \
  [CHORD_A] = COMBO_ACTION(chord_A), \
  [CHORD_I] = COMBO_ACTION(chord_I), \
  [CHORD_be] = COMBO_ACTION(chord_be), \
  [CHORD_of] = COMBO_ACTION(chord_of), \
  [CHORD_by] = COMBO_ACTION(chord_by), \
  [CHORD_we] = COMBO_ACTION(chord_we), \
  [CHORD_if] = COMBO_ACTION(chord_if), \
  [CHORD_Elbereth] = COMBO_ACTION(chord_Elbereth), \
  [CHORD__ing] = COMBO_ACTION(chord__ing), \
  [CHORD__nt] = COMBO_ACTION(chord__nt), \
  [CHORD__ve] = COMBO_ACTION(chord__ve), \
  [CHORD__re] = COMBO_ACTION(chord__re),

#define CHORD_FUNC \
void process_chord_event(uint16_t combo_index, bool pressed) { \
  if (!pressed) { \
    return; \
  } \
 \
  switch(combo_index) { \
    case CHORD_the: \
      SEND_STRING("the "); \
      break; \
    case CHORD_probably: \
      SEND_STRING("probably "); \
      break; \
    case CHORD_quick_brown_fox: \
      SEND_STRING("the quick brown fox jumps over the lazy dog"); \
      break; \
    case CHORD_one: \
      SEND_STRING("one "); \
      break; \
    case CHORD_out: \
      SEND_STRING("out "); \
      break; \
    case CHORD_get: \
      SEND_STRING("get "); \
      break; \
    case CHORD_day: \
      SEND_STRING("day "); \
      break; \
    case CHORD_come: \
      SEND_STRING("come "); \
      break; \
    case CHORD_like: \
      SEND_STRING("like "); \
      break; \
    case CHORD_many: \
      SEND_STRING("many "); \
      break; \
    case CHORD_back: \
      SEND_STRING("back "); \
      break; \
    case CHORD_high: \
      SEND_STRING("high "); \
      break; \
    case CHORD_last: \
      SEND_STRING("last "); \
      break; \
    case CHORD_lead: \
      SEND_STRING("lead "); \
      break; \
    case CHORD_plan: \
      SEND_STRING("plan "); \
      break; \
    case CHORD_would: \
      SEND_STRING("would "); \
      break; \
    case CHORD_could: \
      SEND_STRING("could "); \
      break; \
    case CHORD_still: \
      SEND_STRING("still "); \
      break; \
    case CHORD_under: \
      SEND_STRING("under "); \
      break; \
    case CHORD_begin: \
      SEND_STRING("begin "); \
      break; \
    case CHORD_point: \
      SEND_STRING("point "); \
      break; \
    case CHORD_small: \
      SEND_STRING("small "); \
      break; \
    case CHORD_become: \
      SEND_STRING("become "); \
      break; \
    case CHORD_person: \
      SEND_STRING("person "); \
      break; \
    case CHORD_because: \
      SEND_STRING("because "); \
      break; \
    case CHORD_present: \
      SEND_STRING("present "); \
      break; \
    case CHORD_interest: \
      SEND_STRING("interest "); \
      break; \
    case CHORD_a: \
      SEND_STRING("a "); \
      break; \
    case CHORD_A: \
      SEND_STRING("A "); \
      break; \
    case CHORD_I: \
      SEND_STRING("I "); \
      break; \
    case CHORD_be: \
      SEND_STRING("be "); \
      break; \
    case CHORD_of: \
      SEND_STRING("of "); \
      break; \
    case CHORD_by: \
      SEND_STRING("by "); \
      break; \
    case CHORD_we: \
      SEND_STRING("we "); \
      break; \
    case CHORD_if: \
      SEND_STRING("if "); \
      break; \
    case CHORD_Elbereth: \
      SEND_STRING("Elbereth"); \
      break; \
    case CHORD__ing: \
      tap_code16(KC_BSPC); \
      SEND_STRING("ing "); \
      break; \
    case CHORD__nt: \
      tap_code16(KC_BSPC); \
      SEND_STRING("n't "); \
      break; \
    case CHORD__ve: \
      tap_code16(KC_BSPC); \
      SEND_STRING("'ve "); \
      break; \
    case CHORD__re: \
      tap_code16(KC_BSPC); \
      SEND_STRING("'re "); \
      break; \
  } \
}
