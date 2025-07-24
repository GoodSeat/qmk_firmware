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
  , KC_LA_X
  , KC_LG_C

  , KC_RC_CL
  , KC_RS_SL
  , KC_RA_DT
  , KC_RG_CM

  , KC_LC_1
  , KC_LS_F11
  , KC_LA_F12
  , KC_LG_GRV

  , KC_RC_0
  , KC_RS_AP
  , KC_RA_BSL
  , KC_RG_RBR

  , KC_LC_TAB
  , KC_RA_AP

  , KC_L1_V
  , KC_L1_M
  , KC_L2_F
  , KC_L3_D

  , KC_REVS
};

uint16_t tap_hold_get_tap_keycode(uint16_t keycode) {
    switch (keycode) {
        case KC_LC_A : return KC_A;
        case KC_LS_Z : return KC_Z;
        case KC_LA_X : return KC_X;
        case KC_LG_C : return KC_C;

        case KC_RC_CL: return KC_SCLN;
        case KC_RS_SL: return KC_SLSH;
        case KC_RA_DT: return KC_DOT;
        case KC_RG_CM: return KC_COMMA;

        case KC_LC_1  : return KC_1;
        case KC_LS_F11: return KC_F11;
        case KC_LA_F12: return KC_F12;
        case KC_LG_GRV: return KC_GRV;

        case KC_RC_0  : return KC_0;
        case KC_RS_AP : return KC_APP;
        case KC_RA_BSL: return KC_BSLS;
        case KC_RG_RBR: return KC_RBRC;

        case KC_LC_TAB: return KC_TAB;
        case KC_RA_AP : return KC_APP;

        case KC_L1_V : return KC_V;
        case KC_L1_M : return KC_M;
        case KC_L2_F : return KC_F;
        case KC_L3_D : return KC_D;
    }
    return keycode;
}
uint16_t tap_hold_get_hold_keycode(uint16_t keycode) {
    switch (keycode) {
        case KC_LC_A : return KC_LCTL;
        case KC_LS_Z : return KC_LSFT;
        case KC_LA_X : return KC_LALT;
        case KC_LG_C : return KC_LGUI;

        case KC_RC_CL: return KC_RCTL;
        case KC_RS_SL: return KC_RSFT;
        case KC_RA_DT: return KC_RALT;
        case KC_RG_CM: return KC_RGUI;

        case KC_LC_1  : return KC_LCTL;
        case KC_LS_F11: return KC_LSFT;
        case KC_LA_F12: return KC_LALT;
        case KC_LG_GRV: return KC_LGUI;

        case KC_RC_0  : return KC_RCTL;
        case KC_RS_AP : return KC_RSFT;
        case KC_RA_BSL: return KC_RALT;
        case KC_RG_RBR: return KC_RGUI;

        case KC_LC_TAB: return KC_LCTL;
        case KC_RA_AP : return KC_RALT;
    }
    return 0;
}
uint8_t tap_hold_get_hold_layer(uint16_t keycode) {
    switch (keycode) {
        case KC_L1_V: return 1;
        case KC_L1_M: return 1;
        case KC_L2_F: return 2;
        case KC_L3_D: return 3;
    }
    return 0;
}


