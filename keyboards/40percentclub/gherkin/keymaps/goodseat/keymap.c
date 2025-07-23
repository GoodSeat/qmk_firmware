#include QMK_KEYBOARD_H
#include "print.h"

// =================================================================================
// key maps
// =================================================================================

#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5

enum my_keycodes {
    KC_LC_A = SAFE_RANGE
  , KC_LS_Z
  , KC_RC_CL
  , KC_RS_SL

  , KC_L1_V
  , KC_L1_M
};

KEYCODE_STRING_NAMES_USER(
    KEYCODE_STRING_NAME(KC_LC_A ),
    KEYCODE_STRING_NAME(KC_LS_Z ),
    KEYCODE_STRING_NAME(KC_RC_CL),
    KEYCODE_STRING_NAME(KC_RS_SL),

    KEYCODE_STRING_NAME(KC_L1_V ),
    KEYCODE_STRING_NAME(KC_L1_M )
);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
  [0] = LAYOUT_ortho_3x10(
             KC_Q ,          KC_W ,          KC_E ,          KC_R ,     KC_T,    KC_Y,          KC_U ,           KC_I ,         KC_O   ,        KC_P    ,
      LCTL_T(KC_A),          KC_S ,   LT(3,  KC_D),    LT(2, KC_F),     KC_G,    KC_H,          KC_J ,           KC_K ,         KC_L   , RCTL_T(KC_SCLN),
      LSFT_T(KC_Z),   LALT_T(KC_X),   LGUI_T(KC_C),    LT(1, KC_V),     KC_B,    KC_N,    LT(1, KC_M), RGUI_T(KC_COMM),  RALT_T(KC_DOT), RSFT_T(KC_SLSH)
  ),

  [1] = LAYOUT_ortho_3x10(
           KC_F1  ,        KC_F2  ,        KC_F3  ,       KC_F4   ,  KC_F5  ,   KC_F6,       KC_F7   ,          KC_F8 ,        KC_F9   ,        KC_F10  ,
    LCTL_T(KC_1)  ,        KC_2   , LT(3,  KC_3)  , LT(2, KC_4)   ,   KC_5  ,    KC_6,       KC_7    ,          KC_8  ,        KC_9    , RCTL_T(KC_0),
    LSFT_T(KC_F11), LALT_T(KC_F12), LGUI_T(KC_GRV), LT(1, KC_MINS),   KC_EQL, KC_QUOT, LT(1, KC_LBRC), RGUI_T(KC_RBRC), RALT_T(KC_BSLS), RSFT_T(KC_APP )
  ),

  [2] = LAYOUT_ortho_3x10(
           KC_ESC , KC_VOLD       , KC_VOLU       , KC_MUTE       ,  KC_PAUS, XXXXXXX,       KC_PGUP ,        KC_UP   ,        KC_PGDN ,        KC_DEL ,
    LCTL_T(KC_TAB), XXXXXXX       , XXXXXXX       , _______       ,  _______, KC_HOME,       KC_LEFT ,        KC_DOWN ,        KC_RGHT ,        KC_RCTL,
           KC_LSFT, LALT_T(KC_F12), LGUI_T(KC_GRV), LT(1, KC_MINS),  _______, KC_END ,       _______ ,        KC_RGUI , RALT_T(KC_APP ),        KC_RSFT
  ),

  [3] = LAYOUT_ortho_3x10(
           KC_ESC , _______       , _______       , _______       ,  KC_PAUS, KC_ESC ,       KC_GRV  ,        KC_MINS ,        KC_EQL  ,        KC_BSPC ,
           KC_LCTL, XXXXXXX       , XXXXXXX       , _______       ,  _______, KC_HENK,       KC_SPC  ,        KC_MHEN ,        KC_INS  ,        KC_ENT  ,
           KC_LSFT, KC_LALT       , KC_LGUI       , _______       ,  KC_CAPS, KC_PSCR,       KC_SCRL ,        KC_RGUI ,        KC_RALT ,        KC_RSFT
  ),

  [4] = LAYOUT_ortho_3x10(
      RSFT_T(KC_SLSH),  RALT_T(KC_DOT), RGUI_T(KC_COMM),    LT(5, KC_M),    KC_N,     KC_B,    LT(5, KC_V),   LGUI_T(KC_C),   LALT_T(KC_X), LSFT_T(KC_Z) ,
      RCTL_T(KC_SCLN),         KC_L   ,           KC_K ,          KC_J ,    KC_H,     KC_G,    LT(6, KC_F),   LT(7,  KC_D),          KC_S , LCTL_T(KC_A) ,
             KC_P    ,         KC_O   ,           KC_I ,          KC_U ,    KC_Y,     KC_T,          KC_R ,          KC_E ,          KC_W ,        KC_Q
  ),

  [5] = LAYOUT_ortho_3x10(
      RSFT_T(KC_APP ), RALT_T(KC_BSLS), RGUI_T(KC_RBRC), LT(5, KC_LBRC), KC_QUOT,   KC_EQL, LT(5, KC_MINS), LGUI_T(KC_GRV), LALT_T(KC_F12), LSFT_T(KC_F11) ,
      RCTL_T(KC_0)   ,        KC_9    ,          KC_8  ,       KC_7    ,    KC_6,   KC_5  , LT(6, KC_4)   , LT(7,  KC_3)  ,        KC_2   , LCTL_T(KC_1)   ,
             KC_F10  ,        KC_F9   ,          KC_F8 ,       KC_F7   ,   KC_F6,  KC_F5  ,       KC_F4   ,        KC_F3  ,        KC_F2  ,        KC_F1
  ),

  [6] = LAYOUT_ortho_3x10(
             KC_RSFT , RALT_T(KC_APP ),        KC_RGUI ,       _______ , KC_END ,  _______, LT(5, KC_MINS), LGUI_T(KC_GRV), LALT_T(KC_F12),      KC_LSFT ,
             KC_RCTL ,        KC_RGHT ,        KC_DOWN ,       KC_LEFT , KC_HOME,  _______, _______       , XXXXXXX       , XXXXXXX       ,LCTL_T(KC_TAB),
             KC_DEL  ,        KC_PGDN ,        KC_UP   ,       KC_PGUP , XXXXXXX,  KC_PAUS, KC_MUTE       , KC_VOLU       , KC_VOLD       ,      KC_ESC
  ),

  [7] = LAYOUT_ortho_3x10(
             KC_RSFT ,        KC_RALT ,        KC_RGUI ,       KC_SCRL , KC_PSCR,  KC_CAPS, _______       , KC_LGUI       , KC_LALT       ,      KC_LSFT ,
             KC_ENT  ,        KC_INS  ,        KC_MHEN ,       KC_SPC  , KC_HENK,  _______, _______       , XXXXXXX       , XXXXXXX       ,      KC_LCTL ,
             KC_BSPC ,        KC_EQL  ,        KC_MINS ,       KC_GRV  , KC_ESC ,  KC_PAUS, _______       , _______       , _______       ,      KC_ESC
  )
