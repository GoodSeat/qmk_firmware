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

#ifdef KEYMAP_INTROSPECTION_ENABLE

const char* get_keycode_str(uint16_t keycode) {
    static char keycode_str[16];

    switch (keycode) {
    case KC_NO: sprintf(keycode_str, "KC_NO"); break;
    case KC_TRANSPARENT: sprintf(keycode_str, "KC_TRANSPARENT"); break;
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
    case KC_ENTER: sprintf(keycode_str, "KC_ENTER"); break;
    case KC_ESCAPE: sprintf(keycode_str, "KC_ESCAPE"); break;
    case KC_BACKSPACE: sprintf(keycode_str, "KC_BACKSPACE"); break;
    case KC_TAB: sprintf(keycode_str, "KC_TAB"); break;
    case KC_SPACE: sprintf(keycode_str, "KC_SPACE"); break;
    case KC_MINUS: sprintf(keycode_str, "KC_MINUS"); break;
    case KC_EQUAL: sprintf(keycode_str, "KC_EQUAL"); break;
    case KC_LEFT_BRACKET: sprintf(keycode_str, "KC_LEFT_BRACKET"); break;
    case KC_RIGHT_BRACKET: sprintf(keycode_str, "KC_RIGHT_BRACKET"); break;
    case KC_BACKSLASH: sprintf(keycode_str, "KC_BACKSLASH"); break;
    case KC_NONUS_HASH: sprintf(keycode_str, "KC_NONUS_HASH"); break;
    case KC_SEMICOLON: sprintf(keycode_str, "KC_SEMICOLON"); break;
    case KC_QUOTE: sprintf(keycode_str, "KC_QUOTE"); break;
    case KC_GRAVE: sprintf(keycode_str, "KC_GRAVE"); break;
    case KC_COMMA: sprintf(keycode_str, "KC_COMMA"); break;
    case KC_DOT: sprintf(keycode_str, "KC_DOT"); break;
    case KC_SLASH: sprintf(keycode_str, "KC_SLASH"); break;
    case KC_CAPS_LOCK: sprintf(keycode_str, "KC_CAPS_LOCK"); break;
    case KC_F1: sprintf(keycode_str, "KC_F1"); break;
    case KC_F2: sprintf(keycode_str, "KC_F2"); break;
    case KC_F3: sprintf(keycode_str, "KC_F3"); break;
    case KC_F4: sprintf(keycode_str, "KC_F4"); break;
    case KC_F5: sprintf(keycode_str, "KC_F5"); break;
    case KC_F6: sprintf(keycode_str, "KC_F6"); break;
    case KC_F7: sprintf(keycode_str, "KC_F7"); break;
    case KC_F8: sprintf(keycode_str, "KC_F8"); break;
    case KC_F9: sprintf(keycode_str, "KC_F9"); break;
    case KC_F10: sprintf(keycode_str, "KC_F10"); break;
    case KC_F11: sprintf(keycode_str, "KC_F11"); break;
    case KC_F12: sprintf(keycode_str, "KC_F12"); break;
    case KC_PRINT_SCREEN: sprintf(keycode_str, "KC_PRINT_SCREEN"); break;
    case KC_SCROLL_LOCK: sprintf(keycode_str, "KC_SCROLL_LOCK"); break;
    case KC_PAUSE: sprintf(keycode_str, "KC_PAUSE"); break;
    case KC_INSERT: sprintf(keycode_str, "KC_INSERT"); break;
    case KC_HOME: sprintf(keycode_str, "KC_HOME"); break;
    case KC_PAGE_UP: sprintf(keycode_str, "KC_PAGE_UP"); break;
    case KC_DELETE: sprintf(keycode_str, "KC_DELETE"); break;
    case KC_END: sprintf(keycode_str, "KC_END"); break;
    case KC_PAGE_DOWN: sprintf(keycode_str, "KC_PAGE_DOWN"); break;
    case KC_RIGHT: sprintf(keycode_str, "KC_RIGHT"); break;
    case KC_LEFT: sprintf(keycode_str, "KC_LEFT"); break;
    case KC_DOWN: sprintf(keycode_str, "KC_DOWN"); break;
    case KC_UP: sprintf(keycode_str, "KC_UP"); break;
    case KC_NUM_LOCK: sprintf(keycode_str, "KC_NUM_LOCK"); break;
    case KC_KP_SLASH: sprintf(keycode_str, "KC_KP_SLASH"); break;
    case KC_KP_ASTERISK: sprintf(keycode_str, "KC_KP_ASTERISK"); break;
    case KC_KP_MINUS: sprintf(keycode_str, "KC_KP_MINUS"); break;
    case KC_KP_PLUS: sprintf(keycode_str, "KC_KP_PLUS"); break;
    case KC_KP_ENTER: sprintf(keycode_str, "KC_KP_ENTER"); break;

    case KC_LEFT_CTRL: sprintf(keycode_str, "KC_LEFT_CTRL"); break;
    case KC_LEFT_SHIFT: sprintf(keycode_str, "KC_LEFT_SHIFT"); break;
    case KC_LEFT_ALT: sprintf(keycode_str, "KC_LEFT_ALT"); break;
    case KC_LEFT_GUI: sprintf(keycode_str, "KC_LEFT_GUI"); break;
    case KC_RIGHT_CTRL: sprintf(keycode_str, "KC_RIGHT_CTRL"); break;
    case KC_RIGHT_SHIFT: sprintf(keycode_str, "KC_RIGHT_SHIFT"); break;
    case KC_RIGHT_ALT: sprintf(keycode_str, "KC_RIGHT_ALT"); break;
    case KC_RIGHT_GUI: sprintf(keycode_str, "KC_RIGHT_GUI"); break;

     /*
    case KC_KP_1: sprintf(keycode_str, "KC_KP_1"); break;
    case KC_KP_2: sprintf(keycode_str, "KC_KP_2"); break;
    case KC_KP_3: sprintf(keycode_str, "KC_KP_3"); break;
    case KC_KP_4: sprintf(keycode_str, "KC_KP_4"); break;
    case KC_KP_5: sprintf(keycode_str, "KC_KP_5"); break;
    case KC_KP_6: sprintf(keycode_str, "KC_KP_6"); break;
    case KC_KP_7: sprintf(keycode_str, "KC_KP_7"); break;
    case KC_KP_8: sprintf(keycode_str, "KC_KP_8"); break;
    case KC_KP_9: sprintf(keycode_str, "KC_KP_9"); break;
    case KC_KP_0: sprintf(keycode_str, "KC_KP_0"); break;
    case KC_KP_DOT: sprintf(keycode_str, "KC_KP_DOT"); break;
    case KC_NONUS_BACKSLASH: sprintf(keycode_str, "KC_NONUS_BACKSLASH"); break;
    case KC_APPLICATION: sprintf(keycode_str, "KC_APPLICATION"); break;
    case KC_KB_POWER: sprintf(keycode_str, "KC_KB_POWER"); break;
    case KC_KP_EQUAL: sprintf(keycode_str, "KC_KP_EQUAL"); break;
    case KC_F13: sprintf(keycode_str, "KC_F13"); break;
    case KC_F14: sprintf(keycode_str, "KC_F14"); break;
    case KC_F15: sprintf(keycode_str, "KC_F15"); break;
    case KC_F16: sprintf(keycode_str, "KC_F16"); break;
    case KC_F17: sprintf(keycode_str, "KC_F17"); break;
    case KC_F18: sprintf(keycode_str, "KC_F18"); break;
    case KC_F19: sprintf(keycode_str, "KC_F19"); break;
    case KC_F20: sprintf(keycode_str, "KC_F20"); break;
    case KC_F21: sprintf(keycode_str, "KC_F21"); break;
    case KC_F22: sprintf(keycode_str, "KC_F22"); break;
    case KC_F23: sprintf(keycode_str, "KC_F23"); break;
    case KC_F24: sprintf(keycode_str, "KC_F24"); break;
    case KC_EXECUTE: sprintf(keycode_str, "KC_EXECUTE"); break;
    case KC_HELP: sprintf(keycode_str, "KC_HELP"); break;
    case KC_MENU: sprintf(keycode_str, "KC_MENU"); break;
    case KC_SELECT: sprintf(keycode_str, "KC_SELECT"); break;
    case KC_STOP: sprintf(keycode_str, "KC_STOP"); break;
    case KC_AGAIN: sprintf(keycode_str, "KC_AGAIN"); break;
    case KC_UNDO: sprintf(keycode_str, "KC_UNDO"); break;
    case KC_CUT: sprintf(keycode_str, "KC_CUT"); break;
    case KC_COPY: sprintf(keycode_str, "KC_COPY"); break;
    case KC_PASTE: sprintf(keycode_str, "KC_PASTE"); break;
    case KC_FIND: sprintf(keycode_str, "KC_FIND"); break;
    case KC_KB_MUTE: sprintf(keycode_str, "KC_KB_MUTE"); break;
    case KC_KB_VOLUME_UP: sprintf(keycode_str, "KC_KB_VOLUME_UP"); break;
    case KC_KB_VOLUME_DOWN: sprintf(keycode_str, "KC_KB_VOLUME_DOWN"); break;
    case KC_LOCKING_CAPS_LOCK: sprintf(keycode_str, "KC_LOCKING_CAPS_LOCK"); break;
    case KC_LOCKING_NUM_LOCK: sprintf(keycode_str, "KC_LOCKING_NUM_LOCK"); break;
    case KC_LOCKING_SCROLL_LOCK: sprintf(keycode_str, "KC_LOCKING_SCROLL_LOCK"); break;
    case KC_KP_COMMA: sprintf(keycode_str, "KC_KP_COMMA"); break;
    case KC_KP_EQUAL_AS400: sprintf(keycode_str, "KC_KP_EQUAL_AS400"); break;
    case KC_INTERNATIONAL_1: sprintf(keycode_str, "KC_INTERNATIONAL_1"); break;
    case KC_INTERNATIONAL_2: sprintf(keycode_str, "KC_INTERNATIONAL_2"); break;
    case KC_INTERNATIONAL_3: sprintf(keycode_str, "KC_INTERNATIONAL_3"); break;
    case KC_INTERNATIONAL_4: sprintf(keycode_str, "KC_INTERNATIONAL_4"); break;
    case KC_INTERNATIONAL_5: sprintf(keycode_str, "KC_INTERNATIONAL_5"); break;
    case KC_INTERNATIONAL_6: sprintf(keycode_str, "KC_INTERNATIONAL_6"); break;
    case KC_INTERNATIONAL_7: sprintf(keycode_str, "KC_INTERNATIONAL_7"); break;
    case KC_INTERNATIONAL_8: sprintf(keycode_str, "KC_INTERNATIONAL_8"); break;
    case KC_INTERNATIONAL_9: sprintf(keycode_str, "KC_INTERNATIONAL_9"); break;
    case KC_LANGUAGE_1: sprintf(keycode_str, "KC_LANGUAGE_1"); break;
    case KC_LANGUAGE_2: sprintf(keycode_str, "KC_LANGUAGE_2"); break;
    case KC_LANGUAGE_3: sprintf(keycode_str, "KC_LANGUAGE_3"); break;
    case KC_LANGUAGE_4: sprintf(keycode_str, "KC_LANGUAGE_4"); break;
    case KC_LANGUAGE_5: sprintf(keycode_str, "KC_LANGUAGE_5"); break;
    case KC_LANGUAGE_6: sprintf(keycode_str, "KC_LANGUAGE_6"); break;
    case KC_LANGUAGE_7: sprintf(keycode_str, "KC_LANGUAGE_7"); break;
    case KC_LANGUAGE_8: sprintf(keycode_str, "KC_LANGUAGE_8"); break;
    case KC_LANGUAGE_9: sprintf(keycode_str, "KC_LANGUAGE_9"); break;
    case KC_ALTERNATE_ERASE: sprintf(keycode_str, "KC_ALTERNATE_ERASE"); break;
    case KC_SYSTEM_REQUEST: sprintf(keycode_str, "KC_SYSTEM_REQUEST"); break;
    case KC_CANCEL: sprintf(keycode_str, "KC_CANCEL"); break;
    case KC_CLEAR: sprintf(keycode_str, "KC_CLEAR"); break;
    case KC_PRIOR: sprintf(keycode_str, "KC_PRIOR"); break;
    case KC_RETURN: sprintf(keycode_str, "KC_RETURN"); break;
    case KC_SEPARATOR: sprintf(keycode_str, "KC_SEPARATOR"); break;
    case KC_OUT: sprintf(keycode_str, "KC_OUT"); break;
    case KC_OPER: sprintf(keycode_str, "KC_OPER"); break;
    case KC_CLEAR_AGAIN: sprintf(keycode_str, "KC_CLEAR_AGAIN"); break;
    case KC_CRSEL: sprintf(keycode_str, "KC_CRSEL"); break;
    case KC_EXSEL: sprintf(keycode_str, "KC_EXSEL"); break;
    case KC_SYSTEM_POWER: sprintf(keycode_str, "KC_SYSTEM_POWER"); break;
    case KC_SYSTEM_SLEEP: sprintf(keycode_str, "KC_SYSTEM_SLEEP"); break;
    case KC_SYSTEM_WAKE: sprintf(keycode_str, "KC_SYSTEM_WAKE"); break;
    case KC_AUDIO_MUTE: sprintf(keycode_str, "KC_AUDIO_MUTE"); break;
    case KC_AUDIO_VOL_UP: sprintf(keycode_str, "KC_AUDIO_VOL_UP"); break;
    case KC_AUDIO_VOL_DOWN: sprintf(keycode_str, "KC_AUDIO_VOL_DOWN"); break;
    case KC_MEDIA_NEXT_TRACK: sprintf(keycode_str, "KC_MEDIA_NEXT_TRACK"); break;
    case KC_MEDIA_PREV_TRACK: sprintf(keycode_str, "KC_MEDIA_PREV_TRACK"); break;
    case KC_MEDIA_STOP: sprintf(keycode_str, "KC_MEDIA_STOP"); break;
    case KC_MEDIA_PLAY_PAUSE: sprintf(keycode_str, "KC_MEDIA_PLAY_PAUSE"); break;
    case KC_MEDIA_SELECT: sprintf(keycode_str, "KC_MEDIA_SELECT"); break;
    case KC_MEDIA_EJECT: sprintf(keycode_str, "KC_MEDIA_EJECT"); break;
    case KC_MAIL: sprintf(keycode_str, "KC_MAIL"); break;
    case KC_CALCULATOR: sprintf(keycode_str, "KC_CALCULATOR"); break;
    case KC_MY_COMPUTER: sprintf(keycode_str, "KC_MY_COMPUTER"); break;
    case KC_WWW_SEARCH: sprintf(keycode_str, "KC_WWW_SEARCH"); break;
    case KC_WWW_HOME: sprintf(keycode_str, "KC_WWW_HOME"); break;
    case KC_WWW_BACK: sprintf(keycode_str, "KC_WWW_BACK"); break;
    case KC_WWW_FORWARD: sprintf(keycode_str, "KC_WWW_FORWARD"); break;
    case KC_WWW_STOP: sprintf(keycode_str, "KC_WWW_STOP"); break;
    case KC_WWW_REFRESH: sprintf(keycode_str, "KC_WWW_REFRESH"); break;
    case KC_WWW_FAVORITES: sprintf(keycode_str, "KC_WWW_FAVORITES"); break;
    case KC_MEDIA_FAST_FORWARD: sprintf(keycode_str, "KC_MEDIA_FAST_FORWARD"); break;
    case KC_MEDIA_REWIND: sprintf(keycode_str, "KC_MEDIA_REWIND"); break;
    case KC_BRIGHTNESS_UP: sprintf(keycode_str, "KC_BRIGHTNESS_UP"); break;
    case KC_BRIGHTNESS_DOWN: sprintf(keycode_str, "KC_BRIGHTNESS_DOWN"); break;
    case KC_CONTROL_PANEL: sprintf(keycode_str, "KC_CONTROL_PANEL"); break;
    case KC_ASSISTANT: sprintf(keycode_str, "KC_ASSISTANT"); break;
    case KC_MISSION_CONTROL: sprintf(keycode_str, "KC_MISSION_CONTROL"); break;
    case KC_LAUNCHPAD: sprintf(keycode_str, "KC_LAUNCHPAD"); break;
    case QK_MOUSE_CURSOR_UP: sprintf(keycode_str, "QK_MOUSE_CURSOR_UP"); break;
    case QK_MOUSE_CURSOR_DOWN: sprintf(keycode_str, "QK_MOUSE_CURSOR_DOWN"); break;
    case QK_MOUSE_CURSOR_LEFT: sprintf(keycode_str, "QK_MOUSE_CURSOR_LEFT"); break;
    case QK_MOUSE_CURSOR_RIGHT: sprintf(keycode_str, "QK_MOUSE_CURSOR_RIGHT"); break;
    case QK_MOUSE_BUTTON_1: sprintf(keycode_str, "QK_MOUSE_BUTTON_1"); break;
    case QK_MOUSE_BUTTON_2: sprintf(keycode_str, "QK_MOUSE_BUTTON_2"); break;
    case QK_MOUSE_BUTTON_3: sprintf(keycode_str, "QK_MOUSE_BUTTON_3"); break;
    case QK_MOUSE_BUTTON_4: sprintf(keycode_str, "QK_MOUSE_BUTTON_4"); break;
    case QK_MOUSE_BUTTON_5: sprintf(keycode_str, "QK_MOUSE_BUTTON_5"); break;
    case QK_MOUSE_BUTTON_6: sprintf(keycode_str, "QK_MOUSE_BUTTON_6"); break;
    case QK_MOUSE_BUTTON_7: sprintf(keycode_str, "QK_MOUSE_BUTTON_7"); break;
    case QK_MOUSE_BUTTON_8: sprintf(keycode_str, "QK_MOUSE_BUTTON_8"); break;
    case QK_MOUSE_WHEEL_UP: sprintf(keycode_str, "QK_MOUSE_WHEEL_UP"); break;
    case QK_MOUSE_WHEEL_DOWN: sprintf(keycode_str, "QK_MOUSE_WHEEL_DOWN"); break;
    case QK_MOUSE_WHEEL_LEFT: sprintf(keycode_str, "QK_MOUSE_WHEEL_LEFT"); break;
    case QK_MOUSE_WHEEL_RIGHT: sprintf(keycode_str, "QK_MOUSE_WHEEL_RIGHT"); break;
    case QK_MOUSE_ACCELERATION_0: sprintf(keycode_str, "QK_MOUSE_ACCELERATION_0"); break;
    case QK_MOUSE_ACCELERATION_1: sprintf(keycode_str, "QK_MOUSE_ACCELERATION_1"); break;
    case QK_MOUSE_ACCELERATION_2: sprintf(keycode_str, "QK_MOUSE_ACCELERATION_2"); break;
    case QK_SWAP_HANDS_TOGGLE: sprintf(keycode_str, "QK_SWAP_HANDS_TOGGLE"); break;
    case QK_SWAP_HANDS_TAP_TOGGLE: sprintf(keycode_str, "QK_SWAP_HANDS_TAP_TOGGLE"); break;
    case QK_SWAP_HANDS_MOMENTARY_ON: sprintf(keycode_str, "QK_SWAP_HANDS_MOMENTARY_ON"); break;
    case QK_SWAP_HANDS_MOMENTARY_OFF: sprintf(keycode_str, "QK_SWAP_HANDS_MOMENTARY_OFF"); break;
    case QK_SWAP_HANDS_OFF: sprintf(keycode_str, "QK_SWAP_HANDS_OFF"); break;
    case QK_SWAP_HANDS_ON: sprintf(keycode_str, "QK_SWAP_HANDS_ON"); break;
    case QK_SWAP_HANDS_ONE_SHOT: sprintf(keycode_str, "QK_SWAP_HANDS_ONE_SHOT"); break;
    case QK_MAGIC_SWAP_CONTROL_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_SWAP_CONTROL_CAPS_LOCK"); break;
    case QK_MAGIC_UNSWAP_CONTROL_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_UNSWAP_CONTROL_CAPS_LOCK"); break;
    case QK_MAGIC_TOGGLE_CONTROL_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_TOGGLE_CONTROL_CAPS_LOCK"); break;
    case QK_MAGIC_CAPS_LOCK_AS_CONTROL_OFF: sprintf(keycode_str, "QK_MAGIC_CAPS_LOCK_AS_CONTROL_OFF"); break;
    case QK_MAGIC_CAPS_LOCK_AS_CONTROL_ON: sprintf(keycode_str, "QK_MAGIC_CAPS_LOCK_AS_CONTROL_ON"); break;
    case QK_MAGIC_SWAP_LALT_LGUI: sprintf(keycode_str, "QK_MAGIC_SWAP_LALT_LGUI"); break;
    case QK_MAGIC_UNSWAP_LALT_LGUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_LALT_LGUI"); break;
    case QK_MAGIC_SWAP_RALT_RGUI: sprintf(keycode_str, "QK_MAGIC_SWAP_RALT_RGUI"); break;
    case QK_MAGIC_UNSWAP_RALT_RGUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_RALT_RGUI"); break;
    case QK_MAGIC_GUI_ON: sprintf(keycode_str, "QK_MAGIC_GUI_ON"); break;
    case QK_MAGIC_GUI_OFF: sprintf(keycode_str, "QK_MAGIC_GUI_OFF"); break;
    case QK_MAGIC_TOGGLE_GUI: sprintf(keycode_str, "QK_MAGIC_TOGGLE_GUI"); break;
    case QK_MAGIC_SWAP_GRAVE_ESC: sprintf(keycode_str, "QK_MAGIC_SWAP_GRAVE_ESC"); break;
    case QK_MAGIC_UNSWAP_GRAVE_ESC: sprintf(keycode_str, "QK_MAGIC_UNSWAP_GRAVE_ESC"); break;
    case QK_MAGIC_SWAP_BACKSLASH_BACKSPACE: sprintf(keycode_str, "QK_MAGIC_SWAP_BACKSLASH_BACKSPACE"); break;
    case QK_MAGIC_UNSWAP_BACKSLASH_BACKSPACE: sprintf(keycode_str, "QK_MAGIC_UNSWAP_BACKSLASH_BACKSPACE"); break;
    case QK_MAGIC_TOGGLE_BACKSLASH_BACKSPACE: sprintf(keycode_str, "QK_MAGIC_TOGGLE_BACKSLASH_BACKSPACE"); break;
    case QK_MAGIC_NKRO_ON: sprintf(keycode_str, "QK_MAGIC_NKRO_ON"); break;
    case QK_MAGIC_NKRO_OFF: sprintf(keycode_str, "QK_MAGIC_NKRO_OFF"); break;
    case QK_MAGIC_TOGGLE_NKRO: sprintf(keycode_str, "QK_MAGIC_TOGGLE_NKRO"); break;
    case QK_MAGIC_SWAP_ALT_GUI: sprintf(keycode_str, "QK_MAGIC_SWAP_ALT_GUI"); break;
    case QK_MAGIC_UNSWAP_ALT_GUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_ALT_GUI"); break;
    case QK_MAGIC_TOGGLE_ALT_GUI: sprintf(keycode_str, "QK_MAGIC_TOGGLE_ALT_GUI"); break;
    case QK_MAGIC_SWAP_LCTL_LGUI: sprintf(keycode_str, "QK_MAGIC_SWAP_LCTL_LGUI"); break;
    case QK_MAGIC_UNSWAP_LCTL_LGUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_LCTL_LGUI"); break;
    case QK_MAGIC_SWAP_RCTL_RGUI: sprintf(keycode_str, "QK_MAGIC_SWAP_RCTL_RGUI"); break;
    case QK_MAGIC_UNSWAP_RCTL_RGUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_RCTL_RGUI"); break;
    case QK_MAGIC_SWAP_CTL_GUI: sprintf(keycode_str, "QK_MAGIC_SWAP_CTL_GUI"); break;
    case QK_MAGIC_UNSWAP_CTL_GUI: sprintf(keycode_str, "QK_MAGIC_UNSWAP_CTL_GUI"); break;
    case QK_MAGIC_TOGGLE_CTL_GUI: sprintf(keycode_str, "QK_MAGIC_TOGGLE_CTL_GUI"); break;
    case QK_MAGIC_EE_HANDS_LEFT: sprintf(keycode_str, "QK_MAGIC_EE_HANDS_LEFT"); break;
    case QK_MAGIC_EE_HANDS_RIGHT: sprintf(keycode_str, "QK_MAGIC_EE_HANDS_RIGHT"); break;
    case QK_MAGIC_SWAP_ESCAPE_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_SWAP_ESCAPE_CAPS_LOCK"); break;
    case QK_MAGIC_UNSWAP_ESCAPE_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_UNSWAP_ESCAPE_CAPS_LOCK"); break;
    case QK_MAGIC_TOGGLE_ESCAPE_CAPS_LOCK: sprintf(keycode_str, "QK_MAGIC_TOGGLE_ESCAPE_CAPS_LOCK"); break;
    case QK_MIDI_ON: sprintf(keycode_str, "QK_MIDI_ON"); break;
    case QK_MIDI_OFF: sprintf(keycode_str, "QK_MIDI_OFF"); break;
    case QK_MIDI_TOGGLE: sprintf(keycode_str, "QK_MIDI_TOGGLE"); break;
    case QK_MIDI_NOTE_C_0: sprintf(keycode_str, "QK_MIDI_NOTE_C_0"); break;
    case QK_MIDI_NOTE_C_SHARP_0: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_0"); break;
    case QK_MIDI_NOTE_D_0: sprintf(keycode_str, "QK_MIDI_NOTE_D_0"); break;
    case QK_MIDI_NOTE_D_SHARP_0: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_0"); break;
    case QK_MIDI_NOTE_E_0: sprintf(keycode_str, "QK_MIDI_NOTE_E_0"); break;
    case QK_MIDI_NOTE_F_0: sprintf(keycode_str, "QK_MIDI_NOTE_F_0"); break;
    case QK_MIDI_NOTE_F_SHARP_0: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_0"); break;
    case QK_MIDI_NOTE_G_0: sprintf(keycode_str, "QK_MIDI_NOTE_G_0"); break;
    case QK_MIDI_NOTE_G_SHARP_0: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_0"); break;
    case QK_MIDI_NOTE_A_0: sprintf(keycode_str, "QK_MIDI_NOTE_A_0"); break;
    case QK_MIDI_NOTE_A_SHARP_0: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_0"); break;
    case QK_MIDI_NOTE_B_0: sprintf(keycode_str, "QK_MIDI_NOTE_B_0"); break;
    case QK_MIDI_NOTE_C_1: sprintf(keycode_str, "QK_MIDI_NOTE_C_1"); break;
    case QK_MIDI_NOTE_C_SHARP_1: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_1"); break;
    case QK_MIDI_NOTE_D_1: sprintf(keycode_str, "QK_MIDI_NOTE_D_1"); break;
    case QK_MIDI_NOTE_D_SHARP_1: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_1"); break;
    case QK_MIDI_NOTE_E_1: sprintf(keycode_str, "QK_MIDI_NOTE_E_1"); break;
    case QK_MIDI_NOTE_F_1: sprintf(keycode_str, "QK_MIDI_NOTE_F_1"); break;
    case QK_MIDI_NOTE_F_SHARP_1: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_1"); break;
    case QK_MIDI_NOTE_G_1: sprintf(keycode_str, "QK_MIDI_NOTE_G_1"); break;
    case QK_MIDI_NOTE_G_SHARP_1: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_1"); break;
    case QK_MIDI_NOTE_A_1: sprintf(keycode_str, "QK_MIDI_NOTE_A_1"); break;
    case QK_MIDI_NOTE_A_SHARP_1: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_1"); break;
    case QK_MIDI_NOTE_B_1: sprintf(keycode_str, "QK_MIDI_NOTE_B_1"); break;
    case QK_MIDI_NOTE_C_2: sprintf(keycode_str, "QK_MIDI_NOTE_C_2"); break;
    case QK_MIDI_NOTE_C_SHARP_2: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_2"); break;
    case QK_MIDI_NOTE_D_2: sprintf(keycode_str, "QK_MIDI_NOTE_D_2"); break;
    case QK_MIDI_NOTE_D_SHARP_2: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_2"); break;
    case QK_MIDI_NOTE_E_2: sprintf(keycode_str, "QK_MIDI_NOTE_E_2"); break;
    case QK_MIDI_NOTE_F_2: sprintf(keycode_str, "QK_MIDI_NOTE_F_2"); break;
    case QK_MIDI_NOTE_F_SHARP_2: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_2"); break;
    case QK_MIDI_NOTE_G_2: sprintf(keycode_str, "QK_MIDI_NOTE_G_2"); break;
    case QK_MIDI_NOTE_G_SHARP_2: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_2"); break;
    case QK_MIDI_NOTE_A_2: sprintf(keycode_str, "QK_MIDI_NOTE_A_2"); break;
    case QK_MIDI_NOTE_A_SHARP_2: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_2"); break;
    case QK_MIDI_NOTE_B_2: sprintf(keycode_str, "QK_MIDI_NOTE_B_2"); break;
    case QK_MIDI_NOTE_C_3: sprintf(keycode_str, "QK_MIDI_NOTE_C_3"); break;
    case QK_MIDI_NOTE_C_SHARP_3: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_3"); break;
    case QK_MIDI_NOTE_D_3: sprintf(keycode_str, "QK_MIDI_NOTE_D_3"); break;
    case QK_MIDI_NOTE_D_SHARP_3: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_3"); break;
    case QK_MIDI_NOTE_E_3: sprintf(keycode_str, "QK_MIDI_NOTE_E_3"); break;
    case QK_MIDI_NOTE_F_3: sprintf(keycode_str, "QK_MIDI_NOTE_F_3"); break;
    case QK_MIDI_NOTE_F_SHARP_3: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_3"); break;
    case QK_MIDI_NOTE_G_3: sprintf(keycode_str, "QK_MIDI_NOTE_G_3"); break;
    case QK_MIDI_NOTE_G_SHARP_3: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_3"); break;
    case QK_MIDI_NOTE_A_3: sprintf(keycode_str, "QK_MIDI_NOTE_A_3"); break;
    case QK_MIDI_NOTE_A_SHARP_3: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_3"); break;
    case QK_MIDI_NOTE_B_3: sprintf(keycode_str, "QK_MIDI_NOTE_B_3"); break;
    case QK_MIDI_NOTE_C_4: sprintf(keycode_str, "QK_MIDI_NOTE_C_4"); break;
    case QK_MIDI_NOTE_C_SHARP_4: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_4"); break;
    case QK_MIDI_NOTE_D_4: sprintf(keycode_str, "QK_MIDI_NOTE_D_4"); break;
    case QK_MIDI_NOTE_D_SHARP_4: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_4"); break;
    case QK_MIDI_NOTE_E_4: sprintf(keycode_str, "QK_MIDI_NOTE_E_4"); break;
    case QK_MIDI_NOTE_F_4: sprintf(keycode_str, "QK_MIDI_NOTE_F_4"); break;
    case QK_MIDI_NOTE_F_SHARP_4: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_4"); break;
    case QK_MIDI_NOTE_G_4: sprintf(keycode_str, "QK_MIDI_NOTE_G_4"); break;
    case QK_MIDI_NOTE_G_SHARP_4: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_4"); break;
    case QK_MIDI_NOTE_A_4: sprintf(keycode_str, "QK_MIDI_NOTE_A_4"); break;
    case QK_MIDI_NOTE_A_SHARP_4: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_4"); break;
    case QK_MIDI_NOTE_B_4: sprintf(keycode_str, "QK_MIDI_NOTE_B_4"); break;
    case QK_MIDI_NOTE_C_5: sprintf(keycode_str, "QK_MIDI_NOTE_C_5"); break;
    case QK_MIDI_NOTE_C_SHARP_5: sprintf(keycode_str, "QK_MIDI_NOTE_C_SHARP_5"); break;
    case QK_MIDI_NOTE_D_5: sprintf(keycode_str, "QK_MIDI_NOTE_D_5"); break;
    case QK_MIDI_NOTE_D_SHARP_5: sprintf(keycode_str, "QK_MIDI_NOTE_D_SHARP_5"); break;
    case QK_MIDI_NOTE_E_5: sprintf(keycode_str, "QK_MIDI_NOTE_E_5"); break;
    case QK_MIDI_NOTE_F_5: sprintf(keycode_str, "QK_MIDI_NOTE_F_5"); break;
    case QK_MIDI_NOTE_F_SHARP_5: sprintf(keycode_str, "QK_MIDI_NOTE_F_SHARP_5"); break;
    case QK_MIDI_NOTE_G_5: sprintf(keycode_str, "QK_MIDI_NOTE_G_5"); break;
    case QK_MIDI_NOTE_G_SHARP_5: sprintf(keycode_str, "QK_MIDI_NOTE_G_SHARP_5"); break;
    case QK_MIDI_NOTE_A_5: sprintf(keycode_str, "QK_MIDI_NOTE_A_5"); break;
    case QK_MIDI_NOTE_A_SHARP_5: sprintf(keycode_str, "QK_MIDI_NOTE_A_SHARP_5"); break;
    case QK_MIDI_NOTE_B_5: sprintf(keycode_str, "QK_MIDI_NOTE_B_5"); break;
    case QK_MIDI_OCTAVE_N2: sprintf(keycode_str, "QK_MIDI_OCTAVE_N2"); break;
    case QK_MIDI_OCTAVE_N1: sprintf(keycode_str, "QK_MIDI_OCTAVE_N1"); break;
    case QK_MIDI_OCTAVE_0: sprintf(keycode_str, "QK_MIDI_OCTAVE_0"); break;
    case QK_MIDI_OCTAVE_1: sprintf(keycode_str, "QK_MIDI_OCTAVE_1"); break;
    case QK_MIDI_OCTAVE_2: sprintf(keycode_str, "QK_MIDI_OCTAVE_2"); break;
    case QK_MIDI_OCTAVE_3: sprintf(keycode_str, "QK_MIDI_OCTAVE_3"); break;
    case QK_MIDI_OCTAVE_4: sprintf(keycode_str, "QK_MIDI_OCTAVE_4"); break;
    case QK_MIDI_OCTAVE_5: sprintf(keycode_str, "QK_MIDI_OCTAVE_5"); break;
    case QK_MIDI_OCTAVE_6: sprintf(keycode_str, "QK_MIDI_OCTAVE_6"); break;
    case QK_MIDI_OCTAVE_7: sprintf(keycode_str, "QK_MIDI_OCTAVE_7"); break;
    case QK_MIDI_OCTAVE_DOWN: sprintf(keycode_str, "QK_MIDI_OCTAVE_DOWN"); break;
    case QK_MIDI_OCTAVE_UP: sprintf(keycode_str, "QK_MIDI_OCTAVE_UP"); break;
    case QK_MIDI_TRANSPOSE_N6: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N6"); break;
    case QK_MIDI_TRANSPOSE_N5: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N5"); break;
    case QK_MIDI_TRANSPOSE_N4: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N4"); break;
    case QK_MIDI_TRANSPOSE_N3: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N3"); break;
    case QK_MIDI_TRANSPOSE_N2: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N2"); break;
    case QK_MIDI_TRANSPOSE_N1: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_N1"); break;
    case QK_MIDI_TRANSPOSE_0: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_0"); break;
    case QK_MIDI_TRANSPOSE_1: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_1"); break;
    case QK_MIDI_TRANSPOSE_2: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_2"); break;
    case QK_MIDI_TRANSPOSE_3: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_3"); break;
    case QK_MIDI_TRANSPOSE_4: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_4"); break;
    case QK_MIDI_TRANSPOSE_5: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_5"); break;
    case QK_MIDI_TRANSPOSE_6: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_6"); break;
    case QK_MIDI_TRANSPOSE_DOWN: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_DOWN"); break;
    case QK_MIDI_TRANSPOSE_UP: sprintf(keycode_str, "QK_MIDI_TRANSPOSE_UP"); break;
    case QK_MIDI_VELOCITY_0: sprintf(keycode_str, "QK_MIDI_VELOCITY_0"); break;
    case QK_MIDI_VELOCITY_1: sprintf(keycode_str, "QK_MIDI_VELOCITY_1"); break;
    case QK_MIDI_VELOCITY_2: sprintf(keycode_str, "QK_MIDI_VELOCITY_2"); break;
    case QK_MIDI_VELOCITY_3: sprintf(keycode_str, "QK_MIDI_VELOCITY_3"); break;
    case QK_MIDI_VELOCITY_4: sprintf(keycode_str, "QK_MIDI_VELOCITY_4"); break;
    case QK_MIDI_VELOCITY_5: sprintf(keycode_str, "QK_MIDI_VELOCITY_5"); break;
    case QK_MIDI_VELOCITY_6: sprintf(keycode_str, "QK_MIDI_VELOCITY_6"); break;
    case QK_MIDI_VELOCITY_7: sprintf(keycode_str, "QK_MIDI_VELOCITY_7"); break;
    case QK_MIDI_VELOCITY_8: sprintf(keycode_str, "QK_MIDI_VELOCITY_8"); break;
    case QK_MIDI_VELOCITY_9: sprintf(keycode_str, "QK_MIDI_VELOCITY_9"); break;
    case QK_MIDI_VELOCITY_10: sprintf(keycode_str, "QK_MIDI_VELOCITY_10"); break;
    case QK_MIDI_VELOCITY_DOWN: sprintf(keycode_str, "QK_MIDI_VELOCITY_DOWN"); break;
    case QK_MIDI_VELOCITY_UP: sprintf(keycode_str, "QK_MIDI_VELOCITY_UP"); break;
    case QK_MIDI_CHANNEL_1: sprintf(keycode_str, "QK_MIDI_CHANNEL_1"); break;
    case QK_MIDI_CHANNEL_2: sprintf(keycode_str, "QK_MIDI_CHANNEL_2"); break;
    case QK_MIDI_CHANNEL_3: sprintf(keycode_str, "QK_MIDI_CHANNEL_3"); break;
    case QK_MIDI_CHANNEL_4: sprintf(keycode_str, "QK_MIDI_CHANNEL_4"); break;
    case QK_MIDI_CHANNEL_5: sprintf(keycode_str, "QK_MIDI_CHANNEL_5"); break;
    case QK_MIDI_CHANNEL_6: sprintf(keycode_str, "QK_MIDI_CHANNEL_6"); break;
    case QK_MIDI_CHANNEL_7: sprintf(keycode_str, "QK_MIDI_CHANNEL_7"); break;
    case QK_MIDI_CHANNEL_8: sprintf(keycode_str, "QK_MIDI_CHANNEL_8"); break;
    case QK_MIDI_CHANNEL_9: sprintf(keycode_str, "QK_MIDI_CHANNEL_9"); break;
    case QK_MIDI_CHANNEL_10: sprintf(keycode_str, "QK_MIDI_CHANNEL_10"); break;
    case QK_MIDI_CHANNEL_11: sprintf(keycode_str, "QK_MIDI_CHANNEL_11"); break;
    case QK_MIDI_CHANNEL_12: sprintf(keycode_str, "QK_MIDI_CHANNEL_12"); break;
    case QK_MIDI_CHANNEL_13: sprintf(keycode_str, "QK_MIDI_CHANNEL_13"); break;
    case QK_MIDI_CHANNEL_14: sprintf(keycode_str, "QK_MIDI_CHANNEL_14"); break;
    case QK_MIDI_CHANNEL_15: sprintf(keycode_str, "QK_MIDI_CHANNEL_15"); break;
    case QK_MIDI_CHANNEL_16: sprintf(keycode_str, "QK_MIDI_CHANNEL_16"); break;
    case QK_MIDI_CHANNEL_DOWN: sprintf(keycode_str, "QK_MIDI_CHANNEL_DOWN"); break;
    case QK_MIDI_CHANNEL_UP: sprintf(keycode_str, "QK_MIDI_CHANNEL_UP"); break;
    case QK_MIDI_ALL_NOTES_OFF: sprintf(keycode_str, "QK_MIDI_ALL_NOTES_OFF"); break;
    case QK_MIDI_SUSTAIN: sprintf(keycode_str, "QK_MIDI_SUSTAIN"); break;
    case QK_MIDI_PORTAMENTO: sprintf(keycode_str, "QK_MIDI_PORTAMENTO"); break;
    case QK_MIDI_SOSTENUTO: sprintf(keycode_str, "QK_MIDI_SOSTENUTO"); break;
    case QK_MIDI_SOFT: sprintf(keycode_str, "QK_MIDI_SOFT"); break;
    case QK_MIDI_LEGATO: sprintf(keycode_str, "QK_MIDI_LEGATO"); break;
    case QK_MIDI_MODULATION: sprintf(keycode_str, "QK_MIDI_MODULATION"); break;
    case QK_MIDI_MODULATION_SPEED_DOWN: sprintf(keycode_str, "QK_MIDI_MODULATION_SPEED_DOWN"); break;
    case QK_MIDI_MODULATION_SPEED_UP: sprintf(keycode_str, "QK_MIDI_MODULATION_SPEED_UP"); break;
    case QK_MIDI_PITCH_BEND_DOWN: sprintf(keycode_str, "QK_MIDI_PITCH_BEND_DOWN"); break;
    case QK_MIDI_PITCH_BEND_UP: sprintf(keycode_str, "QK_MIDI_PITCH_BEND_UP"); break;
    case QK_SEQUENCER_ON: sprintf(keycode_str, "QK_SEQUENCER_ON"); break;
    case QK_SEQUENCER_OFF: sprintf(keycode_str, "QK_SEQUENCER_OFF"); break;
    case QK_SEQUENCER_TOGGLE: sprintf(keycode_str, "QK_SEQUENCER_TOGGLE"); break;
    case QK_SEQUENCER_TEMPO_DOWN: sprintf(keycode_str, "QK_SEQUENCER_TEMPO_DOWN"); break;
    case QK_SEQUENCER_TEMPO_UP: sprintf(keycode_str, "QK_SEQUENCER_TEMPO_UP"); break;
    case QK_SEQUENCER_RESOLUTION_DOWN: sprintf(keycode_str, "QK_SEQUENCER_RESOLUTION_DOWN"); break;
    case QK_SEQUENCER_RESOLUTION_UP: sprintf(keycode_str, "QK_SEQUENCER_RESOLUTION_UP"); break;
    case QK_SEQUENCER_STEPS_ALL: sprintf(keycode_str, "QK_SEQUENCER_STEPS_ALL"); break;
    case QK_SEQUENCER_STEPS_CLEAR: sprintf(keycode_str, "QK_SEQUENCER_STEPS_CLEAR"); break;
    case QK_JOYSTICK_BUTTON_0: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_0"); break;
    case QK_JOYSTICK_BUTTON_1: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_1"); break;
    case QK_JOYSTICK_BUTTON_2: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_2"); break;
    case QK_JOYSTICK_BUTTON_3: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_3"); break;
    case QK_JOYSTICK_BUTTON_4: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_4"); break;
    case QK_JOYSTICK_BUTTON_5: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_5"); break;
    case QK_JOYSTICK_BUTTON_6: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_6"); break;
    case QK_JOYSTICK_BUTTON_7: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_7"); break;
    case QK_JOYSTICK_BUTTON_8: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_8"); break;
    case QK_JOYSTICK_BUTTON_9: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_9"); break;
    case QK_JOYSTICK_BUTTON_10: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_10"); break;
    case QK_JOYSTICK_BUTTON_11: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_11"); break;
    case QK_JOYSTICK_BUTTON_12: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_12"); break;
    case QK_JOYSTICK_BUTTON_13: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_13"); break;
    case QK_JOYSTICK_BUTTON_14: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_14"); break;
    case QK_JOYSTICK_BUTTON_15: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_15"); break;
    case QK_JOYSTICK_BUTTON_16: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_16"); break;
    case QK_JOYSTICK_BUTTON_17: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_17"); break;
    case QK_JOYSTICK_BUTTON_18: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_18"); break;
    case QK_JOYSTICK_BUTTON_19: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_19"); break;
    case QK_JOYSTICK_BUTTON_20: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_20"); break;
    case QK_JOYSTICK_BUTTON_21: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_21"); break;
    case QK_JOYSTICK_BUTTON_22: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_22"); break;
    case QK_JOYSTICK_BUTTON_23: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_23"); break;
    case QK_JOYSTICK_BUTTON_24: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_24"); break;
    case QK_JOYSTICK_BUTTON_25: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_25"); break;
    case QK_JOYSTICK_BUTTON_26: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_26"); break;
    case QK_JOYSTICK_BUTTON_27: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_27"); break;
    case QK_JOYSTICK_BUTTON_28: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_28"); break;
    case QK_JOYSTICK_BUTTON_29: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_29"); break;
    case QK_JOYSTICK_BUTTON_30: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_30"); break;
    case QK_JOYSTICK_BUTTON_31: sprintf(keycode_str, "QK_JOYSTICK_BUTTON_31"); break;
    case QK_PROGRAMMABLE_BUTTON_1: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_1"); break;
    case QK_PROGRAMMABLE_BUTTON_2: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_2"); break;
    case QK_PROGRAMMABLE_BUTTON_3: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_3"); break;
    case QK_PROGRAMMABLE_BUTTON_4: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_4"); break;
    case QK_PROGRAMMABLE_BUTTON_5: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_5"); break;
    case QK_PROGRAMMABLE_BUTTON_6: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_6"); break;
    case QK_PROGRAMMABLE_BUTTON_7: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_7"); break;
    case QK_PROGRAMMABLE_BUTTON_8: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_8"); break;
    case QK_PROGRAMMABLE_BUTTON_9: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_9"); break;
    case QK_PROGRAMMABLE_BUTTON_10: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_10"); break;
    case QK_PROGRAMMABLE_BUTTON_11: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_11"); break;
    case QK_PROGRAMMABLE_BUTTON_12: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_12"); break;
    case QK_PROGRAMMABLE_BUTTON_13: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_13"); break;
    case QK_PROGRAMMABLE_BUTTON_14: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_14"); break;
    case QK_PROGRAMMABLE_BUTTON_15: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_15"); break;
    case QK_PROGRAMMABLE_BUTTON_16: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_16"); break;
    case QK_PROGRAMMABLE_BUTTON_17: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_17"); break;
    case QK_PROGRAMMABLE_BUTTON_18: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_18"); break;
    case QK_PROGRAMMABLE_BUTTON_19: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_19"); break;
    case QK_PROGRAMMABLE_BUTTON_20: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_20"); break;
    case QK_PROGRAMMABLE_BUTTON_21: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_21"); break;
    case QK_PROGRAMMABLE_BUTTON_22: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_22"); break;
    case QK_PROGRAMMABLE_BUTTON_23: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_23"); break;
    case QK_PROGRAMMABLE_BUTTON_24: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_24"); break;
    case QK_PROGRAMMABLE_BUTTON_25: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_25"); break;
    case QK_PROGRAMMABLE_BUTTON_26: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_26"); break;
    case QK_PROGRAMMABLE_BUTTON_27: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_27"); break;
    case QK_PROGRAMMABLE_BUTTON_28: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_28"); break;
    case QK_PROGRAMMABLE_BUTTON_29: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_29"); break;
    case QK_PROGRAMMABLE_BUTTON_30: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_30"); break;
    case QK_PROGRAMMABLE_BUTTON_31: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_31"); break;
    case QK_PROGRAMMABLE_BUTTON_32: sprintf(keycode_str, "QK_PROGRAMMABLE_BUTTON_32"); break;
    case QK_AUDIO_ON: sprintf(keycode_str, "QK_AUDIO_ON"); break;
    case QK_AUDIO_OFF: sprintf(keycode_str, "QK_AUDIO_OFF"); break;
    case QK_AUDIO_TOGGLE: sprintf(keycode_str, "QK_AUDIO_TOGGLE"); break;
    case QK_AUDIO_CLICKY_TOGGLE: sprintf(keycode_str, "QK_AUDIO_CLICKY_TOGGLE"); break;
    case QK_AUDIO_CLICKY_ON: sprintf(keycode_str, "QK_AUDIO_CLICKY_ON"); break;
    case QK_AUDIO_CLICKY_OFF: sprintf(keycode_str, "QK_AUDIO_CLICKY_OFF"); break;
    case QK_AUDIO_CLICKY_UP: sprintf(keycode_str, "QK_AUDIO_CLICKY_UP"); break;
    case QK_AUDIO_CLICKY_DOWN: sprintf(keycode_str, "QK_AUDIO_CLICKY_DOWN"); break;
    case QK_AUDIO_CLICKY_RESET: sprintf(keycode_str, "QK_AUDIO_CLICKY_RESET"); break;
    case QK_MUSIC_ON: sprintf(keycode_str, "QK_MUSIC_ON"); break;
    case QK_MUSIC_OFF: sprintf(keycode_str, "QK_MUSIC_OFF"); break;
    case QK_MUSIC_TOGGLE: sprintf(keycode_str, "QK_MUSIC_TOGGLE"); break;
    case QK_MUSIC_MODE_NEXT: sprintf(keycode_str, "QK_MUSIC_MODE_NEXT"); break;
    case QK_AUDIO_VOICE_NEXT: sprintf(keycode_str, "QK_AUDIO_VOICE_NEXT"); break;
    case QK_AUDIO_VOICE_PREVIOUS: sprintf(keycode_str, "QK_AUDIO_VOICE_PREVIOUS"); break;
    case QK_STENO_BOLT: sprintf(keycode_str, "QK_STENO_BOLT"); break;
    case QK_STENO_GEMINI: sprintf(keycode_str, "QK_STENO_GEMINI"); break;
    case QK_STENO_COMB: sprintf(keycode_str, "QK_STENO_COMB"); break;
    case QK_STENO_COMB_MAX: sprintf(keycode_str, "QK_STENO_COMB_MAX"); break;
    case QK_MACRO_0: sprintf(keycode_str, "QK_MACRO_0"); break;
    case QK_MACRO_1: sprintf(keycode_str, "QK_MACRO_1"); break;
    case QK_MACRO_2: sprintf(keycode_str, "QK_MACRO_2"); break;
    case QK_MACRO_3: sprintf(keycode_str, "QK_MACRO_3"); break;
    case QK_MACRO_4: sprintf(keycode_str, "QK_MACRO_4"); break;
    case QK_MACRO_5: sprintf(keycode_str, "QK_MACRO_5"); break;
    case QK_MACRO_6: sprintf(keycode_str, "QK_MACRO_6"); break;
    case QK_MACRO_7: sprintf(keycode_str, "QK_MACRO_7"); break;
    case QK_MACRO_8: sprintf(keycode_str, "QK_MACRO_8"); break;
    case QK_MACRO_9: sprintf(keycode_str, "QK_MACRO_9"); break;
    case QK_MACRO_10: sprintf(keycode_str, "QK_MACRO_10"); break;
    case QK_MACRO_11: sprintf(keycode_str, "QK_MACRO_11"); break;
    case QK_MACRO_12: sprintf(keycode_str, "QK_MACRO_12"); break;
    case QK_MACRO_13: sprintf(keycode_str, "QK_MACRO_13"); break;
    case QK_MACRO_14: sprintf(keycode_str, "QK_MACRO_14"); break;
    case QK_MACRO_15: sprintf(keycode_str, "QK_MACRO_15"); break;
    case QK_MACRO_16: sprintf(keycode_str, "QK_MACRO_16"); break;
    case QK_MACRO_17: sprintf(keycode_str, "QK_MACRO_17"); break;
    case QK_MACRO_18: sprintf(keycode_str, "QK_MACRO_18"); break;
    case QK_MACRO_19: sprintf(keycode_str, "QK_MACRO_19"); break;
    case QK_MACRO_20: sprintf(keycode_str, "QK_MACRO_20"); break;
    case QK_MACRO_21: sprintf(keycode_str, "QK_MACRO_21"); break;
    case QK_MACRO_22: sprintf(keycode_str, "QK_MACRO_22"); break;
    case QK_MACRO_23: sprintf(keycode_str, "QK_MACRO_23"); break;
    case QK_MACRO_24: sprintf(keycode_str, "QK_MACRO_24"); break;
    case QK_MACRO_25: sprintf(keycode_str, "QK_MACRO_25"); break;
    case QK_MACRO_26: sprintf(keycode_str, "QK_MACRO_26"); break;
    case QK_MACRO_27: sprintf(keycode_str, "QK_MACRO_27"); break;
    case QK_MACRO_28: sprintf(keycode_str, "QK_MACRO_28"); break;
    case QK_MACRO_29: sprintf(keycode_str, "QK_MACRO_29"); break;
    case QK_MACRO_30: sprintf(keycode_str, "QK_MACRO_30"); break;
    case QK_MACRO_31: sprintf(keycode_str, "QK_MACRO_31"); break;
    case QK_OUTPUT_AUTO: sprintf(keycode_str, "QK_OUTPUT_AUTO"); break;
    case QK_OUTPUT_NEXT: sprintf(keycode_str, "QK_OUTPUT_NEXT"); break;
    case QK_OUTPUT_PREV: sprintf(keycode_str, "QK_OUTPUT_PREV"); break;
    case QK_OUTPUT_NONE: sprintf(keycode_str, "QK_OUTPUT_NONE"); break;
    case QK_OUTPUT_USB: sprintf(keycode_str, "QK_OUTPUT_USB"); break;
    case QK_OUTPUT_2P4GHZ: sprintf(keycode_str, "QK_OUTPUT_2P4GHZ"); break;
    case QK_OUTPUT_BLUETOOTH: sprintf(keycode_str, "QK_OUTPUT_BLUETOOTH"); break;
    case QK_BLUETOOTH_PROFILE_NEXT: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE_NEXT"); break;
    case QK_BLUETOOTH_PROFILE_PREV: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE_PREV"); break;
    case QK_BLUETOOTH_UNPAIR: sprintf(keycode_str, "QK_BLUETOOTH_UNPAIR"); break;
    case QK_BLUETOOTH_PROFILE1: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE1"); break;
    case QK_BLUETOOTH_PROFILE2: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE2"); break;
    case QK_BLUETOOTH_PROFILE3: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE3"); break;
    case QK_BLUETOOTH_PROFILE4: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE4"); break;
    case QK_BLUETOOTH_PROFILE5: sprintf(keycode_str, "QK_BLUETOOTH_PROFILE5"); break;
    case QK_BACKLIGHT_ON: sprintf(keycode_str, "QK_BACKLIGHT_ON"); break;
    case QK_BACKLIGHT_OFF: sprintf(keycode_str, "QK_BACKLIGHT_OFF"); break;
    case QK_BACKLIGHT_TOGGLE: sprintf(keycode_str, "QK_BACKLIGHT_TOGGLE"); break;
    case QK_BACKLIGHT_DOWN: sprintf(keycode_str, "QK_BACKLIGHT_DOWN"); break;
    case QK_BACKLIGHT_UP: sprintf(keycode_str, "QK_BACKLIGHT_UP"); break;
    case QK_BACKLIGHT_STEP: sprintf(keycode_str, "QK_BACKLIGHT_STEP"); break;
    case QK_BACKLIGHT_TOGGLE_BREATHING: sprintf(keycode_str, "QK_BACKLIGHT_TOGGLE_BREATHING"); break;
    case QK_LED_MATRIX_ON: sprintf(keycode_str, "QK_LED_MATRIX_ON"); break;
    case QK_LED_MATRIX_OFF: sprintf(keycode_str, "QK_LED_MATRIX_OFF"); break;
    case QK_LED_MATRIX_TOGGLE: sprintf(keycode_str, "QK_LED_MATRIX_TOGGLE"); break;
    case QK_LED_MATRIX_MODE_NEXT: sprintf(keycode_str, "QK_LED_MATRIX_MODE_NEXT"); break;
    case QK_LED_MATRIX_MODE_PREVIOUS: sprintf(keycode_str, "QK_LED_MATRIX_MODE_PREVIOUS"); break;
    case QK_LED_MATRIX_BRIGHTNESS_UP: sprintf(keycode_str, "QK_LED_MATRIX_BRIGHTNESS_UP"); break;
    case QK_LED_MATRIX_BRIGHTNESS_DOWN: sprintf(keycode_str, "QK_LED_MATRIX_BRIGHTNESS_DOWN"); break;
    case QK_LED_MATRIX_SPEED_UP: sprintf(keycode_str, "QK_LED_MATRIX_SPEED_UP"); break;
    case QK_LED_MATRIX_SPEED_DOWN: sprintf(keycode_str, "QK_LED_MATRIX_SPEED_DOWN"); break;
    case QK_UNDERGLOW_TOGGLE: sprintf(keycode_str, "QK_UNDERGLOW_TOGGLE"); break;
    case QK_UNDERGLOW_MODE_NEXT: sprintf(keycode_str, "QK_UNDERGLOW_MODE_NEXT"); break;
    case QK_UNDERGLOW_MODE_PREVIOUS: sprintf(keycode_str, "QK_UNDERGLOW_MODE_PREVIOUS"); break;
    case QK_UNDERGLOW_HUE_UP: sprintf(keycode_str, "QK_UNDERGLOW_HUE_UP"); break;
    case QK_UNDERGLOW_HUE_DOWN: sprintf(keycode_str, "QK_UNDERGLOW_HUE_DOWN"); break;
    case QK_UNDERGLOW_SATURATION_UP: sprintf(keycode_str, "QK_UNDERGLOW_SATURATION_UP"); break;
    case QK_UNDERGLOW_SATURATION_DOWN: sprintf(keycode_str, "QK_UNDERGLOW_SATURATION_DOWN"); break;
    case QK_UNDERGLOW_VALUE_UP: sprintf(keycode_str, "QK_UNDERGLOW_VALUE_UP"); break;
    case QK_UNDERGLOW_VALUE_DOWN: sprintf(keycode_str, "QK_UNDERGLOW_VALUE_DOWN"); break;
    case QK_UNDERGLOW_SPEED_UP: sprintf(keycode_str, "QK_UNDERGLOW_SPEED_UP"); break;
    case QK_UNDERGLOW_SPEED_DOWN: sprintf(keycode_str, "QK_UNDERGLOW_SPEED_DOWN"); break;
    case RGB_MODE_PLAIN: sprintf(keycode_str, "RGB_MODE_PLAIN"); break;
    case RGB_MODE_BREATHE: sprintf(keycode_str, "RGB_MODE_BREATHE"); break;
    case RGB_MODE_RAINBOW: sprintf(keycode_str, "RGB_MODE_RAINBOW"); break;
    case RGB_MODE_SWIRL: sprintf(keycode_str, "RGB_MODE_SWIRL"); break;
    case RGB_MODE_SNAKE: sprintf(keycode_str, "RGB_MODE_SNAKE"); break;
    case RGB_MODE_KNIGHT: sprintf(keycode_str, "RGB_MODE_KNIGHT"); break;
    case RGB_MODE_XMAS: sprintf(keycode_str, "RGB_MODE_XMAS"); break;
    case RGB_MODE_GRADIENT: sprintf(keycode_str, "RGB_MODE_GRADIENT"); break;
    case RGB_MODE_RGBTEST: sprintf(keycode_str, "RGB_MODE_RGBTEST"); break;
    case RGB_MODE_TWINKLE: sprintf(keycode_str, "RGB_MODE_TWINKLE"); break;
    case QK_RGB_MATRIX_ON: sprintf(keycode_str, "QK_RGB_MATRIX_ON"); break;
    case QK_RGB_MATRIX_OFF: sprintf(keycode_str, "QK_RGB_MATRIX_OFF"); break;
    case QK_RGB_MATRIX_TOGGLE: sprintf(keycode_str, "QK_RGB_MATRIX_TOGGLE"); break;
    case QK_RGB_MATRIX_MODE_NEXT: sprintf(keycode_str, "QK_RGB_MATRIX_MODE_NEXT"); break;
    case QK_RGB_MATRIX_MODE_PREVIOUS: sprintf(keycode_str, "QK_RGB_MATRIX_MODE_PREVIOUS"); break;
    case QK_RGB_MATRIX_HUE_UP: sprintf(keycode_str, "QK_RGB_MATRIX_HUE_UP"); break;
    case QK_RGB_MATRIX_HUE_DOWN: sprintf(keycode_str, "QK_RGB_MATRIX_HUE_DOWN"); break;
    case QK_RGB_MATRIX_SATURATION_UP: sprintf(keycode_str, "QK_RGB_MATRIX_SATURATION_UP"); break;
    case QK_RGB_MATRIX_SATURATION_DOWN: sprintf(keycode_str, "QK_RGB_MATRIX_SATURATION_DOWN"); break;
    case QK_RGB_MATRIX_VALUE_UP: sprintf(keycode_str, "QK_RGB_MATRIX_VALUE_UP"); break;
    case QK_RGB_MATRIX_VALUE_DOWN: sprintf(keycode_str, "QK_RGB_MATRIX_VALUE_DOWN"); break;
    case QK_RGB_MATRIX_SPEED_UP: sprintf(keycode_str, "QK_RGB_MATRIX_SPEED_UP"); break;
    case QK_RGB_MATRIX_SPEED_DOWN: sprintf(keycode_str, "QK_RGB_MATRIX_SPEED_DOWN"); break;
    case QK_BOOTLOADER: sprintf(keycode_str, "QK_BOOTLOADER"); break;
    case QK_REBOOT: sprintf(keycode_str, "QK_REBOOT"); break;
    case QK_DEBUG_TOGGLE: sprintf(keycode_str, "QK_DEBUG_TOGGLE"); break;
    case QK_CLEAR_EEPROM: sprintf(keycode_str, "QK_CLEAR_EEPROM"); break;
    case QK_MAKE: sprintf(keycode_str, "QK_MAKE"); break;
    case QK_AUTO_SHIFT_DOWN: sprintf(keycode_str, "QK_AUTO_SHIFT_DOWN"); break;
    case QK_AUTO_SHIFT_UP: sprintf(keycode_str, "QK_AUTO_SHIFT_UP"); break;
    case QK_AUTO_SHIFT_REPORT: sprintf(keycode_str, "QK_AUTO_SHIFT_REPORT"); break;
    case QK_AUTO_SHIFT_ON: sprintf(keycode_str, "QK_AUTO_SHIFT_ON"); break;
    case QK_AUTO_SHIFT_OFF: sprintf(keycode_str, "QK_AUTO_SHIFT_OFF"); break;
    case QK_AUTO_SHIFT_TOGGLE: sprintf(keycode_str, "QK_AUTO_SHIFT_TOGGLE"); break;
    case QK_GRAVE_ESCAPE: sprintf(keycode_str, "QK_GRAVE_ESCAPE"); break;
    case QK_VELOCIKEY_TOGGLE: sprintf(keycode_str, "QK_VELOCIKEY_TOGGLE"); break;
    case QK_SPACE_CADET_LEFT_CTRL_PARENTHESIS_OPEN: sprintf(keycode_str, "QK_SPACE_CADET_LEFT_CTRL_PARENTHESIS_OPEN"); break;
    case QK_SPACE_CADET_RIGHT_CTRL_PARENTHESIS_CLOSE: sprintf(keycode_str, "QK_SPACE_CADET_RIGHT_CTRL_PARENTHESIS_CLOSE"); break;
    case QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN: sprintf(keycode_str, "QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN"); break;
    case QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE: sprintf(keycode_str, "QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE"); break;
    case QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN: sprintf(keycode_str, "QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN"); break;
    case QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE: sprintf(keycode_str, "QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE"); break;
    case QK_SPACE_CADET_RIGHT_SHIFT_ENTER: sprintf(keycode_str, "QK_SPACE_CADET_RIGHT_SHIFT_ENTER"); break;
    case QK_UNICODE_MODE_NEXT: sprintf(keycode_str, "QK_UNICODE_MODE_NEXT"); break;
    case QK_UNICODE_MODE_PREVIOUS: sprintf(keycode_str, "QK_UNICODE_MODE_PREVIOUS"); break;
    case QK_UNICODE_MODE_MACOS: sprintf(keycode_str, "QK_UNICODE_MODE_MACOS"); break;
    case QK_UNICODE_MODE_LINUX: sprintf(keycode_str, "QK_UNICODE_MODE_LINUX"); break;
    case QK_UNICODE_MODE_WINDOWS: sprintf(keycode_str, "QK_UNICODE_MODE_WINDOWS"); break;
    case QK_UNICODE_MODE_BSD: sprintf(keycode_str, "QK_UNICODE_MODE_BSD"); break;
    case QK_UNICODE_MODE_WINCOMPOSE: sprintf(keycode_str, "QK_UNICODE_MODE_WINCOMPOSE"); break;
    case QK_UNICODE_MODE_EMACS: sprintf(keycode_str, "QK_UNICODE_MODE_EMACS"); break;
    case QK_HAPTIC_ON: sprintf(keycode_str, "QK_HAPTIC_ON"); break;
    case QK_HAPTIC_OFF: sprintf(keycode_str, "QK_HAPTIC_OFF"); break;
    case QK_HAPTIC_TOGGLE: sprintf(keycode_str, "QK_HAPTIC_TOGGLE"); break;
    case QK_HAPTIC_RESET: sprintf(keycode_str, "QK_HAPTIC_RESET"); break;
    case QK_HAPTIC_FEEDBACK_TOGGLE: sprintf(keycode_str, "QK_HAPTIC_FEEDBACK_TOGGLE"); break;
    case QK_HAPTIC_BUZZ_TOGGLE: sprintf(keycode_str, "QK_HAPTIC_BUZZ_TOGGLE"); break;
    case QK_HAPTIC_MODE_NEXT: sprintf(keycode_str, "QK_HAPTIC_MODE_NEXT"); break;
    case QK_HAPTIC_MODE_PREVIOUS: sprintf(keycode_str, "QK_HAPTIC_MODE_PREVIOUS"); break;
    case QK_HAPTIC_CONTINUOUS_TOGGLE: sprintf(keycode_str, "QK_HAPTIC_CONTINUOUS_TOGGLE"); break;
    case QK_HAPTIC_CONTINUOUS_UP: sprintf(keycode_str, "QK_HAPTIC_CONTINUOUS_UP"); break;
    case QK_HAPTIC_CONTINUOUS_DOWN: sprintf(keycode_str, "QK_HAPTIC_CONTINUOUS_DOWN"); break;
    case QK_HAPTIC_DWELL_UP: sprintf(keycode_str, "QK_HAPTIC_DWELL_UP"); break;
    case QK_HAPTIC_DWELL_DOWN: sprintf(keycode_str, "QK_HAPTIC_DWELL_DOWN"); break;
    case QK_COMBO_ON: sprintf(keycode_str, "QK_COMBO_ON"); break;
    case QK_COMBO_OFF: sprintf(keycode_str, "QK_COMBO_OFF"); break;
    case QK_COMBO_TOGGLE: sprintf(keycode_str, "QK_COMBO_TOGGLE"); break;
    case QK_DYNAMIC_MACRO_RECORD_START_1: sprintf(keycode_str, "QK_DYNAMIC_MACRO_RECORD_START_1"); break;
    case QK_DYNAMIC_MACRO_RECORD_START_2: sprintf(keycode_str, "QK_DYNAMIC_MACRO_RECORD_START_2"); break;
    case QK_DYNAMIC_MACRO_RECORD_STOP: sprintf(keycode_str, "QK_DYNAMIC_MACRO_RECORD_STOP"); break;
    case QK_DYNAMIC_MACRO_PLAY_1: sprintf(keycode_str, "QK_DYNAMIC_MACRO_PLAY_1"); break;
    case QK_DYNAMIC_MACRO_PLAY_2: sprintf(keycode_str, "QK_DYNAMIC_MACRO_PLAY_2"); break;
    case QK_LEADER: sprintf(keycode_str, "QK_LEADER"); break;
    case QK_LOCK: sprintf(keycode_str, "QK_LOCK"); break;
    case QK_ONE_SHOT_ON: sprintf(keycode_str, "QK_ONE_SHOT_ON"); break;
    case QK_ONE_SHOT_OFF: sprintf(keycode_str, "QK_ONE_SHOT_OFF"); break;
    case QK_ONE_SHOT_TOGGLE: sprintf(keycode_str, "QK_ONE_SHOT_TOGGLE"); break;
    case QK_KEY_OVERRIDE_TOGGLE: sprintf(keycode_str, "QK_KEY_OVERRIDE_TOGGLE"); break;
    case QK_KEY_OVERRIDE_ON: sprintf(keycode_str, "QK_KEY_OVERRIDE_ON"); break;
    case QK_KEY_OVERRIDE_OFF: sprintf(keycode_str, "QK_KEY_OVERRIDE_OFF"); break;
    case QK_SECURE_LOCK: sprintf(keycode_str, "QK_SECURE_LOCK"); break;
    case QK_SECURE_UNLOCK: sprintf(keycode_str, "QK_SECURE_UNLOCK"); break;
    case QK_SECURE_TOGGLE: sprintf(keycode_str, "QK_SECURE_TOGGLE"); break;
    case QK_SECURE_REQUEST: sprintf(keycode_str, "QK_SECURE_REQUEST"); break;
    case QK_DYNAMIC_TAPPING_TERM_PRINT: sprintf(keycode_str, "QK_DYNAMIC_TAPPING_TERM_PRINT"); break;
    case QK_DYNAMIC_TAPPING_TERM_UP: sprintf(keycode_str, "QK_DYNAMIC_TAPPING_TERM_UP"); break;
    case QK_DYNAMIC_TAPPING_TERM_DOWN: sprintf(keycode_str, "QK_DYNAMIC_TAPPING_TERM_DOWN"); break;
    case QK_CAPS_WORD_TOGGLE: sprintf(keycode_str, "QK_CAPS_WORD_TOGGLE"); break;
    case QK_AUTOCORRECT_ON: sprintf(keycode_str, "QK_AUTOCORRECT_ON"); break;
    case QK_AUTOCORRECT_OFF: sprintf(keycode_str, "QK_AUTOCORRECT_OFF"); break;
    case QK_AUTOCORRECT_TOGGLE: sprintf(keycode_str, "QK_AUTOCORRECT_TOGGLE"); break;
    case QK_TRI_LAYER_LOWER: sprintf(keycode_str, "QK_TRI_LAYER_LOWER"); break;
    case QK_TRI_LAYER_UPPER: sprintf(keycode_str, "QK_TRI_LAYER_UPPER"); break;
    case QK_REPEAT_KEY: sprintf(keycode_str, "QK_REPEAT_KEY"); break;
    case QK_ALT_REPEAT_KEY: sprintf(keycode_str, "QK_ALT_REPEAT_KEY"); break;
    case QK_LAYER_LOCK: sprintf(keycode_str, "QK_LAYER_LOCK"); break;
    case QK_KB_0: sprintf(keycode_str, "QK_KB_0"); break;
    case QK_KB_1: sprintf(keycode_str, "QK_KB_1"); break;
    case QK_KB_2: sprintf(keycode_str, "QK_KB_2"); break;
    case QK_KB_3: sprintf(keycode_str, "QK_KB_3"); break;
    case QK_KB_4: sprintf(keycode_str, "QK_KB_4"); break;
    case QK_KB_5: sprintf(keycode_str, "QK_KB_5"); break;
    case QK_KB_6: sprintf(keycode_str, "QK_KB_6"); break;
    case QK_KB_7: sprintf(keycode_str, "QK_KB_7"); break;
    case QK_KB_8: sprintf(keycode_str, "QK_KB_8"); break;
    case QK_KB_9: sprintf(keycode_str, "QK_KB_9"); break;
    case QK_KB_10: sprintf(keycode_str, "QK_KB_10"); break;
    case QK_KB_11: sprintf(keycode_str, "QK_KB_11"); break;
    case QK_KB_12: sprintf(keycode_str, "QK_KB_12"); break;
    case QK_KB_13: sprintf(keycode_str, "QK_KB_13"); break;
    case QK_KB_14: sprintf(keycode_str, "QK_KB_14"); break;
    case QK_KB_15: sprintf(keycode_str, "QK_KB_15"); break;
    case QK_KB_16: sprintf(keycode_str, "QK_KB_16"); break;
    case QK_KB_17: sprintf(keycode_str, "QK_KB_17"); break;
    case QK_KB_18: sprintf(keycode_str, "QK_KB_18"); break;
    case QK_KB_19: sprintf(keycode_str, "QK_KB_19"); break;
    case QK_KB_20: sprintf(keycode_str, "QK_KB_20"); break;
    case QK_KB_21: sprintf(keycode_str, "QK_KB_21"); break;
    case QK_KB_22: sprintf(keycode_str, "QK_KB_22"); break;
    case QK_KB_23: sprintf(keycode_str, "QK_KB_23"); break;
    case QK_KB_24: sprintf(keycode_str, "QK_KB_24"); break;
    case QK_KB_25: sprintf(keycode_str, "QK_KB_25"); break;
    case QK_KB_26: sprintf(keycode_str, "QK_KB_26"); break;
    case QK_KB_27: sprintf(keycode_str, "QK_KB_27"); break;
    case QK_KB_28: sprintf(keycode_str, "QK_KB_28"); break;
    case QK_KB_29: sprintf(keycode_str, "QK_KB_29"); break;
    case QK_KB_30: sprintf(keycode_str, "QK_KB_30"); break;
    case QK_KB_31: sprintf(keycode_str, "QK_KB_31"); break;

    case QK_USER_0: sprintf(keycode_str, "QK_USER_0"); break;
    case QK_USER_1: sprintf(keycode_str, "QK_USER_1"); break;
    case QK_USER_2: sprintf(keycode_str, "QK_USER_2"); break;
    case QK_USER_3: sprintf(keycode_str, "QK_USER_3"); break;
    case QK_USER_4: sprintf(keycode_str, "QK_USER_4"); break;
    case QK_USER_5: sprintf(keycode_str, "QK_USER_5"); break;
    case QK_USER_6: sprintf(keycode_str, "QK_USER_6"); break;
    case QK_USER_7: sprintf(keycode_str, "QK_USER_7"); break;
    case QK_USER_8: sprintf(keycode_str, "QK_USER_8"); break;
    case QK_USER_9: sprintf(keycode_str, "QK_USER_9"); break;
    case QK_USER_10: sprintf(keycode_str, "QK_USER_10"); break;
    case QK_USER_11: sprintf(keycode_str, "QK_USER_11"); break;
    case QK_USER_12: sprintf(keycode_str, "QK_USER_12"); break;
    case QK_USER_13: sprintf(keycode_str, "QK_USER_13"); break;
    case QK_USER_14: sprintf(keycode_str, "QK_USER_14"); break;
    case QK_USER_15: sprintf(keycode_str, "QK_USER_15"); break;
    case QK_USER_16: sprintf(keycode_str, "QK_USER_16"); break;
    case QK_USER_17: sprintf(keycode_str, "QK_USER_17"); break;
    case QK_USER_18: sprintf(keycode_str, "QK_USER_18"); break;
    case QK_USER_19: sprintf(keycode_str, "QK_USER_19"); break;
    case QK_USER_20: sprintf(keycode_str, "QK_USER_20"); break;
    case QK_USER_21: sprintf(keycode_str, "QK_USER_21"); break;
    case QK_USER_22: sprintf(keycode_str, "QK_USER_22"); break;
    case QK_USER_23: sprintf(keycode_str, "QK_USER_23"); break;
    case QK_USER_24: sprintf(keycode_str, "QK_USER_24"); break;
    case QK_USER_25: sprintf(keycode_str, "QK_USER_25"); break;
    case QK_USER_26: sprintf(keycode_str, "QK_USER_26"); break;
    case QK_USER_27: sprintf(keycode_str, "QK_USER_27"); break;
    case QK_USER_28: sprintf(keycode_str, "QK_USER_28"); break;
    case QK_USER_29: sprintf(keycode_str, "QK_USER_29"); break;
    case QK_USER_30: sprintf(keycode_str, "QK_USER_30"); break;
    case QK_USER_31: sprintf(keycode_str, "QK_USER_31"); break;
    */

    case KC_LC_A : sprintf(keycode_str, "KC_LC_A"); break;
    case KC_LS_Z : sprintf(keycode_str, "KC_LS_Z"); break;
    case KC_RC_CL: sprintf(keycode_str, "KC_RC_CL"); break;
    case KC_RS_SL: sprintf(keycode_str, "KC_RS_SL"); break;

    case KC_L1_V : sprintf(keycode_str, "KC_L1_V"); break;
    case KC_L1_M : sprintf(keycode_str, "KC_L1_M"); break;

    case LT(1,KC_MINS): sprintf(keycode_str, "LT(1,KC_MINS)"); break;
    case LT(2,KC_F): sprintf(keycode_str, "LT(2,KC_F)"); break;
    case LT(3,KC_D): sprintf(keycode_str, "LT(3,KC_D)"); break;

    default: sprintf(keycode_str, "KC_?"); break;
    }

    return keycode_str;
}