#ifdef KEYMAP_INTROSPECTION_ENABLE
const char* get_keycode_str(uint16_t keycode) {
    static char keycode_str[16];

    switch (keycode) {
    case KC_NO:          sprintf(keycode_str, "KC_NO"); break;
    case KC_TRANSPARENT: sprintf(keycode_str, "KC_TRNS"); break;

    case KC_A: sprintf(keycode_str, "KC_A"); break;
    case KC_B: sprintf(keycode_str, "KC_B"); break;
    case KC_C: sprintf(keycode_str, "KC_C"); break;
    case KC_D: sprintf(keycode_str, "KC_D"); break;
    case KC_E: sprintf(keycode_str, "KC_E"); break;
    case KC_F: sprintf(keycode_str, "KC_F"); break;
    case KC_G: sprintf(keycode_str, "KC_G"); break;
    case KC_H: sprintf(keycode_str, "KC_H"); break;
    case KC_I: sprintf(keycode_str, "KC_I"); break;
    case KC_J: sprintf(keycode_str, "KC_J"); break;
    case KC_K: sprintf(keycode_str, "KC_K"); break;
    case KC_L: sprintf(keycode_str, "KC_L"); break;
    case KC_M: sprintf(keycode_str, "KC_M"); break;
    case KC_N: sprintf(keycode_str, "KC_N"); break;
    case KC_O: sprintf(keycode_str, "KC_O"); break;
    case KC_P: sprintf(keycode_str, "KC_P"); break;
    case KC_Q: sprintf(keycode_str, "KC_Q"); break;
    case KC_R: sprintf(keycode_str, "KC_R"); break;
    case KC_S: sprintf(keycode_str, "KC_S"); break;
    case KC_T: sprintf(keycode_str, "KC_T"); break;
    case KC_U: sprintf(keycode_str, "KC_U"); break;
    case KC_V: sprintf(keycode_str, "KC_V"); break;
    case KC_W: sprintf(keycode_str, "KC_W"); break;
    case KC_X: sprintf(keycode_str, "KC_X"); break;
    case KC_Y: sprintf(keycode_str, "KC_Y"); break;
    case KC_Z: sprintf(keycode_str, "KC_Z"); break;
    case KC_1: sprintf(keycode_str, "KC_1"); break;
    case KC_2: sprintf(keycode_str, "KC_2"); break;
    case KC_3: sprintf(keycode_str, "KC_3"); break;
    case KC_4: sprintf(keycode_str, "KC_4"); break;
    case KC_5: sprintf(keycode_str, "KC_5"); break;
    case KC_6: sprintf(keycode_str, "KC_6"); break;
    case KC_7: sprintf(keycode_str, "KC_7"); break;
    case KC_8: sprintf(keycode_str, "KC_8"); break;
    case KC_9: sprintf(keycode_str, "KC_9"); break;
    case KC_0: sprintf(keycode_str, "KC_0"); break;

    case KC_ENTER:          sprintf(keycode_str, "KC_ENTER"); break;
    case KC_ESCAPE:         sprintf(keycode_str, "KC_ESC"); break;
    case KC_BACKSPACE:      sprintf(keycode_str, "KC_BCSP"); break;
    case KC_TAB:            sprintf(keycode_str, "KC_TAB"); break;
    case KC_SPACE:          sprintf(keycode_str, "KC_SPACE"); break;
    case KC_MINUS:          sprintf(keycode_str, "KC_MINUS"); break;
    case KC_EQUAL:          sprintf(keycode_str, "KC_EQUAL"); break;
    case KC_LEFT_BRACKET:   sprintf(keycode_str, "KC_LEFT_BRACKET"); break;
    case KC_RIGHT_BRACKET:  sprintf(keycode_str, "KC_RIGHT_BRACKET"); break;
    case KC_BACKSLASH:      sprintf(keycode_str, "KC_BACKSLASH"); break;
    case KC_NONUS_HASH:     sprintf(keycode_str, "KC_NONUS_HASH"); break;
    case KC_SEMICOLON:      sprintf(keycode_str, "KC_SEMICOLON"); break;
    case KC_QUOTE:          sprintf(keycode_str, "KC_QUOTE"); break;
    case KC_GRAVE:          sprintf(keycode_str, "KC_GRAVE"); break;
    case KC_COMMA:          sprintf(keycode_str, "KC_COMMA"); break;
    case KC_DOT:            sprintf(keycode_str, "KC_DOT"); break;
    case KC_SLASH:          sprintf(keycode_str, "KC_SLASH"); break;
    case KC_CAPS_LOCK:      sprintf(keycode_str, "KC_CAPS_LOCK"); break;
    case KC_F1:             sprintf(keycode_str, "KC_F1"); break;
    case KC_F2:             sprintf(keycode_str, "KC_F2"); break;
    case KC_F3:             sprintf(keycode_str, "KC_F3"); break;
    case KC_F4:             sprintf(keycode_str, "KC_F4"); break;
    case KC_F5:             sprintf(keycode_str, "KC_F5"); break;
    case KC_F6:             sprintf(keycode_str, "KC_F6"); break;
    case KC_F7:             sprintf(keycode_str, "KC_F7"); break;
    case KC_F8:             sprintf(keycode_str, "KC_F8"); break;
    case KC_F9:             sprintf(keycode_str, "KC_F9"); break;
    case KC_F10:            sprintf(keycode_str, "KC_F10"); break;
    case KC_F11:            sprintf(keycode_str, "KC_F11"); break;
    case KC_F12:            sprintf(keycode_str, "KC_F12"); break;
    case KC_PRINT_SCREEN:   sprintf(keycode_str, "KC_PRSC"); break;
    case KC_SCROLL_LOCK:    sprintf(keycode_str, "KC_SCLK"); break;
    case KC_PAUSE:          sprintf(keycode_str, "KC_PAUS"); break;
    case KC_INSERT:         sprintf(keycode_str, "KC_INST"); break;
    case KC_HOME:           sprintf(keycode_str, "KC_HOME"); break;
    case KC_PAGE_UP:        sprintf(keycode_str, "KC_PGUP"); break;
    case KC_DELETE:         sprintf(keycode_str, "KC_DELT"); break;
    case KC_END:            sprintf(keycode_str, "KC_END"); break;
    case KC_PAGE_DOWN:      sprintf(keycode_str, "KC_PGDN"); break;
    case KC_RIGHT:          sprintf(keycode_str, "KC_RIGHT"); break;
    case KC_LEFT:           sprintf(keycode_str, "KC_LEFT"); break;
    case KC_DOWN:           sprintf(keycode_str, "KC_DOWN"); break;
    case KC_UP:             sprintf(keycode_str, "KC_UP"); break;
    case KC_NUM_LOCK:       sprintf(keycode_str, "KC_NUM_LOCK"); break;
    case KC_KP_SLASH:       sprintf(keycode_str, "KC_KP_SLASH"); break;
    case KC_KP_ASTERISK:    sprintf(keycode_str, "KC_KP_ASTERISK"); break;
    case KC_KP_MINUS:       sprintf(keycode_str, "KC_KP_MINUS"); break;
    case KC_KP_PLUS:        sprintf(keycode_str, "KC_KP_PLUS") ; break;
    case KC_KP_ENTER:       sprintf(keycode_str, "KC_KP_ENTER"); break;

    case KC_LEFT_CTRL:      sprintf(keycode_str, "KC_LEFT_CTRL"); break;
    case KC_LEFT_SHIFT:     sprintf(keycode_str, "KC_LEFT_SHIFT"); break;
    case KC_LEFT_ALT:       sprintf(keycode_str, "KC_LEFT_ALT"); break;
    case KC_LEFT_GUI:       sprintf(keycode_str, "KC_LEFT_GUI"); break;
    case KC_RIGHT_CTRL:     sprintf(keycode_str, "KC_RIGHT_CTRL"); break;
    case KC_RIGHT_SHIFT:    sprintf(keycode_str, "KC_RIGHT_SHIFT"); break;
    case KC_RIGHT_ALT:      sprintf(keycode_str, "KC_RIGHT_ALT"); break;
    case KC_RIGHT_GUI:      sprintf(keycode_str, "KC_RIGHT_GUI"); break;

    case KC_LC_A : sprintf(keycode_str, "KC_LC_A"); break;
    case KC_LS_Z : sprintf(keycode_str, "KC_LS_Z"); break;
    case KC_LA_X : sprintf(keycode_str, "KC_LA_X"); break;
    case KC_LG_C : sprintf(keycode_str, "KC_LG_C"); break;

    case KC_RC_CL : sprintf(keycode_str, "KC_RC_CL"); break;
    case KC_RS_SL : sprintf(keycode_str, "KC_RS_SL"); break;
    case KC_RA_DT : sprintf(keycode_str, "KC_RA_DT"); break;
    case KC_RG_CM : sprintf(keycode_str, "KC_RG_CM"); break;

    case KC_LC_1  : sprintf(keycode_str, "KC_LC_1"); break;
    case KC_LS_F11: sprintf(keycode_str, "KC_LS_F11"); break;
    case KC_LA_F12: sprintf(keycode_str, "KC_LA_F12"); break;
    case KC_LG_GRV: sprintf(keycode_str, "KC_LG_GRV"); break;

    case KC_RC_0  : sprintf(keycode_str, "KC_RC_0"); break;
    case KC_RS_AP : sprintf(keycode_str, "KC_RS_AP"); break;
    case KC_RA_BSL: sprintf(keycode_str, "KC_RA_BSL"); break;
    case KC_RG_RBR: sprintf(keycode_str, "KC_RG_RBR"); break;

    case KC_LC_TAB: sprintf(keycode_str, "KC_LC_TAB"); break;
    case KC_RA_AP : sprintf(keycode_str, "KC_RA_AP"); break;

    case KC_L1_V : sprintf(keycode_str, "KC_L1_V"); break;
    case KC_L1_M : sprintf(keycode_str, "KC_L1_M"); break;
    case KC_L2_F : sprintf(keycode_str, "KC_L2_F"); break;
    case KC_L3_D : sprintf(keycode_str, "KC_L3_D"); break;

    case KC_REVS : sprintf(keycode_str, "KC_REVS"); break;

    default: sprintf(keycode_str, "KC_%u", keycode); break;
    }

    return keycode_str;
}
#endif // KEYMAP_INTROSPECTION_ENABLE

