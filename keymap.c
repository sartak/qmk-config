#include QMK_KEYBOARD_H

enum custom_keycodes {
  KC_DUP = SAFE_RANGE,
  KC_DUP_FORCE,
  KC_VIRT_SERIAL,
  KC_CHORD_MODE,
  KC_SHOW_SETTINGS,
};

#define TH(key) LT(0, key)

#define ALPHA 0
#define SYMBOL 1
#define NUMBER 2
#define FUNCTION 3
#define TOPLAYER FUNCTION

#define KC_LANGUAGE KC_F13
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
#define AT0 LT(SYMBOL, KC_DUP)
#define AT1 MT(MOD_LSFT, KC_BSPC)
#define AT2 MT(MOD_LCTL, KC_SPC)
#define AT3 LT(NUMBER, KC_TAB)

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
#define S_d TH(KC_DOT)
#define S_c TH(KC_COMM)
#define S_r TH(KC_ENT)
#define ST0 LT(ALPHA, KC_DUP)
#define ST1 MT(MOD_LSFT, KC_BSPC)
#define ST2 MT(MOD_LCTL, KC_SPC)
#define ST3 LT(NUMBER, KC_TAB)

#define N_W KC_SCREENSHOT
#define N_L KC_6
#define N_Y KC_5
#define N_P KC_4
#define N_B KC_BRIU
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
#define N_Q KC_LOCKSCR
#define N_J KC_9
#define N_V KC_8
#define N_D KC_7
#define N_K KC_BRID
#define N_X KC_VOLD
#define N_H KC_ZOOMIN
#define N_d TH(KC_DOT)
#define N_c TH(KC_COMM)
#define N_r TH(KC_ENT)
#define NT0 LT(ALPHA, KC_DUP)
#define NT1 MT(MOD_LSFT, KC_BSPC)
#define NT2 MT(MOD_LCTL, KC_SPC)
#define NT3 LT(SYMBOL, KC_TAB)

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
#define F_C KC_CHORD_MODE
#define F_R KC_NO
#define F_S KC_NO
#define F_T KC_NO
#define F_G KC_NO
#define F_M KC_NO
#define F_N KC_NO
#define F_E KC_NO
#define F_I KC_NO
#define F_A KC_NO
#define F_Q KC_SHOW_SETTINGS
#define F_J KC_NO
#define F_V KC_VIRT_SERIAL
#define F_D KC_DUP_FORCE
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

typedef enum {
  DUP_FORCE_OFF,
  DUP_FORCE_ON,
  _DUP_FORCE_LENGTH,
} setting_dup_force;
setting_dup_force SETTING_DUP_FORCE = 0;

typedef enum {
  VIRT_SERIAL_ENABLED,
  VIRT_SERIAL_DISABLED,
  _VIRT_SERUAL_LENGTH,
} setting_virt_serial;
setting_virt_serial SETTING_VIRT_SERIAL = 0;

typedef enum {
  CHORD_MODE_NORMAL,
  CHORD_MODE_CORRECTIVE,
  CHORD_MODE_EXCLUSIVE,
  CHORD_MODE_OFF,
  _CHORD_MODE_LENGTH,
} setting_chord_mode;
setting_chord_mode SETTING_CHORD_MODE = CHORD_MODE_CORRECTIVE;

#include "chords.c"
#include "corrections.c"

enum combo_events {
  CHORD_ENUM
  _COMBO_LENGTH,
};
uint16_t COMBO_LEN = _COMBO_LENGTH;

combo_t key_combos[] = {
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

#ifdef VIRT_SIDECHANNEL
#include "virt_sidechannel.c"
#else
#define emit_virt_key(...) ;
#define emit_virt_combo(...) ;
#define emit_virt_layer(...) ;
#define virt_send(...) ;
#endif

uint16_t last_chord;
uint16_t last_chord_length;
uint8_t last_chord_cycle;

CHORD_FUNCS

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  // We need this otherwise there's no way to toggle chords back on
  if (combo_index == CHORD_oneshot) {
    return true;
  }

  if (SETTING_CHORD_MODE == CHORD_MODE_OFF) {
    return false;
  }

  return true;
}

