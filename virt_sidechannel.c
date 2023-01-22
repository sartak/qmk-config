#include "virtser.h"

#define VIRT_KEYS 34
#define VIRT_KEYMULT_DOWN 0
#define VIRT_KEYMULT_UP 1
#define VIRT_KEYMULT_TAP 2
#define VIRT_KEYMULT_HOLD 3
#define VIRT_KEYMULT_LAST 4

#define VIRT_WARN          0
#define VIRT_HEARTBEAT     1
#define VIRT_KEYS_START    VIRT_HEARTBEAT+1
#define VIRT_KEYS_END      VIRT_KEYS_START+VIRT_KEYS*VIRT_KEYMULT_LAST
#define VIRT_CHORD_STARTED VIRT_KEYS_END+1
#define VIRT_CHORD_ENDED   VIRT_CHORD_STARTED+1
#define VIRT_LAYER_ZERO    VIRT_CHORD_ENDED+1
#define VIRT_LAYER_LAST    VIRT_LAYER_ZERO+TOPLAYER
#define VIRT_MOD_ZERO      VIRT_LAYER_LAST+1
#define VIRT_SHIFT_DOWN    VIRT_MOD_ZERO
#define VIRT_SHIFT_UP      VIRT_SHIFT_DOWN+1
#define VIRT_CTRL_DOWN     VIRT_SHIFT_UP+1
#define VIRT_CTRL_UP       VIRT_CTRL_DOWN+1
#define VIRT_ALT_DOWN      VIRT_CTRL_UP+1
#define VIRT_ALT_UP        VIRT_ALT_DOWN+1
#define VIRT_GUI_DOWN      VIRT_ALT_UP+1
#define VIRT_GUI_UP        VIRT_GUI_DOWN+1
#define VIRT_MOD_LAST      VIRT_GUI_UP

#define VIRT_TIMEOUT 1000

static uint16_t recv_timer;
static uint8_t prev_mods;

void emit_new_mods(keyrecord_t *record) {
  uint8_t mods = get_mods() | get_oneshot_mods();
  if (mods == prev_mods) {
    return;
  }

#define MOD_VIRTSEND(modifier)                           \
  bool now_##modifier = mods & MOD_MASK_##modifier;      \
  bool was_##modifier = prev_mods & MOD_MASK_##modifier; \
  if (now_##modifier && !was_##modifier) {               \
    virtser_send(VIRT_##modifier##_DOWN);                \
  } else if (!now_##modifier && was_##modifier) {        \
    virtser_send(VIRT_##modifier##_UP);                  \
  }

  MOD_VIRTSEND(SHIFT);
  MOD_VIRTSEND(CTRL);
  MOD_VIRTSEND(ALT);
  MOD_VIRTSEND(GUI);

  prev_mods = mods;
}

void emit_virt_sidechannel(keyrecord_t *record, bool pressed, bool held, bool tap) {
  if (timer_elapsed(recv_timer) > VIRT_TIMEOUT) {
    return;
  }

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
  virtser_send(msg);
}

void emit_virt_combo(uint16_t combo_index, bool pressed) {
  if (!pressed) {
    return;
  }

  if (timer_elapsed(recv_timer) > VIRT_TIMEOUT) {
    return;
  }

  virtser_send(VIRT_CHORD_STARTED);
  combo_t combo = key_combos[combo_index];
  int key_count = 0;
  while (true) {
    uint16_t key = pgm_read_word(&combo.keys[key_count]);
    if (COMBO_END == key) break;

    switch (key) {
      case A_W: virtser_send(VIRT_KEYS_START+0); break;
      case A_L: virtser_send(VIRT_KEYS_START+1); break;
      case A_Y: virtser_send(VIRT_KEYS_START+2); break;
      case A_P: virtser_send(VIRT_KEYS_START+3); break;
      case A_B: virtser_send(VIRT_KEYS_START+4); break;
      case A_Z: virtser_send(VIRT_KEYS_START+5); break;
      case A_F: virtser_send(VIRT_KEYS_START+6); break;
      case A_O: virtser_send(VIRT_KEYS_START+7); break;
      case A_U: virtser_send(VIRT_KEYS_START+8); break;
      case A_q: virtser_send(VIRT_KEYS_START+9); break;
      case A_C: virtser_send(VIRT_KEYS_START+10); break;
      case A_R: virtser_send(VIRT_KEYS_START+11); break;
      case A_S: virtser_send(VIRT_KEYS_START+12); break;
      case A_T: virtser_send(VIRT_KEYS_START+13); break;
      case A_G: virtser_send(VIRT_KEYS_START+14); break;
      case A_M: virtser_send(VIRT_KEYS_START+15); break;
      case A_N: virtser_send(VIRT_KEYS_START+16); break;
      case A_E: virtser_send(VIRT_KEYS_START+17); break;
      case A_I: virtser_send(VIRT_KEYS_START+18); break;
      case A_A: virtser_send(VIRT_KEYS_START+19); break;
      case A_Q: virtser_send(VIRT_KEYS_START+20); break;
      case A_J: virtser_send(VIRT_KEYS_START+21); break;
      case A_V: virtser_send(VIRT_KEYS_START+22); break;
      case A_D: virtser_send(VIRT_KEYS_START+23); break;
      case A_K: virtser_send(VIRT_KEYS_START+24); break;
      case A_X: virtser_send(VIRT_KEYS_START+25); break;
      case A_H: virtser_send(VIRT_KEYS_START+26); break;
      case A_d: virtser_send(VIRT_KEYS_START+27); break;
      case A_c: virtser_send(VIRT_KEYS_START+28); break;
      case A_r: virtser_send(VIRT_KEYS_START+29); break;
      case AT0: virtser_send(VIRT_KEYS_START+30); break;
      case AT1: virtser_send(VIRT_KEYS_START+31); break;
      case AT2: virtser_send(VIRT_KEYS_START+32); break;
      case AT3: virtser_send(VIRT_KEYS_START+33); break;
      default: virtser_send(VIRT_WARN); break;
    }

    key_count++;
  }
  virtser_send(VIRT_CHORD_ENDED);
}

void emit_virt_layer(layer_state_t state) {
  if (timer_elapsed(recv_timer) > VIRT_TIMEOUT) {
    return;
  }

  virtser_send(VIRT_LAYER_ZERO + get_highest_layer(state));
}

void virtser_recv(const uint8_t ch) {
  if (ch == VIRT_HEARTBEAT) {
    recv_timer = timer_read();
  }
}