//  L0
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Q     <1>|W     <2>|E        |R        |T        |Y        |U     <5>|I     <6>|O        |P        |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |A / Ctrl |S        |D / L3   |F / L2   |G        |H        |J     <3>|K     <4>|L        |: / Ctrl |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Z / Shft |X / Alt  |C / Win  |V / L1   |B        |N        |M / L1   |, / Win  |. / Alt  |/ / Shft |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//    Combos:<1> Esc, <2> `, <3> Space, <4> Enter, <5> BS, <6> Del
//
//  L1
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |F1       |F2       |F3       |F4       |F5       |F6       |F7       |F8       |F9       |F10      |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |1 / Ctrl |2        |3        |4        |5        |6        |7        |8        |9        |0 / Ctrl |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |F11/ Sfft|F12/ Alt |` / Win  |-        |=        |'        |[        |] / Win  |\ / Alt  |App/ Shft|
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//
//  L2
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Esc      |Vol-     |Vol+     |Mute     |Pause    |XXXXXX   |PageUp   |Up       |PageDw   |Del      |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Tab/ Ctrl|XXXXXX   |XXXXXX   |         |         |Home     |Left     |Down     |Right    |Ctrl     |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Shft     |Alt      |Win      |         |         |End      |         |Win      |App/ Alt |Shft     |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//
//  L3
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Esc      |         |         |         |Pause    |Esc      |`        |-        |=        |BS       |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Ctrl     |XXXXXX   |XXXXXX   |         |         |Conv     |Space    |NoConv   |Ins      |Enter    |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
//  |Shft     |Alt      |Win      |         |CapsLock |PrSc     |ScLk     |Win      |Alt      |Shft     |
//  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  //               V              V              V              V              V              V              V              V              V              V
  //          1         2         3         4         5         6         7         8         9         A         B         C         D         E         F
  // 123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
  [0] = LAYOUT_ortho_3x10(
      KC_Q         , KC_W         , KC_E         , KC_R         , KC_T         , KC_Y         , KC_U         , KC_I         , KC_O         , KC_P         ,
      KC_LC_A      , KC_S         , KC_L3_D      , KC_L2_F      , KC_G         , KC_H         , KC_J         , KC_K         , KC_L         , KC_RC_CL     ,
      KC_LS_Z      , KC_LA_X      , KC_LG_C      , KC_L1_V      , KC_B         , KC_N         , KC_L1_M      , KC_RG_CM     , KC_RA_DT     , KC_RS_SL
  ),
  [1] = LAYOUT_ortho_3x10(
      KC_F1        , KC_F2        , KC_F3        , KC_F4        , KC_F5        , KC_F6        , KC_F7        , KC_F8        , KC_F9        , KC_F10       ,
      KC_LC_1      , KC_2         , KC_3         , KC_4         , KC_5         , KC_6         , KC_7         , KC_8         , KC_9         , KC_RC_0      ,
      KC_LS_F11    , KC_LA_F12    , KC_LG_GRV    , KC_MINS      , KC_EQL       , KC_QUOT      , KC_LBRC      , KC_RG_RBR    , KC_RA_BSL    , KC_RS_AP
  ),
  [2] = LAYOUT_ortho_3x10(
      KC_ESC       , KC_VOLD      , KC_VOLU      , KC_MUTE      , KC_PAUS      , XXXXXXX      , KC_PGUP      , KC_UP        , KC_PGDN      , KC_DEL       ,
      KC_LC_TAB    , XXXXXXX      , XXXXXXX      , _______      , _______      , KC_HOME      , KC_LEFT      , KC_DOWN      , KC_RGHT      , KC_RCTL      ,
      KC_LSFT      , KC_LALT      , KC_LGUI      , _______      , _______      , KC_END       , _______      , KC_RGUI      , KC_RA_AP     , KC_RSFT
  ),
  [3] = LAYOUT_ortho_3x10(
      KC_ESC       , _______      , _______      , _______      , KC_PAUS      , KC_ESC       , KC_GRV       , KC_MINS      , KC_EQL       , KC_BSPC      ,
      KC_LCTL      , XXXXXXX      , XXXXXXX      , _______      , _______      , KC_HENK      , KC_SPC       , KC_MHEN      , KC_INS       , KC_ENT       ,
      KC_LSFT      , KC_LALT      , KC_LGUI      , _______      , KC_CAPS      , KC_PSCR      , KC_SCRL      , KC_RGUI      , KC_RALT      , KC_RSFT
  ),
};