#endif // KEYMAP_INTROSPECTION_ENABLE

//KEYCODE_STRING_NAMES_USER(
//    KEYCODE_STRING_NAME(KC_LC_A ),
//    KEYCODE_STRING_NAME(KC_LS_Z ),
//    KEYCODE_STRING_NAME(KC_RC_CL),
//    KEYCODE_STRING_NAME(KC_RS_SL),
//
//    KEYCODE_STRING_NAME(KC_L1_V ),
//    KEYCODE_STRING_NAME(KC_L1_M )
//);

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

bool find_keycode_in_layer(uint8_t layer, uint16_t keycode, uint8_t *row, uint8_t *col) {
    uint8_t ls = layer;
    uint8_t le = layer + 1;
    if (layer < 0) {
        ls = 0;
        ls = 8;
    }

    for (uint8_t l = ls; l < le; l++) {
        for (uint8_t r = 0; r < MATRIX_ROWS; r++) {
            for (uint8_t c = 0; c < MATRIX_COLS; c++) {
                if (keymaps[l][r][c] == keycode) {
                    *row = r;
                    *col = c;
                    return true;
                }
            }
        }
    }
    return false;
}

uint16_t convert_keycode_to_layer(uint8_t source_layer, uint8_t target_layer, uint16_t source_keycode) {
    uint8_t row, col;
    if (find_keycode_in_layer(source_layer, source_keycode, &row, &col)) {
        return keymaps[target_layer][row][col];
    }
    return KC_NO;
}

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