*/
  [0] = LAYOUT_ortho_3x10(
             KC_Q ,          KC_W ,          KC_E ,          KC_R ,     KC_T,    KC_Y,          KC_U ,           KC_I ,         KC_O   ,        KC_P    ,
           KC_LC_A,          KC_S ,   LT(3,  KC_D),    LT(2, KC_F),     KC_G,    KC_H,          KC_J ,           KC_K ,         KC_L   ,        KC_RC_CL,
           KC_LS_Z,   LALT_T(KC_X),   LGUI_T(KC_C),        KC_L1_V,     KC_B,    KC_N,       KC_L1_M , RGUI_T(KC_COMM),  RALT_T(KC_DOT),        KC_RS_SL
  ),

  [1] = LAYOUT_ortho_3x10(
           KC_F1  ,        KC_F2  ,        KC_F3  ,       KC_F4   ,  KC_F5  ,   KC_F6,       KC_F7   ,          KC_F8 ,        KC_F9   ,        KC_F10  ,
    LCTL_T(KC_1)  ,        KC_2   , LT(3,  KC_3)  , LT(2, KC_4)   ,   KC_5  ,    KC_6,       KC_7    ,          KC_8  ,        KC_9    , RCTL_T(KC_0),
    LSFT_T(KC_F11), LALT_T(KC_F12), LGUI_T(KC_GRV), LT(1, KC_MINS),   KC_EQL, KC_QUOT, LT(1, KC_LBRC), RGUI_T(KC_RBRC), RALT_T(KC_BSLS), RSFT_T(KC_APP )
  ),

  [2] = LAYOUT_ortho_3x10(
           KC_ESC , KC_VOLD       , KC_VOLU       , KC_MUTE       ,  KC_PAUS, XXXXXXX,       KC_PGUP ,        KC_UP   ,        KC_PGDN ,        KC_DEL ,
    LCTL_T(KC_TAB), XXXXXXX       , XXXXXXX       , _______       ,  _______, KC_HOME,       KC_LEFT ,        KC_DOWN ,        KC_RGHT ,        KC_RCTL,
           KC_LSFT, LALT_T(KC_F12), LGUI_T(KC_GRV), LT(1, KC_MINS),  _______, KC_END ,       _______ ,        KC_RGUI , RALT_T(KC_APP ),        KC_RSFT
  ),

  [3] = LAYOUT_ortho_3x10(
           KC_ESC , _______       , _______       , _______       ,  KC_PAUS, KC_ESC ,       KC_GRV  ,        KC_MINS ,        KC_EQL  ,        KC_BSPC ,
           KC_LCTL, XXXXXXX       , XXXXXXX       , _______       ,  _______, KC_HENK,       KC_SPC  ,        KC_MHEN ,        KC_INS  ,        KC_ENT  ,
           KC_LSFT, KC_LALT       , KC_LGUI       , _______       ,  KC_CAPS, KC_PSCR,       KC_SCRL ,        KC_RGUI ,        KC_RALT ,        KC_RSFT
  ),

  [4] = LAYOUT_ortho_3x10(
             KC_RS_SL,  RALT_T(KC_DOT), RGUI_T(KC_COMM),    LT(5, KC_M),    KC_N,     KC_B,    LT(5, KC_V),   LGUI_T(KC_C),   LALT_T(KC_X),     KC_LS_Z ,
             KC_RC_CL,         KC_L   ,           KC_K ,          KC_J ,    KC_H,     KC_G,    LT(6, KC_F),   LT(7,  KC_D),          KC_S ,     KC_LC_A ,
             KC_P    ,         KC_O   ,           KC_I ,          KC_U ,    KC_Y,     KC_T,          KC_R ,          KC_E ,          KC_W ,        KC_Q
  ),

  [5] = LAYOUT_ortho_3x10(
      RSFT_T(KC_APP ), RALT_T(KC_BSLS), RGUI_T(KC_RBRC), LT(5, KC_LBRC), KC_QUOT,   KC_EQL, LT(5, KC_MINS), LGUI_T(KC_GRV), LALT_T(KC_F12), LSFT_T(KC_F11) ,
      RCTL_T(KC_0)   ,        KC_9    ,          KC_8  ,       KC_7    ,    KC_6,   KC_5  , LT(6, KC_4)   , LT(7,  KC_3)  ,        KC_2   , LCTL_T(KC_1)   ,
             KC_F10  ,        KC_F9   ,          KC_F8 ,       KC_F7   ,   KC_F6,  KC_F5  ,       KC_F4   ,        KC_F3  ,        KC_F2  ,        KC_F1
  ),

  [6] = LAYOUT_ortho_3x10(
             KC_RSFT , RALT_T(KC_APP ),        KC_RGUI ,       _______ , KC_END ,  _______, LT(5, KC_MINS), LGUI_T(KC_GRV), LALT_T(KC_F12),      KC_LSFT ,
             KC_RCTL ,        KC_RGHT ,        KC_DOWN ,       KC_LEFT , KC_HOME,  _______, _______       , XXXXXXX       , XXXXXXX       ,LCTL_T(KC_TAB),
             KC_DEL  ,        KC_PGDN ,        KC_UP   ,       KC_PGUP , XXXXXXX,  KC_PAUS, KC_MUTE       , KC_VOLU       , KC_VOLD       ,      KC_ESC
  ),

  [7] = LAYOUT_ortho_3x10(
             KC_RSFT ,        KC_RALT ,        KC_RGUI ,       KC_SCRL , KC_PSCR,  KC_CAPS, _______       , KC_LGUI       , KC_LALT       ,      KC_LSFT ,
             KC_ENT  ,        KC_INS  ,        KC_MHEN ,       KC_SPC  , KC_HENK,  _______, _______       , XXXXXXX       , XXXXXXX       ,      KC_LCTL ,
             KC_BSPC ,        KC_EQL  ,        KC_MINS ,       KC_GRV  , KC_ESC ,  KC_PAUS, _______       , _______       , _______       ,      KC_ESC
  )

};