static const uint16_t keymaps_s[][MATRIX_ROWS][MATRIX_COLS] = {
  //               V              V              V              V              V              V              V              V              V              V
  //          1         2         3         4         5         6         7         8         9         A         B         C         D         E         F
  // 123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
  [0] = LAYOUT_ortho_3x10(
      KC_Q         , KC_W         , KC_E         , KC_R         , KC_T         , KC_Y         , KC_U         , KC_I         , KC_O         , KC_P         ,
      KC_LC_A      , KC_S         , KC_L3_D      , KC_L2_F      , KC_G         , KC_H         , KC_J         , KC_K         , KC_L         , KC_RC_CL     ,
      KC_LS_Z      , KC_LA_X      , KC_LG_C      , KC_L1_V      , KC_B         , KC_N         , KC_L1_M      , KC_RG_CM     , KC_RA_DT     , KC_RS_SL
  ),
  [1] = LAYOUT_ortho_3x10(
      KC_F1        , KC_F2        , KC_F3        , KC_F4        , KC_F5        , KC_F6        , KC_F7        , KC_F8        , KC_F9        , KC_F10       ,
      KC_LC_1      , KC_2         , KC_3         , KC_4         , KC_5         , KC_6         , KC_7         , KC_8         , KC_9         , KC_RC_0      ,
      KC_LS_F11    , KC_LA_F12    , KC_LG_GRV    , KC_MINS      , KC_EQL       , KC_QUOT      , KC_LBRC      , KC_RG_RBR    , KC_RA_BSL    , KC_RS_AP
  ),
  [2] = LAYOUT_ortho_3x10(
      KC_ESC       , KC_VOLD      , KC_VOLU      , KC_MUTE      , KC_PAUS      , XXXXXXX      , KC_PGUP      , KC_UP        , KC_PGDN      , KC_DEL       ,
      KC_LC_TAB    , XXXXXXX      , XXXXXXX      , _______      , _______      , KC_HOME      , KC_LEFT      , KC_DOWN      , KC_RGHT      , KC_RCTL      ,
      KC_LSFT      , KC_LALT      , KC_LGUI      , _______      , _______      , KC_END       , _______      , KC_RGUI      , KC_RA_AP     , KC_RSFT
  ),
  [3] = LAYOUT_ortho_3x10(
      KC_ESC       , _______      , _______      , _______      , KC_PAUS      , KC_ESC       , KC_GRV       , KC_MINS      , KC_EQL       , KC_BSPC      ,
      KC_LCTL      , XXXXXXX      , XXXXXXX      , _______      , _______      , KC_HENK      , KC_SPC       , KC_MHEN      , KC_INS       , KC_ENT       ,
      KC_LSFT      , KC_LALT      , KC_LGUI      , _______      , KC_CAPS      , KC_PSCR      , KC_SCRL      , KC_RGUI      , KC_RALT      , KC_RSFT
  ),
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
  QP_TGL,

  FD_SPC,
  DS_ENT,
  VC_BSPC,
  CX_DEL,
  qd_ESC,
  dp_GRV,
  Zq_TGL,
};

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM qp_combo[] = {KC_Q, KC_P, COMBO_END};