uint8_t last_message_length = 0;
#define SEND_MESSAGE(msg) { \
  last_message_length += strlen(msg); \
  SEND_STRING(msg); \
}

void clear_last_message(void) {
  if (last_message_length == 0) {
    return;
  }

  do {
    tap_code16(KC_BSPC);
  } while (--last_message_length);
}

#define CORRECTION_BUFFER_LENGTH 20
#define CORRECTION_TIMEOUT 5000
char correction_buffer[CORRECTION_BUFFER_LENGTH];
uint8_t correction_buffer_length = 0;
bool correction_buffer_skip = true; // wait til we see the first space
uint16_t correction_timer;
char* last_correction = NULL;

void reset_correction(bool clear_correction) {
  if (clear_correction) {
    last_correction = NULL;
  }
  correction_buffer_skip = false;
  correction_buffer_length = 0;
  correction_buffer[correction_buffer_length] = 0;
  correction_timer = timer_read();
}

void process_combo_event(uint16_t combo_index, bool pressed) {
  reset_correction(true);
  process_chord_event(combo_index, pressed);
}

bool try_correct(void) {
  last_correction = correct_chord(correction_buffer);
  if (last_correction == NULL) {
    return true;
  }

  for (uint16_t i = 0; i < correction_buffer_length - 1; i++) { \
    tap_code16(KC_BSPC);
  }
  reset_correction(false);
  return false;
}

bool process_chord_correction(uint16_t keycode, uint8_t mods) {
  if (keycode == KC_NO) {
    return true;
  }

  if (timer_elapsed(correction_timer) > CORRECTION_TIMEOUT) {
    if (!correction_buffer_skip && correction_buffer_length == 0) {
      correction_timer = timer_read();
    } else {
      correction_buffer_skip = true;
    }
  }

  if ((mods & MOD_MASK_CAG) == 0 && keycode >= KC_A && keycode <= KC_Z) {
    if (correction_buffer_skip) {
      return true;
    }
    if (correction_buffer_length >= CORRECTION_BUFFER_LENGTH - 2) {
      correction_buffer_skip = true;
      return true;
    }
    char c = (keycode - KC_A + 'A') | ((mods & MOD_MASK_SHIFT) ? 0 : 0x20);
    correction_buffer[correction_buffer_length++] = c;
    correction_buffer[correction_buffer_length] = 0;
    if (!try_correct()) {
      return false;
    }
  } else if (keycode == KC_SPC || keycode == KC_ENT) {
    if (!correction_buffer_skip) {
      correction_buffer[correction_buffer_length++] = ' ';
      correction_buffer[correction_buffer_length] = 0;
      if (!try_correct()) {
        return false;
      }
    }

    reset_correction(true);
  } else if (keycode == 42) {
    correction_timer = timer_read();
  } else {
    correction_buffer_skip = true;
  }

  return true;
}