// =================================================================================
// combos
// =================================================================================

enum combos {
  JK_SPC,
  KL_ENT,
  UI_BSPC,
  IO_DEL,
  QW_ESC,
  WE_GRV,
  QP_TGL
};

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM qp_combo[] = {KC_Q, KC_P, COMBO_END};

combo_t key_combos[] = {
  [JK_SPC]  = COMBO(jk_combo, KC_SPC),
  [KL_ENT]  = COMBO(kl_combo, KC_ENT),
  [UI_BSPC] = COMBO(ui_combo, KC_BSPC),
  [IO_DEL]  = COMBO(io_combo, KC_DEL),
  [QW_ESC]  = COMBO(qw_combo, KC_ESC),
  [WE_GRV]  = COMBO(we_combo, KC_GRV),
  [QP_TGL]  = COMBO(qp_combo, TG(4))
};


// =================================================================================
// rolling press to hold
// =================================================================================
/*
 *
__attribute__((weak)) void register_code(uint8_t code) {
__attribute__((weak)) void unregister_code(uint8_t code) {
__attribute__((weak)) void tap_code(uint8_t code) {

__attribute__((weak)) void register_mods(uint8_t mods) {
__attribute__((weak)) void unregister_mods(uint8_t mods) {
__attribute__((weak)) void register_weak_mods(uint8_t mods) {
__attribute__((weak)) void unregister_weak_mods(uint8_t mods) {
MOD_RSFT

 * */