const uint16_t PROGMEM fd_combo[] = {KC_L2_F , KC_L3_D , COMBO_END};
const uint16_t PROGMEM ds_combo[] = {KC_L3_D , KC_S    , COMBO_END};
const uint16_t PROGMEM vc_combo[] = {KC_L1_V , KC_LG_C , COMBO_END};
const uint16_t PROGMEM cx_combo[] = {KC_LG_C , KC_LA_X , COMBO_END};
const uint16_t PROGMEM qd_combo[] = {KC_RS_SL, KC_RA_DT, COMBO_END};
const uint16_t PROGMEM dp_combo[] = {KC_RA_DT, KC_RG_CM, COMBO_END};
const uint16_t PROGMEM zq_combo[] = {KC_LS_Z , KC_RS_SL, COMBO_END};

combo_t key_combos[] = {
  [JK_SPC ] = COMBO(jk_combo, KC_SPC ),
  [KL_ENT ] = COMBO(kl_combo, KC_ENT ),
  [UI_BSPC] = COMBO(ui_combo, KC_BSPC),
  [IO_DEL ] = COMBO(io_combo, KC_DEL ),
  [QW_ESC ] = COMBO(qw_combo, KC_ESC ),
  [WE_GRV ] = COMBO(we_combo, KC_GRV ),
  [QP_TGL ] = COMBO(qp_combo, KC_REVS),

  [FD_SPC ] = COMBO(fd_combo, KC_SPC ),
  [DS_ENT ] = COMBO(ds_combo, KC_ENT ),
  [VC_BSPC] = COMBO(vc_combo, KC_BSPC),
  [CX_DEL ] = COMBO(cx_combo, KC_DEL ),
  [qd_ESC ] = COMBO(qd_combo, KC_ESC ),
  [dp_GRV ] = COMBO(dp_combo, KC_GRV ),
  [Zq_TGL ] = COMBO(zq_combo, KC_REVS)
};


// =================================================================================
// rolling press to hold
// =================================================================================
#define TAP_REPEAT_TERM 300
static uint16_t keycode_last_tap = 0;
static uint16_t time_last_tap    = 0;

#define ROLLING_TO_MOD_TIMEOUT 27 // wait time for pending rolling to mod.(ms)
#define PENDING_TAP_CAPACITY 4