#define ROLLING_TO_MOD_TIMEOUT 40 // wait time for pending rolling to mod.(ms)

uint16_t tap_hold_get_tap_keycode(uint16_t keycode) {
    switch (keycode) {
        case KC_LC_A : return KC_A;
        case KC_LS_Z : return KC_Z;
        case KC_RC_CL: return KC_SCLN;
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

#define PENDING_TAP_CAPACITY 7

static uint8_t pressed_key_count = 0;

// Tapを保留するための情報構造体
typedef struct {
    uint8_t  slot_id;        // このスロットの識別番号
    bool     is_active;      // このスロットが使用中か
    bool     is_pending;     // tap-pressが保留中か
    uint16_t keycode;        // 元のキーコード
    uint16_t pressed_time;   // このキーが押された時刻
    uint16_t release_time;   // このキーが離された時刻
    deferred_token tapping_pending_token; // TAPPING_TERMの遅延トークン Mod-tapキー以外では常に0
    deferred_token rolling_pending_token; // ROLLING_TO_MOD_TIMEOUTの遅延トークン Mod-tapキー以外では常に0
} pending_tap_t;

static pending_tap_t pending_taps[PENDING_TAP_CAPACITY];

void keyboard_post_init_user(void) {
    uint8_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        pending_taps[i].slot_id      = i;
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
    uint8_t i;
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
    uint8_t i, j;
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
bool exist_pending_key(void) {
    uint8_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].is_active && pending_taps[i].is_pending) return true;
    }
    return false;
}