#define ROLLING_TO_MOD_TIMEOUT 200 // wait time for pending rolling to mod.(ms)

uint16_t tap_hold_get_tap_keycode(uint16_t keycode) {
    switch (keycode) {
        case KC_LC_A : return KC_A;
        case KC_LS_Z : return KC_Z;
        case KC_RC_CL: return KC_COMM;
        case KC_RS_SL: return KC_SLSH;
        case KC_L1_V : return KC_V;
        case KC_L1_M : return KC_M;
    }
    return keycode;
}
uint16_t tap_hold_get_hold_keycode(uint16_t keycode) {
    switch (keycode) {
        case KC_LC_A : return KC_LCTL;
        case KC_LS_Z : return KC_LSFT;
        case KC_RC_CL: return KC_RCTL;
        case KC_RS_SL: return KC_RSFT;
    }
    return 0;
}
uint8_t tap_hold_get_hold_layer(uint16_t keycode) {
    switch (keycode) {
        case KC_L1_V: return 1;
        case KC_L1_M: return 1;
    }
    return 0;
}

enum pending_slots {
      PSL_0 = 0
    , PSL_1
    , PSL_2
    , PSL_3
    , PSL_4
    , PSL_5
    , PSL_6
    , PENDING_TAP_CAPACITY
};

static uint8_t pressed_key_count = 0;

// Tapを保留するための情報構造体
typedef struct {
    bool     is_active;      // このスロットが使用中か
    bool     is_pending;     // tap-pressが保留中か
    uint16_t keycode;        // tap.count > 0 だった元のMod Tapキーコード
    uint16_t pressed_time;   // このキーが押された時刻
    uint16_t release_time;   // このキーが離された時刻
    deferred_token tapping_pending_token; // TAPPING_TERMの遅延トークン Mod-tapキー以外では常に0
    deferred_token rolling_pending_token; // ROLLING_TO_MOD_TIMEOUTの遅延トークン Mod-tapキー以外では常に0
} pending_tap_t;

static pending_tap_t pending_taps[PENDING_TAP_CAPACITY];

void keyboard_post_init_user(void) {
    uint16_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        pending_taps[i].is_active    = false;
        pending_taps[i].is_pending   = false;
        pending_taps[i].keycode      = 0;
        pending_taps[i].pressed_time = 0;
        pending_taps[i].release_time = 0;
        pending_taps[i].tapping_pending_token = 0;
        pending_taps[i].rolling_pending_token = 0;
    }
}