static bool reversed_keymap = false;

static uint8_t pressed_key_count = 0;

// Tapを保留するための情報構造体
typedef struct {
    uint8_t  slot_id;                    // このスロットの識別番号
    bool     is_active;                  // このスロットが使用中か
    bool     is_pending;                 // tap-pressが保留中か
    bool     is_key_repeat;              // hold時、keyrepeatと判定すべきか
    uint16_t keycode;                    // 元のキーコード
    uint8_t  krow;                       // キーの行
    uint8_t  kcol;                       // キーの列
    uint16_t keycode_registerd;          // register時のキーコード
    uint16_t pressed_time;               // このキーが押された時刻
    uint16_t release_time;               // このキーが離された時刻
    deferred_token tapping_pending_token; // TAPPING_TERMの遅延トークン Mod-tapキー以外では常に0
    deferred_token rolling_pending_token; // ROLLING_TO_MOD_TIMEOUTの遅延トークン Mod-tapキー以外では常に0
} pending_tap_t;

static pending_tap_t pending_taps[PENDING_TAP_CAPACITY];

void keyboard_post_init_user(void) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        pending_taps[i].slot_id               = i;
        pending_taps[i].is_active             = false;
        pending_taps[i].is_pending            = false;
        pending_taps[i].is_key_repeat         = false;
        pending_taps[i].keycode               = 0;
        pending_taps[i].krow                  = 0;
        pending_taps[i].kcol                  = 0;
        pending_taps[i].keycode_registerd     = 0;
        pending_taps[i].pressed_time          = 0;
        pending_taps[i].release_time          = 0;
        pending_taps[i].tapping_pending_token = 0;
        pending_taps[i].rolling_pending_token = 0;
    }
}

uint16_t to_current_layer_keycode(uint8_t slot) {
    uint8_t l = get_highest_layer(layer_state);
    uint8_t r = pending_taps[slot].krow;
    uint8_t c = pending_taps[slot].kcol;
    uint16_t k = keymaps_s[l][r][c];
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("    currentLayer: %u  [%u][%u] -> %s\n", l, r, c, get_keycode_str(k));
#endif // KEYMAP_INTROSPECTION_ENABLE
    return k;
}


uint8_t add_pressed_key(uint16_t keycode, uint8_t row, uint8_t col, bool key_repeat) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) {
            pending_taps[i].is_active             = true;
            pending_taps[i].is_pending            = true;
            pending_taps[i].is_key_repeat         = key_repeat;
            pending_taps[i].keycode               = keycode;
            pending_taps[i].krow                  = row;
            pending_taps[i].kcol                  = col;
            pending_taps[i].keycode_registerd     = 0;
            pending_taps[i].pressed_time          = timer_read();
            pending_taps[i].release_time          = 0;
            pending_taps[i].tapping_pending_token = 0;
            pending_taps[i].rolling_pending_token = 0;
            return i;
        }
    }
    return PENDING_TAP_CAPACITY + 1;
}
uint16_t remove_pressed_key(uint8_t row, uint8_t col, bool *existYounger) {
    uint8_t i;
    uint16_t t;
    *existYounger = false;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].krow != row || pending_taps[i].kcol != col) continue;
        pending_taps[i].release_time = timer_read();
        t = pending_taps[i].pressed_time;
        break;
    }
    if (i >= PENDING_TAP_CAPACITY) return i + 1;

    for (uint8_t j = 0; j < PENDING_TAP_CAPACITY; j++) {
        if (!pending_taps[j].is_active || i == j) continue;
        if (pending_taps[j].pressed_time > t) {
            *existYounger = true;
            break;
        }
    }
    return i;
}
bool exist_pending_key(void) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].is_active && pending_taps[i].is_pending) return true;
    }
    return false;
}

// =================================================================================
void tap_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  tap_code_print: %s\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    tap_code(keycode);
}
void register_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  register_code_print: %s\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    register_code(keycode);
}
void unregister_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  unregister_code_print: %s\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    unregister_code(keycode);
}
void layer_on_print(int16_t layer) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  layer_on_print: 0x%04X\n", layer);
#endif // KEYMAP_INTROSPECTION_ENABLE
    layer_on(layer);
}
void layer_off_print(int16_t layer) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  layer_off_print: 0x%04X\n", layer);
#endif // KEYMAP_INTROSPECTION_ENABLE
    layer_off(layer);
}