void tap_code_print(uint16_t keycode) {
    uprintf("  tap_code_print: %s\n", get_keycode_str(keycode));
    tap_code(keycode);
}
void register_code_print(uint16_t keycode) {
    uprintf("  register_code_print: %s\n", get_keycode_str(keycode));
    register_code(keycode);
}
void unregister_code_print(uint16_t keycode) {
    uprintf("  unregister_code_print: %s\n", get_keycode_str(keycode));
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
    uprintf("  * delayed_key_tap_callback: %s\n", get_keycode_str(pending_taps[slot].keycode));

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
    uprintf("  * delayed_key_rolling_callback: %s\n", get_keycode_str(pending_taps[slot].keycode));

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
    if      (record->event.pressed) pressed_key_count++;
    else if (pressed_key_count > 0) pressed_key_count--;

    if (record->event.pressed) uprintf("Key Press  : %s\n", get_keycode_str(keycode));
    else                       uprintf("Key Release: %s\n", get_keycode_str(keycode));

    bool is_mod_tap_key = (tap_hold_get_tap_keycode(keycode) != keycode);
    if (!is_mod_tap_key && !exist_pending_key()) return true;

    if (record->event.pressed) {
        slot = add_pressed_key(keycode);
    } else {
        slot = remove_pressed_key(keycode, &existYounger);
    }
    xprintf(" <pressed_key_count: %u>\n", pressed_key_count);
//    xprintf("  <record->tap.count: %u>\n", record->tap.count);

    if (record->event.pressed) {
        if (is_mod_tap_key) {
            pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
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
            print("    !is_pending -> return true\n");
            return true;
        }

        if (pending_taps[slot].tapping_pending_token != 0) {
            cancel_deferred_exec(pending_taps[slot].tapping_pending_token);
            pending_taps[slot].tapping_pending_token = 0;

            if (existYounger) {
                pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
                return false;
            }
        }

        pending_taps[slot].is_pending = false;
        pending_taps[slot].is_active  = false;

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


        uint16_t sendKeycode = pending_taps[slot].keycode;
        if (layer_no != 0) {
            sendKeycode = convert_keycode_to_layer(-1, layer_no, sendKeycode);
            uprintf("   %s -> %s \n", get_keycode_str(pending_taps[slot].keycode), get_keycode_str(sendKeycode));
        }

        tap_code_print(tap_hold_get_tap_keycode(sendKeycode));

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