uint16_t add_pressed_key(uint16_t keycode) {
    uint16_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) {
            pending_taps[i].is_active    = true;
            pending_taps[i].is_pending   = true;
            pending_taps[i].keycode      = keycode;
            pending_taps[i].pressed_time = timer_read();
            pending_taps[i].release_time = 0;
            pending_taps[i].tapping_pending_token = 0;
            pending_taps[i].rolling_pending_token = 0;
            return i;
        }
    }
    return 0;
}
uint16_t remove_pressed_key(uint16_t keycode, bool *existYounger) {
    uint16_t i, j;
    uint16_t t;
    *existYounger = false;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].keycode != keycode) continue;
        pending_taps[i].release_time = timer_read();
        t = pending_taps[i].pressed_time;
        break;
    }
    for (j = 0; j < PENDING_TAP_CAPACITY; j++) {
        if (pending_taps[j].keycode == keycode) continue;
        if (pending_taps[j].pressed_time > t) {
            *existYounger = true;
            break;
        }
    }
    return i;
}
bool exist_penging_key(void) {
    uint16_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].is_active && pending_taps[i].is_pending) return true;
    }
    return false;
}

void tap_code_print(uint16_t keycode) {
    uprintf("  tap_code_print: %s\n", get_keycode_string(keycode));
    tap_code(keycode);
}
void register_code_print(uint16_t keycode) {
    uprintf("  register_code_print: %s\n", get_keycode_string(keycode));
    register_code(keycode);
}
void unregister_code_print(uint16_t keycode) {
    uprintf("  unregister_code_print: %s\n", get_keycode_string(keycode));
    unregister_code(keycode);
}
void layer_on_print(int16_t layer) {
    uprintf("  layer_on_print: 0x%04X\n", layer);
    layer_on(layer);
}
void layer_off_print(int16_t layer) {
    uprintf("  layer_off_print: 0x%04X\n", layer);
    layer_off(layer);
}