#define GET_TAP_KC(dual_role_key) (dual_role_key & 0xFF)
uint16_t last_keycode = KC_NO;
uint8_t last_modifier = 0;
uint8_t mod_state;
uint8_t oneshot_mod_state;
bool process_repeat_key(uint16_t keycode, keyrecord_t *record) {
  if ((keycode == AT0 || keycode == ST0 || keycode == NT0) && record->tap.count) {
    if (record->event.pressed) {
      if (last_chord) {
        last_chord_cycle = process_chord_dup(last_chord, last_chord_cycle);
#ifdef VIRT_SIDECHANNEL
        emit_virt_key(record, record->event.pressed, false, true);
#endif
        return false;
      }
      register_mods(last_modifier);
      register_code16(last_keycode);
    } else {
      if (last_chord) {
        return false;
      }
      unregister_code16(last_keycode);
      unregister_mods(last_modifier);
    }
    return false;
  } else {
    switch (keycode) {
      case QK_DEF_LAYER ... QK_DEF_LAYER_MAX:
      case QK_MOMENTARY ... QK_MOMENTARY_MAX:
      case QK_LAYER_MOD ... QK_LAYER_MOD_MAX:
      case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
      case QK_TOGGLE_LAYER ... QK_TOGGLE_LAYER_MAX:
      case QK_TO ... QK_TO_MAX:
      case QK_LAYER_TAP_TOGGLE ... QK_LAYER_TAP_TOGGLE_MAX:
        break;
      default: {
        uint16_t next_keycode = KC_NO;
        uint8_t next_modifier = oneshot_mod_state > mod_state ? oneshot_mod_state : mod_state;

        switch (keycode) {
          case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
          case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            if (record->event.pressed) {
              next_keycode = GET_TAP_KC(keycode);
            }
            break;
          default:
            if (record->event.pressed) {
              next_keycode = keycode;
            }
            break;
        }

        if (SETTING_DUP_FORCE == DUP_FORCE_ON) {
          if (next_keycode >= KC_A && next_keycode <= KC_Z) {
            if (last_keycode == next_keycode && last_modifier == next_modifier) {
#ifdef VIRT_SIDECHANNEL
              virt_send(VIRT_SUPPRESSED_KEY);
#endif
              return false;
            }
          }
        }

        uint8_t current_mod_state = get_mods();
        uint8_t current_oneshot_mod_state = get_oneshot_mods();
        uint8_t current_modifier = current_oneshot_mod_state > current_mod_state ? current_oneshot_mod_state : current_mod_state;

        if (SETTING_CHORD_MODE == CHORD_MODE_EXCLUSIVE) {
          if ((current_modifier & MOD_MASK_CAG) == 0 && next_keycode >= KC_A && next_keycode <= KC_Z) {
#ifdef VIRT_SIDECHANNEL
            virt_send(VIRT_SUPPRESSED_KEY);
#endif
            return false;
          }
        }

        if (SETTING_CHORD_MODE == CHORD_MODE_CORRECTIVE) {
          if (!process_chord_correction(next_keycode, current_modifier)) {
            return false;
          }
        }

        last_modifier = next_modifier;

        if (next_keycode != KC_NO) {
          last_keycode = next_keycode;
        }

        break;
      }
    }
  }

  mod_state = get_mods();
  oneshot_mod_state = get_oneshot_mods();
  return true;
}

#define TH_CASE(tap_kc, hold_kc, tap_pre, tap_post)   \
  case LT(0, tap_kc):                                 \
    if (record->tap.count && record->event.pressed) { \
      tap_pre                                         \
      tap_code16(tap_kc);                             \
      last_keycode = tap_kc;                          \
      emit_virt_key(record, record->event.pressed, false, true); \
      tap_post                                        \
    } else if (record->event.pressed) {               \
      tap_code16(hold_kc);                            \
      last_keycode = hold_kc;                         \
      emit_virt_key(record, record->event.pressed, true, true); \
    }                                                 \
    return false;

#define TH_GUI(key) TH_CASE(key, LGUI(key), ;, ;)

#define SENTENCE_PRE \
  if (prev_sentence_mode) { \
    sentence_mode = true; \
    if (prev_chord_space) { \
      tap_code16(KC_BSPC); \
    } \
  }

#define SENTENCE_POST_SHIFT \
  if (prev_sentence_mode) { \
    if (prev_chord_space) { \
      tap_code16(KC_SPC); \
    } \
    add_oneshot_mods(MOD_MASK_SHIFT); \
  }

#define SENTENCE_POST_NOSHIFT \
  if (prev_sentence_mode) { \
    if (prev_chord_space) { \
      tap_code16(KC_SPC); \
    } \
  }

bool process_taphold(uint16_t keycode, keyrecord_t *record, bool prev_sentence_mode) {
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
      TH_CASE(KC_ENT, LGUI(KC_ENT), ;, reset_correction(true);)
      TH_CASE(KC_QUOTE, KC_ESCAPE, ;, ;)
      TH_CASE(KC_DOT, KC_NO, SENTENCE_PRE, SENTENCE_POST_SHIFT)
      TH_CASE(KC_COMM, KC_ALFRED, SENTENCE_PRE, SENTENCE_POST_NOSHIFT)
    }

    return true;
}

