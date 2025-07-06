#include QMK_KEYBOARD_H

// =================================================================================
// key maps
// =================================================================================

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
           KC_LCTL, XXXXXXX       , XXXXXXX       , _______       ,  _______, XXXXXXX,       KC_SPC  ,        XXXXXXX ,        XXXXXXX ,        KC_ENT  ,
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
             KC_ENT  ,        XXXXXXX ,        XXXXXXX ,       KC_SPC  , XXXXXXX,  _______, _______       , XXXXXXX       , XXXXXXX       ,      KC_LCTL ,
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

const uint16_t keycode_LCTL_ALL[][3] = {
      [0] = { LCTL_T(KC_A  ), KC_A  , MOD_LCTL }
    , [1] = { LCTL_T(KC_1  ), KC_1  , MOD_LCTL }
    , [2] = { LCTL_T(KC_TAB), KC_TAB, MOD_LCTL }
};
const uint16_t keycode_LSFT_ALL[][3] = {
      [0] = { LSFT_T(KC_Z  ), KC_Z  , MOD_LSFT }
    , [1] = { LSFT_T(KC_F11), KC_F11, MOD_LSFT }
};
const uint16_t keycode_LALT_ALL[][3] = {
      [0] = { LALT_T(KC_X  ), KC_X  , MOD_LALT }
    , [1] = { LALT_T(KC_F12), KC_F12, MOD_LALT }
};
const uint16_t keycode_LGUI_ALL[][3] = {
      [0] = { LGUI_T(KC_C  ), KC_C  , MOD_LGUI }
    , [1] = { LGUI_T(KC_GRV), KC_GRV, MOD_LGUI }
};
const uint16_t keycode_RCTL_ALL[][3] = {
      [0] = { RCTL_T(KC_SCLN), KC_SCLN, MOD_RCTL }
    , [1] = { RCTL_T(KC_0   ), KC_0   , MOD_RCTL }
};
const uint16_t keycode_RSFT_ALL[][3] = {
      [0] = { RSFT_T(KC_SLSH), KC_SLSH, MOD_RSFT }
    , [1] = { RSFT_T(KC_APP ), KC_APP , MOD_RSFT }
};
const uint16_t keycode_RALT_ALL[][3] = {
      [0] = { RALT_T(KC_DOT ), KC_DOT , MOD_RALT }
    , [1] = { RALT_T(KC_BSLS), KC_BSLS, MOD_RALT }
    , [2] = { RALT_T(KC_APP ), KC_APP , MOD_RALT }
};
const uint16_t keycode_RGUI_ALL[][3] = {
      [0] = { RGUI_T(KC_COMM), KC_COMM, MOD_RGUI }
    , [1] = { RGUI_T(KC_RBRC), KC_RBRC, MOD_RGUI }
};
const uint16_t keycode_LT1_ALL [][3] = {
      [0] = { LT(1, KC_V   ), KC_V    , OSL(1) }
    , [1] = { LT(1, KC_M   ), KC_M    , OSL(1) }
    , [2] = { LT(1, KC_MINS), KC_MINS , OSL(1) }
    , [3] = { LT(1, KC_LBRC), KC_LBRC , OSL(1) }
    , [4] = { LT(1, KC_LBRC), KC_LBRC , OSL(1) }
};
const uint16_t keycode_LT2_ALL [][3] = {
      [0] = { LT(2, KC_F), KC_F, OSL(2) }
    , [1] = { LT(2, KC_4), KC_4, OSL(2) }
};
const uint16_t keycode_LT3_ALL [][3] = {
      [0] = { LT(3, KC_D), KC_D, OSL(3) }
    , [1] = { LT(3, KC_3), KC_3, OSL(3) }
};
const uint16_t keycode_LT5_ALL [][3] = {
      [0] = { LT(5, KC_V   ), KC_V   , OSL(5) }
    , [1] = { LT(5, KC_M   ), KC_M   , OSL(5) }
    , [2] = { LT(5, KC_MINS), KC_MINS, OSL(5) }
    , [3] = { LT(5, KC_LBRC), KC_LBRC, OSL(5) }
    , [4] = { LT(5, KC_LBRC), KC_LBRC, OSL(5) }
};
const uint16_t keycode_LT6_ALL [][3] = {
      [0] = { LT(6, KC_F), KC_F, OSL(6) }
    , [1] = { LT(6, KC_4), KC_4, OSL(6) }
};
const uint16_t keycode_LT7_ALL [][3] = {
      [0] = { LT(7, KC_D), KC_D, OSL(7) }
    , [1] = { LT(7, KC_3), KC_3, OSL(7) }
};

enum pending_mods {
  PENDING_MOD_LSFT,
  PENDING_MOD_LCTL,
  PENDING_MOD_LALT,
  PENDING_MOD_LGUI,
  PENDING_MOD_RSFT,
  PENDING_MOD_RCTL,
  PENDING_MOD_RALT,
  PENDING_MOD_RGUI,
  PENDING_MOD_L1,
  PENDING_MOD_L2,
  PENDING_MOD_L3,
  PENDING_MOD_L5,
  PENDING_MOD_L6,
  PENDING_MOD_L7,
  NUM_MOD_PENDING_CANDIDATE
};

