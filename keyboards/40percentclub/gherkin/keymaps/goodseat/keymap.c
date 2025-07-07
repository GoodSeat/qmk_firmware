#include QMK_KEYBOARD_H

// =================================================================================
// key maps
// =================================================================================

#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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

#define ROLLING_TO_MOD_TIMEOUT 30 // wait time for pending rolling to mod.(ms)

static uint16_t current_pressing_keys[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

void add_pressed_key(uint16_t keycode) {
    int i;
    for (i = 0; i < 10; i++) {
        if (current_pressing_keys[i] == 0) {
            current_pressing_keys[i] = keycode;
            return;
        }
    }
}
int remove_pressed_key(uint16_t keycode) {
    int i, j;
    for (i = 0; i < 10; i++) {
        if (current_pressing_keys[i] != keycode) continue;

        for (j = i + 1; j < 10; j++) {
            current_pressing_keys[i] = current_pressing_keys[j];
        }
        current_pressing_keys[9] = 0;
        return i;
    }
    return 9;
}

uint32_t delayed_key_release_callback(uint32_t trigger_time, void *cb_arg) {
    uint16_t keycode = (uint16_t)(uintptr_t)cb_arg;
    unregister_code(keycode);
    return 0; // always don't recall.
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    int index = 0;
    if (record->event.pressed) {
        add_pressed_key(keycode);
    } else {
        index = remove_pressed_key(keycode);
    }

    switch (keycode) {
        case LCTL_T(KC_A  ): // L-ctrl
        case LSFT_T(KC_Z  ): // L-shift
        case LALT_T(KC_X  ): // L-alt
        case LGUI_T(KC_C  ): // L-win
        case RCTL_T(KC_SCLN): // R-ctrl
        case RSFT_T(KC_SLSH): // R-shift
        case RALT_T(KC_DOT ): // R-alt
        case RGUI_T(KC_COMM): // R-win
        case LT(1, KC_V):
        case LT(1, KC_M):
        case LT(2, KC_F):
        case LT(3, KC_D):
        case LT(5, KC_V):
        case LT(5, KC_M):
        case LT(6, KC_F):
        case LT(7, KC_D):
            if (!record->event.pressed && current_pressing_keys[index] != 0) {
                defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_release_callback, (void*)(uintptr_t)keycode);
                return false;
            }
            break;

        // default:
        //     break;
    }

    return true;
}