bool process_setting_keys(uint16_t keycode, keyrecord_t *record) {
  if (!record->event.pressed) {
    return true;
  }

  switch (keycode) {
    case KC_DUP_FORCE:
      if (++SETTING_DUP_FORCE == _DUP_FORCE_LENGTH) {
        SETTING_DUP_FORCE = 0;
      }
#ifdef VIRT_SIDECHANNEL
      emit_virt_setting_enum(VIRT_SETTING_DUP_FORCE, SETTING_DUP_FORCE);
#endif
      return false;

    case KC_VIRT_SERIAL: {
#ifdef VIRT_SIDECHANNEL
      // We want to make sure the last event before disabling gets sent
      setting_virt_serial next = SETTING_VIRT_SERIAL;
      if (++next == _VIRT_SERUAL_LENGTH) {
        next = 0;
      }

      if (next == VIRT_SERIAL_DISABLED) {
        emit_virt_setting_enum(VIRT_SETTING_VIRT_SERIAL, next);
      }

      SETTING_VIRT_SERIAL = next;

      if (SETTING_VIRT_SERIAL == VIRT_SERIAL_ENABLED) {
        emit_virt_setting_enum(VIRT_SETTING_VIRT_SERIAL, SETTING_VIRT_SERIAL);
      }
#endif

      return false;
    }

    case KC_CHORD_MODE:
      if (++SETTING_CHORD_MODE == _CHORD_MODE_LENGTH) {
        SETTING_CHORD_MODE = 0;
      }
#ifdef VIRT_SIDECHANNEL
      emit_virt_setting_enum(VIRT_SETTING_CHORD_MODE, SETTING_CHORD_MODE);
#endif
      return false;

    case KC_SHOW_SETTINGS:
      SEND_MESSAGE("[");

      switch (SETTING_DUP_FORCE) {
        case DUP_FORCE_OFF:
          SEND_MESSAGE("d-");
          break;
        case DUP_FORCE_ON:
          SEND_MESSAGE("D+");
          break;
        case _DUP_FORCE_LENGTH:
          __builtin_unreachable();
      }

      SEND_MESSAGE(",");

      switch (SETTING_VIRT_SERIAL) {
        case VIRT_SERIAL_ENABLED:
          SEND_MESSAGE("v+");
          break;
        case VIRT_SERIAL_DISABLED:
          SEND_MESSAGE("V-");
          break;
        case _VIRT_SERUAL_LENGTH:
          __builtin_unreachable();
      }

      SEND_MESSAGE(",");

      switch (SETTING_CHORD_MODE) {
        case CHORD_MODE_NORMAL:
          SEND_MESSAGE("c");
          break;
        case CHORD_MODE_CORRECTIVE:
          SEND_MESSAGE("CC");
          break;
        case CHORD_MODE_EXCLUSIVE:
          SEND_MESSAGE("CX");
          break;
        case CHORD_MODE_OFF:
          SEND_MESSAGE("C0");
          break;
        case _CHORD_MODE_LENGTH:
          __builtin_unreachable();
      }

      SEND_MESSAGE("]");
      return false;
  }

  return true;
}

bool process_postcomplete_action(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed && record->tap.count && (keycode == AT3 || keycode == ST3 || keycode == NT3)) {
    if (last_correction != NULL) {
      SEND_MESSAGE("[");
      SEND_MESSAGE(last_correction);
      SEND_MESSAGE("]");
      reset_correction(true);
      return false;
    }
  }

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_postcomplete_action(keycode, record)) {
    return false;
  }

  if (!process_repeat_key(keycode, record)) {
    return false;
  }

  bool prev_sentence_mode = sentence_mode;

  if (record->event.pressed) {
    last_chord = 0;
    last_chord_length = 0;
    sentence_mode = false;
    last_correction = NULL;
  }

  if (!process_taphold(keycode, record, prev_sentence_mode)) {
    return false;
  }

  if (!process_setting_keys(keycode, record)) {
    return false;
  }

  return true;
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AT0:
    case AT1:
    case AT2:
    case AT3:
      return true;
    default:
      return false;
    }
}

bool pre_process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    clear_last_message();
  }

#ifdef VIRT_SIDECHANNEL
  emit_virt_key(record, true, false, false);
#endif

  return true;
}

#ifdef VIRT_SIDECHANNEL
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  emit_virt_key(record, record->event.pressed, false, true);
}
#endif

#ifdef VIRT_SIDECHANNEL
layer_state_t layer_state_set_user(layer_state_t state) {
  emit_virt_layer(state);
  return state;
}
#endif