static uint16_t rolling_to_mod_pending_key[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
static bool rolling_to_mod_pending_now[] = {
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false
};
static uint16_t rolling_to_mod_judge_timeS[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
#define ROLLING_TO_MOD_TIMEOUT 50 // wait time for pending rolling to mod.(ms)


void resolve_rolling_to_mod_pending(int type_mod) {
    if (rolling_to_mod_pending_now[type_mod]) {
        // send tapping because no other keys pressed till time out.
        tap_code(rolling_to_mod_pending_key[type_mod]);
        rolling_to_mod_pending_now[type_mod] = false;
    }
}

#define SOLVE_ROLLING_TO_MOD_PENDING(type_mod, mods, key_mod)             \
    for (n = 0; n < sizeof(mods) / sizeof(mods[0]); n++) {                \
        if (keycode == mods[n][0]) {                                      \
            if (record->event.pressed) {                                  \
                resolve_rolling_to_mod_pending(type_mod);                 \
                register_code(key_mod);                                   \
            } else {                                                      \
                unregister_code(key_mod);                                 \
                if (record->tap.count > 0) {                              \
                    rolling_to_mod_pending_now[type_mod] = true;          \
                    rolling_to_mod_pending_key[type_mod] = mods[n][1];    \
                    rolling_to_mod_judge_timeS[type_mod] = timer_read();  \
                }                                                         \
            }                                                             \
            return false;                                                 \
        }                                                                 \
    }
#define OTHER_ROLLING_TO_MOD_PENDING(type_mod, mods)                      \
    for (n = 0; n < sizeof(mods) / sizeof(mods[0]); n++) {                \
        if (record->event.pressed) {                                      \
            resolve_rolling_to_mod_pending(type_mod);                     \
        } else {                                                          \
            if (rolling_to_mod_pending_now[type_mod]) {                   \
                register_weak_mods(mods[n][2]);                           \
                rolling_to_mod_pending_now[type_mod] = false;             \
            }                                                             \
        }                                                                 \
    }

#define SOLVE_ROLLING_TO_LAY_PENDING(type_mod, mods, layer)               \
    for (n = 0; n < sizeof(mods) / sizeof(mods[0]); n++) {                \
        if (keycode == mods[n][0]) {                                      \
            if (record->event.pressed) {                                  \
                resolve_rolling_to_mod_pending(type_mod);                 \
                layer_on(layer);                                          \
            } else {                                                      \
                layer_off(layer);                                         \
                if (record->tap.count > 0) {                              \
                    rolling_to_mod_pending_now[type_mod] = true;          \
                    rolling_to_mod_pending_key[type_mod] = mods[n][1];    \
                    rolling_to_mod_judge_timeS[type_mod] = timer_read();  \
                }                                                         \
            }                                                             \
            return false;                                                 \
        }                                                                 \
    }
#define OTHER_ROLLING_TO_LAY_PENDING(type_mod, mods)                      \
    for (n = 0; n < sizeof(mods) / sizeof(mods[0]); n++) {                \
        if (record->event.pressed) {                                      \
            resolve_rolling_to_mod_pending(type_mod);                     \
        } else {                                                          \
            if (rolling_to_mod_pending_now[type_mod]) {                   \
                tap_code(mods[n][2]);                                     \
                rolling_to_mod_pending_now[type_mod] = false;             \
            }                                                             \
        }                                                                 \
    }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    int n;
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_LCTL, keycode_LCTL_ALL, KC_LCTL);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_LSFT, keycode_LSFT_ALL, KC_LSFT);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_LALT, keycode_LALT_ALL, KC_LALT);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_LGUI, keycode_LGUI_ALL, KC_LGUI);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_RCTL, keycode_RCTL_ALL, KC_RCTL);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_RSFT, keycode_RSFT_ALL, KC_RSFT);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_LALT, keycode_RALT_ALL, KC_RALT);
    SOLVE_ROLLING_TO_MOD_PENDING(PENDING_MOD_RGUI, keycode_RGUI_ALL, KC_RGUI);

    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L1,   keycode_LT1_ALL , 1);
    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L2,   keycode_LT2_ALL , 2);
    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L3,   keycode_LT3_ALL , 3);
    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L5,   keycode_LT5_ALL , 5);
    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L6,   keycode_LT6_ALL , 6);
    SOLVE_ROLLING_TO_LAY_PENDING(PENDING_MOD_L7,   keycode_LT7_ALL , 7);


    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_LCTL, keycode_LCTL_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_LSFT, keycode_LSFT_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_LALT, keycode_LALT_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_LGUI, keycode_LGUI_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_RCTL, keycode_RCTL_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_RSFT, keycode_RSFT_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_LALT, keycode_RALT_ALL);
    OTHER_ROLLING_TO_MOD_PENDING(PENDING_MOD_RGUI, keycode_RGUI_ALL);

    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L1,   keycode_LT1_ALL);
    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L2,   keycode_LT2_ALL);
    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L3,   keycode_LT3_ALL);
    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L5,   keycode_LT5_ALL);
    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L6,   keycode_LT6_ALL);
    OTHER_ROLLING_TO_LAY_PENDING(PENDING_MOD_L7,   keycode_LT7_ALL);

    return true;
}

void matrix_scan_user(void) {
    int type_mod;
    for (type_mod = 0; type_mod < NUM_MOD_PENDING_CANDIDATE; type_mod++) {
        if (rolling_to_mod_pending_now[type_mod]
         && timer_elapsed(rolling_to_mod_judge_timeS[type_mod]) > ROLLING_TO_MOD_TIMEOUT) {
            resolve_rolling_to_mod_pending(type_mod);
        }
    }
}

