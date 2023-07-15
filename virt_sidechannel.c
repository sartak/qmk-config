#include "virtser.h"

#define VIRT_KEYS 34
#define VIRT_KEYMULT_DOWN 0
#define VIRT_KEYMULT_UP 1
#define VIRT_KEYMULT_TAP 2
#define VIRT_KEYMULT_HOLD 3
#define VIRT_KEYMULT_LAST 4

#define VIRT_WARN                       0
#define VIRT_HEARTBEAT                  1
#define VIRT_KEYS_START                 VIRT_HEARTBEAT+1
#define VIRT_KEYS_END                   VIRT_KEYS_START+VIRT_KEYS*VIRT_KEYMULT_LAST
#define VIRT_COMBO_SHIFTED              VIRT_KEYS_END+1
#define VIRT_CHORD_STARTED              VIRT_COMBO_SHIFTED+1
#define VIRT_CHORD_ENDED_INDETERMINATE  VIRT_CHORD_STARTED+1
#define VIRT_CHORD_ENDED_TAP            VIRT_CHORD_ENDED_INDETERMINATE+1
#define VIRT_CHORD_ENDED_HOLD           VIRT_CHORD_ENDED_TAP+1
#define VIRT_LAYER_ZERO                 VIRT_CHORD_ENDED_HOLD+1
#define VIRT_LAYER_LAST                 VIRT_LAYER_ZERO+TOPLAYER
#define VIRT_MOD_ZERO                   VIRT_LAYER_LAST+1
#define VIRT_SHIFT_DOWN                 VIRT_MOD_ZERO
#define VIRT_SHIFT_UP                   VIRT_SHIFT_DOWN+1
#define VIRT_CTRL_DOWN                  VIRT_SHIFT_UP+1
#define VIRT_CTRL_UP                    VIRT_CTRL_DOWN+1
#define VIRT_ALT_DOWN                   VIRT_CTRL_UP+1
#define VIRT_ALT_UP                     VIRT_ALT_DOWN+1
#define VIRT_GUI_DOWN                   VIRT_ALT_UP+1
#define VIRT_GUI_UP                     VIRT_GUI_DOWN+1
#define VIRT_SETTINGS                    VIRT_GUI_UP+1
#define VIRT_MOD_LAST                   VIRT_SETTINGS

#define VIRT_SETTING_DUP_FORCE 0
#define VIRT_SETTING_VIRT_SERIAL 1
#define VIRT_SETTING_CHORD_MODE 2

#if VIRT_MOD_LAST > 255
#error Virt sidechannel message size exceeds one byte
#endif

#define VIRT_TIMEOUT 1000

static uint16_t recv_timer;
static uint8_t prev_mods;

void virt_send(uint8_t byte) {
  if (timer_elapsed(recv_timer) > VIRT_TIMEOUT) {
    return;
  }

  if (SETTING_VIRT_SERIAL == VIRT_SERIAL_OFF) {
    return;
  }

  virtser_send(byte);
}