void register_keycode_of_slot(uint8_t slot) {
    uint16_t mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
    uint8_t  layer_no = tap_hold_get_hold_layer  (pending_taps[slot].keycode);
    if      (mod_key  != 0) register_code_print(mod_key );
    else if (layer_no != 0) layer_on_print     (layer_no);
}
void unregister_keycode_of_slot(uint8_t slot) {
    uint16_t mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
    uint8_t  layer_no = tap_hold_get_hold_layer  (pending_taps[slot].keycode);
    if      (mod_key  != 0) unregister_code_print(mod_key );
    else if (layer_no != 0) layer_off_print      (layer_no);
}

// =================================================================================
void resolve_pending_normal_keys_if_no_mod_pending(void) {
    uint8_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_pending || !pending_taps[i].is_active) continue;
        if (pending_taps[i].tapping_pending_token != 0 || pending_taps[i].rolling_pending_token != 0) {
            return;
        }
    }

    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) continue;
        if (pending_taps[i].is_pending) {
            uint16_t k = to_current_layer_keycode(i);
            register_code_print(k);
            pending_taps[i].is_pending = false;
            pending_taps[i].keycode_registerd = k;
        }
    }
}

uint32_t delayed_key_tap_callback(uint32_t trigger_time, void *cb_arg) {
    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  * delayed_key_tap_callback: %s\n", get_keycode_str(pending_taps[slot].keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE

    pending_taps[slot].is_pending   = false;
    pending_taps[slot].tapping_pending_token = 0;
    pending_taps[slot].rolling_pending_token = 0;

    if (pending_taps[slot].is_key_repeat) {
        uint16_t k  = to_current_layer_keycode(slot);
        uint16_t k2 = tap_hold_get_tap_keycode(k);
        register_code_print(k2);
        pending_taps[slot].keycode_registerd = k2;
    } else {
        register_keycode_of_slot(slot);
    }

    resolve_pending_normal_keys_if_no_mod_pending();
    return 0; // always don't recall.
}

uint32_t delayed_key_rolling_callback(uint32_t trigger_time, void *cb_arg) {
    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  ** delayed_key_rolling_callback: %s\n", get_keycode_str(pending_taps[slot].keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE

    pending_taps[slot].is_active   = false;
    pending_taps[slot].is_pending  = false;
    pending_taps[slot].rolling_pending_token = 0;
    tap_code_print(tap_hold_get_tap_keycode(pending_taps[slot].keycode));

    resolve_pending_normal_keys_if_no_mod_pending();
    return 0; // always don't recall.
}

// =================================================================================
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t i;
    if (!record->event.pressed) keycode_last_tap = 0;

    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    if (row == 0 && col == 0 && keymaps_s[get_highest_layer(layer_state)][row][col] != keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
// ============================================================================================//
        if (record->event.pressed) uprintf("Combo Press  : %s\n", get_keycode_str(keycode));   //
        else                       uprintf("Combo Release: %s\n", get_keycode_str(keycode));   //
// ============================================================================================//
#endif // KEYMAP_INTROSPECTION_ENABLE
        if (keycode == KC_REVS && !record->event.pressed) {
            reversed_keymap = !reversed_keymap;
        }
        return true;
    }

    if (reversed_keymap) {
        row = MATRIX_ROWS - row - 1;
        col = MATRIX_COLS - col - 1;
        keycode = keymaps_s[get_highest_layer(layer_state)][row][col];

        record->event.key.row = row;
        record->event.key.col = col;
        record->keycode       = keycode;
    }

    if (pressed_key_count == 0) print("---\n");
    if      (record->event.pressed) pressed_key_count++;
    else if (pressed_key_count > 0) pressed_key_count--;

#ifdef KEYMAP_INTROSPECTION_ENABLE
// ========================================================================================================//
    if (record->event.pressed) uprintf("Key Press  : %s[%u][%u]\n", get_keycode_str(keycode), row, col);   //
    else                       uprintf("Key Release: %s[%u][%u]\n", get_keycode_str(keycode), row, col);   //
// ========================================================================================================//
#endif // KEYMAP_INTROSPECTION_ENABLE

    bool is_mod_tap_key = (tap_hold_get_tap_keycode(keycode) != keycode);
    if (!is_mod_tap_key && record->event.pressed && !exist_pending_key()) return true;

    // key repeat by double tap.
    bool is_key_repeat = false;
    if (record->event.pressed && is_mod_tap_key && timer_elapsed(time_last_tap) < TAP_REPEAT_TERM) {
        if (tap_hold_get_tap_keycode(keycode) == keycode_last_tap) {
            is_key_repeat = true;
#ifdef KEYMAP_INTROSPECTION_ENABLE
            print(" key repeat by double tap.\n");
#endif // KEYMAP_INTROSPECTION_ENABLE
        }
    }

    uint8_t slot = 0;
    bool existYounger = false;
    if (record->event.pressed) {
        slot = add_pressed_key(keycode, row, col, is_key_repeat);
    } else {
        slot = remove_pressed_key(row, col, &existYounger);
    }
    if (!is_mod_tap_key && slot >= PENDING_TAP_CAPACITY) return true; // スロットに未登録のキー