uint32_t delayed_key_tap_callback(uint32_t trigger_time, void *cb_arg) {

    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
    uprintf("  * delayed_key_tap_callback: %s\n", get_keycode_string(pending_taps[slot].keycode));

    pending_taps[slot].is_pending   = false;
    pending_taps[slot].tapping_pending_token = 0;
    pending_taps[slot].rolling_pending_token = 0;

    uint16_t mod_key;
    uint8_t layer_no;
    mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
    layer_no = tap_hold_get_hold_layer(pending_taps[slot].keycode);
    if      (mod_key  != 0) register_code_print(mod_key);
    else if (layer_no != 0) layer_on_print(layer_no);

    uint8_t i;
    bool exist_other_pending_mod = false;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (i == slot || !pending_taps[i].is_active) continue;
        if (pending_taps[i].tapping_pending_token != 0 || pending_taps[i].rolling_pending_token != 0) {
            exist_other_pending_mod = true;
            break;
        }
    }
    if (exist_other_pending_mod) return 0;

    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (i == slot || !pending_taps[i].is_active) continue;
        if (pending_taps[i].is_pending) {
            register_code_print(pending_taps[i].keycode);
            pending_taps[i].is_pending = false;
        }
    }
    return 0; // always don't recall.
}
uint32_t delayed_key_rolling_callback(uint32_t trigger_time, void *cb_arg) {

    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
    uprintf("  * delayed_key_rolling_callback: %s\n", get_keycode_string(pending_taps[slot].keycode));

    pending_taps[slot].is_active   = false;
    pending_taps[slot].is_pending  = false;
    pending_taps[slot].rolling_pending_token = 0;
    tap_code_print(tap_hold_get_tap_keycode(pending_taps[slot].keycode));

    uint8_t i;
    bool exist_other_pending_mod = false;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (i == slot || !pending_taps[i].is_active) continue;
        if (pending_taps[i].tapping_pending_token != 0 || pending_taps[i].rolling_pending_token != 0) {
            exist_other_pending_mod = true;
            break;
        }
    }
    if (exist_other_pending_mod) return 0;

    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (i == slot || !pending_taps[i].is_active) continue;
        if (pending_taps[i].is_pending) {
            register_code_print(pending_taps[i].keycode);
            pending_taps[i].is_pending = false;
        }
    }
    return 0; // always don't recall.
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t slot = 0;
    bool existYounger = false;
    uint8_t i;
    uint16_t mod_key;
    uint8_t layer_no;

    if (pressed_key_count == 0) print("---\n");

    if (record->event.pressed) uprintf("Key Press  : %s\n", get_keycode_string(keycode));
    else                       uprintf("Key Release: %s\n", get_keycode_string(keycode));

    bool is_mod_tap_key = (tap_hold_get_tap_keycode(keycode) != keycode);
    if (!is_mod_tap_key) {
        if (pressed_key_count == 0 || !exist_penging_key()) return true;
    }

    if (record->event.pressed) {
        slot = add_pressed_key(keycode);
        pressed_key_count++;
    } else {
        slot = remove_pressed_key(keycode, &existYounger);
        if (pressed_key_count > 0) pressed_key_count--;
    }
    xprintf("pressed_key_count: %u\n", pressed_key_count);
    xprintf("record->tap.count: %u\n", record->tap.count);

    if (record->event.pressed) {
        if (is_mod_tap_key) {
            switch (slot) {
                case PSL_0: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_0); break;
                case PSL_1: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_1); break;
                case PSL_2: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_2); break;
                case PSL_3: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_3); break;
                case PSL_4: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_4); break;
                case PSL_5: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_5); break;
                case PSL_6: pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)PSL_6); break;
            }
        }
        return false;
    } else {
        if (!is_mod_tap_key) pending_taps[slot].is_active = false;

        if (!pending_taps[slot].is_pending) {
            mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
            layer_no = tap_hold_get_hold_layer  (pending_taps[slot].keycode);
            if      (mod_key  != 0) unregister_code_print(mod_key);
            else if (layer_no != 0) layer_off_print(layer_no);

            pending_taps[slot].is_active = false;
            print("!is_pending\n");
            return true;
        }

        if (pending_taps[slot].tapping_pending_token != 0) {
            cancel_deferred_exec(pending_taps[slot].tapping_pending_token);
            pending_taps[slot].tapping_pending_token = 0;

            if (!existYounger) {
                tap_code_print(tap_hold_get_tap_keycode(pending_taps[slot].keycode));
                pending_taps[slot].is_pending = false;
                pending_taps[slot].is_active  = false;
            } else {
                switch (slot) {
                    case PSL_0: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_0); break;
                    case PSL_1: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_1); break;
                    case PSL_2: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_2); break;
                    case PSL_3: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_3); break;
                    case PSL_4: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_4); break;
                    case PSL_5: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_5); break;
                    case PSL_6: pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)PSL_6); break;
                }
            }
            return false;
        } else {

            // 自分よりpressの古いmodキー、あるいは30ms以内に離された保留中のmodキーがあれば、それをModキー扱いとする
            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active) continue;
                if (pending_taps[i].pressed_time < pending_taps[slot].pressed_time || pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_pending = false;

                    mod_key  = tap_hold_get_hold_keycode(pending_taps[i].keycode);
                    layer_no = tap_hold_get_hold_layer  (pending_taps[i].keycode);
                    if      (mod_key  != 0) register_code_print(mod_key);
                    else if (layer_no != 0) layer_on_print(layer_no);
                }
            }

            tap_code_print(keycode);

            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active) continue;

                if (pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_active = false;
                    mod_key  = tap_hold_get_hold_keycode(pending_taps[i].keycode);
                    layer_no = tap_hold_get_hold_layer  (pending_taps[i].keycode);
                    if      (mod_key  != 0) unregister_code_print(mod_key);
                    else if (layer_no != 0) layer_off_print(layer_no);

                    cancel_deferred_exec(pending_taps[i].rolling_pending_token);
                    pending_taps[i].rolling_pending_token = 0;
                } else if (pending_taps[i].pressed_time < pending_taps[slot].pressed_time) {
                    cancel_deferred_exec(pending_taps[i].tapping_pending_token);
                    pending_taps[i].tapping_pending_token = 0;
                }
            }
        }

    }

    return false;
}


//// キー入力がない間も、タイムアウト処理を呼び出すために使用
//void matrix_scan_user(void) {
//    uint16_t passed_time = timer_elapsed(release_time);
//    if ((delayed_tap_key != 0 || pending_layer != 0) && passed_time > ROLLING_TO_MOD_TIMEOUT) {
//        xprintf("pending_time_out: %u - %u,%u\n", passed_time, delayed_tap_key, pending_layer);
//        if (delayed_tap_key != 0) {
//            tap_code(delayed_tap_key);
//        }
//
//        if (pending_layer != 0) {
//            layer_off(pending_layer);
//        }
//
//        delayed_tap_key = 0;
//        pending_layer = 0;
//    }
//}