void emit_new_mods(keyrecord_t *record) {
  uint8_t mods = get_mods() | get_oneshot_mods();
  if (mods == prev_mods) {
    return;
  }

#define MOD_VIRTSEND(modifier)                           \
  bool now_##modifier = mods & MOD_MASK_##modifier;      \
  bool was_##modifier = prev_mods & MOD_MASK_##modifier; \
  if (now_##modifier && !was_##modifier) {               \
    virt_send(VIRT_##modifier##_DOWN);                   \
  } else if (!now_##modifier && was_##modifier) {        \
    virt_send(VIRT_##modifier##_UP);                     \
  }

  MOD_VIRTSEND(SHIFT);
  MOD_VIRTSEND(CTRL);
  MOD_VIRTSEND(ALT);
  MOD_VIRTSEND(GUI);

  prev_mods = mods;
}

void emit_virt_key(keyrecord_t *record, bool pressed, bool held, bool tap) {
  emit_new_mods(record);

  if (!pressed) {
    return;
  }

  uint8_t col = record->event.key.col;
  uint8_t row = 0;

  switch (record->event.key.col) {
    case 0: // wcq zmx left-thumb-outer right-thumb-inner
      break;
    case 1: // lrj fnh left-thumb-inner right-thumb-outer
      break;
    case 2: // ysv oe.
      break;
    case 3: // ptd ui,
      break;
    case 4: // bgk 'a<ret>
      break;
    default:
      return;
  }

  switch (record->event.key.row) {
    case 0: // wlypb
      row = 0; break;
    case 1: // crstg
      row = 1; break;
    case 2: // qjvdk
      row = 2; break;
    case 3: // left thumbs
      row = 3; break;
    case 4: // zfou'
      row = 0; col += 5; break;
    case 5: // mneia
      row = 1; col += 5; break;
    case 6: // xh.,<ret>
      row = 2; col += 5; break;
    case 7: // right thumbs
      row = 3; col += 2; break;
    default:
      return;
  }

  uint8_t mult = 0;

  if (held) {
    mult = VIRT_KEYMULT_HOLD;
  }
  else if (tap) {
    mult = VIRT_KEYMULT_TAP;
  }
  else if (!record->event.pressed) {
    mult = VIRT_KEYMULT_UP;
  }
  else {
    mult = VIRT_KEYMULT_DOWN;
  }

  uint8_t msg = VIRT_KEYS_START + row * 10 + col + mult * VIRT_KEYS;
  virt_send(msg);
}

void emit_virt_combo(uint16_t combo_index, bool shifted, uint8_t event) {
  virt_send(VIRT_CHORD_STARTED);
  if (shifted) {
    virt_send(VIRT_COMBO_SHIFTED);
  }

  combo_t combo = key_combos[combo_index];
  int key_count = 0;
  while (true) {
    uint16_t key = pgm_read_word(&combo.keys[key_count]);
    if (COMBO_END == key) break;

    switch (key) {
      case A_W: virt_send(VIRT_KEYS_START+0); break;
      case A_L: virt_send(VIRT_KEYS_START+1); break;
      case A_Y: virt_send(VIRT_KEYS_START+2); break;
      case A_P: virt_send(VIRT_KEYS_START+3); break;
      case A_B: virt_send(VIRT_KEYS_START+4); break;
      case A_Z: virt_send(VIRT_KEYS_START+5); break;
      case A_F: virt_send(VIRT_KEYS_START+6); break;
      case A_O: virt_send(VIRT_KEYS_START+7); break;
      case A_U: virt_send(VIRT_KEYS_START+8); break;
      case A_q: virt_send(VIRT_KEYS_START+9); break;
      case A_C: virt_send(VIRT_KEYS_START+10); break;
      case A_R: virt_send(VIRT_KEYS_START+11); break;
      case A_S: virt_send(VIRT_KEYS_START+12); break;
      case A_T: virt_send(VIRT_KEYS_START+13); break;
      case A_G: virt_send(VIRT_KEYS_START+14); break;
      case A_M: virt_send(VIRT_KEYS_START+15); break;
      case A_N: virt_send(VIRT_KEYS_START+16); break;
      case A_E: virt_send(VIRT_KEYS_START+17); break;
      case A_I: virt_send(VIRT_KEYS_START+18); break;
      case A_A: virt_send(VIRT_KEYS_START+19); break;
      case A_Q: virt_send(VIRT_KEYS_START+20); break;
      case A_J: virt_send(VIRT_KEYS_START+21); break;
      case A_V: virt_send(VIRT_KEYS_START+22); break;
      case A_D: virt_send(VIRT_KEYS_START+23); break;
      case A_K: virt_send(VIRT_KEYS_START+24); break;
      case A_X: virt_send(VIRT_KEYS_START+25); break;
      case A_H: virt_send(VIRT_KEYS_START+26); break;
      case A_d: virt_send(VIRT_KEYS_START+27); break;
      case A_c: virt_send(VIRT_KEYS_START+28); break;
      case A_r: virt_send(VIRT_KEYS_START+29); break;
      case AT0: virt_send(VIRT_KEYS_START+30); break;
      case AT1: virt_send(VIRT_KEYS_START+31); break;
      case AT2: virt_send(VIRT_KEYS_START+32); break;
      case AT3: virt_send(VIRT_KEYS_START+33); break;
      default: virt_send(VIRT_WARN); break;
    }

    key_count++;
  }
  virt_send(event);
}

void emit_virt_layer(layer_state_t state) {
  virt_send(VIRT_LAYER_ZERO + get_highest_layer(state));
}

void emit_virt_setting_enum(uint8_t option, uint8_t value) {
  virt_send(VIRT_SETTINGS);
  virt_send(option);
  virt_send(value);
}

void virtser_recv(const uint8_t ch) {
  if (ch == VIRT_HEARTBEAT) {
    recv_timer = timer_read();
  }
}