#ifdef KEYMAP_INTROSPECTION_ENABLE
    xprintf(" <pressed_key_count: %u> slot:%u\n", pressed_key_count, slot);
#endif // KEYMAP_INTROSPECTION_ENABLE

    if (slot >= PENDING_TAP_CAPACITY) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
        xprintf(" ### ACTIVE SLOT COUNT OVER %u ###\n", PENDING_TAP_CAPACITY);
#endif // KEYMAP_INTROSPECTION_ENABLE
        return true;
    }
    if (record->event.pressed && reversed_keymap) { // 押下時のレイヤーに基づくキーコードを再現
        keycode = pending_taps[slot].keycode;
        record->keycode = keycode;
    }

    // ------------------------------------------------------------------------------------------------------------------
    if (record->event.pressed) {
        if (is_mod_tap_key) {
            pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
        }
        return false;
    } else {
        if (!is_mod_tap_key) pending_taps[slot].is_active = false;

        if (!pending_taps[slot].is_pending) { // 保留解決済キーのリリース時
            if (is_mod_tap_key) { // tapping term以上押されたmod-tapキーが離された時
                for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
                    if (i == slot || !pending_taps[i].is_active) continue;
                    if (pending_taps[i].tapping_pending_token != 0                           // mod-tapキーで、
                     && pending_taps[i].pressed_time > pending_taps[slot].pressed_time       // このキーより後に押され、
                     && timer_elapsed(pending_taps[i].pressed_time) > ROLLING_TO_MOD_TIMEOUT // ROLLING_TO_MOD_TIMEOUT以上共存したキーはtap扱いとする
                        ) {
                        cancel_deferred_exec(pending_taps[i].tapping_pending_token);
                        pending_taps[i].tapping_pending_token = 0;

                        uint16_t k  = to_current_layer_keycode(i);
                        uint16_t k2 = tap_hold_get_tap_keycode(k);
                        register_code_print(k2);
                        pending_taps[i].is_pending = false;
                        pending_taps[i].keycode_registerd = k2;
                    }
                }

                if (pending_taps[slot].keycode_registerd == 0) unregister_keycode_of_slot(slot);
            }

            pending_taps[slot].is_active = false;

            if (pending_taps[slot].keycode_registerd != 0) {
                unregister_code_print(pending_taps[slot].keycode_registerd);
#ifdef KEYMAP_INTROSPECTION_ENABLE
                print("    !is_pending -> return false;\n");
#endif // KEYMAP_INTROSPECTION_ENABLE
                return false;
            } else {
#ifdef KEYMAP_INTROSPECTION_ENABLE
                print("    !is_pending -> return true;\n");
#endif // KEYMAP_INTROSPECTION_ENABLE
                return true;
            }
        } else { // 保留中キーのリリース時
            if (pending_taps[slot].tapping_pending_token != 0) {
                cancel_deferred_exec(pending_taps[slot].tapping_pending_token);
                pending_taps[slot].tapping_pending_token = 0;

                if (existYounger) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
                    print("     existYounger, start rolling pending.\n");
#endif // KEYMAP_INTROSPECTION_ENABLE
                    pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
                    return false;
                }
            }

            pending_taps[slot].is_pending = false;
            pending_taps[slot].is_active  = false;

            // 自分よりpressの古いmod-tapキー、あるいは30ms以内に離された保留中のmod-tapキーがあれば、それをMod扱いとする
            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active || !pending_taps[i].is_pending) continue;
                if (pending_taps[i].tapping_pending_token == 0 && pending_taps[i].rolling_pending_token == 0) continue;
                if (pending_taps[i].rolling_pending_token != 0 && pending_taps[i].release_time < pending_taps[slot].pressed_time) continue;

                if (pending_taps[i].pressed_time < pending_taps[slot].pressed_time || pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_pending = false;
                    register_keycode_of_slot(i);
                }
            }

            uint16_t sendKeycode = tap_hold_get_tap_keycode(to_current_layer_keycode(slot));
            tap_code_print(sendKeycode);
            keycode_last_tap = sendKeycode;
            time_last_tap    = timer_read();

            // Mod扱いしたキーのリリースを再現
            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active) continue;
                if (pending_taps[i].tapping_pending_token == 0 && pending_taps[i].rolling_pending_token == 0) continue;
                if (pending_taps[i].rolling_pending_token != 0 && pending_taps[i].release_time < pending_taps[slot].pressed_time) continue;

                if (pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_active = false;
                    unregister_keycode_of_slot(i);

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


