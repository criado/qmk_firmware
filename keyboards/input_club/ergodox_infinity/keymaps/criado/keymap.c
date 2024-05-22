// my file is in keyboards/input_club/ergodox_infinity/keymaps/criado/keymap.c
#include QMK_KEYBOARD_H
#include "version.h"

enum custom_layers {
    BASE,   // default layer
    SYMB,   // symbols
    EXA,   // cheese
};


enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  VRSN,
  RGB_SLD,
  EXA_A,
  EXA_S,
  EXA_D,
  EXA_J,
  EXA_K,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `~   |   1  |   2  |   3  |   4  |   5  | Caps |           | esc  |   6  |   7  |   8  |   9  |   0  |  nada  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  '"  |           |  \  |   Y  |   U  |   I  |   O  |   P  |Backspace|
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |GUI/esc |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |Ctl+ent |
 * |--------+------+------+------+------+------| -    |           | =    |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Ctrl  |Suuper|Alt   |   [  |   ]  |                                       | Left |  Down  | Up |Right |  L2  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Pgup| pgdown|       | Home |End   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Print|       | Pause|        |Shift+|
 *                                 | Space|tab   |------|       |------|Backsp  |scroll|
 *                                 |      |      | L1   |       | L1   |        |lock  |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
// CTL_T(), GUI_T()
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_GRV,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_CAPS,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_QUOT,
        GUI_T(KC_ESC),        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_MINUS,
        KC_LCTL,KC_LGUI,   KC_LALT,  KC_LBRC,KC_RBRC,
                                              KC_PGUP,  KC_PGDN,
                                                              KC_PSCR,
                                               KC_SPC,KC_TAB,TT(SYMB),
        // right hand
             KC_ESC,     KC_6,   KC_7,  KC_8,   KC_9,   KC_0,             KC_NO,
             KC_BSLS,    KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,             KC_BSPC,
                          KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,CTL_T(KC_ENT),
             KC_EQL,KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,   KC_RSFT,
                                  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,   TT(EXA),
             KC_HOME,        KC_END,
             KC_PAUSE,
             TT(SYMB),KC_BSPC, LSFT_T(KC_SCROLL_LOCK)
    ),
/* Keymap 1: Symbol Layer
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |F1    |F2    |F2    |...   |      |      |           |      |      |      |      |      |      |F11     |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |F12     |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |     |     |     |      |      |------|           |------|      |     |     |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       KC_TRNS,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
        KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS, KC_F12,
                 KC_TRNS, KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
                          KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Hack Match cheese
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |F2    |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |A     |S     |D     |      |      |------|           |------|      |K     |J     |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
//[EXA] = LAYOUT_ergodox(
//       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
//       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
//       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,
//                                           KC_TRNS, KC_TRNS,
//                                                    KC_TRNS,
//                                  KC_TRNS, KC_TRNS, KC_TRNS,
//    // right hand
//       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY,
//       KC_TRNS,  KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,
//                          KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,
//       KC_TRNS, KC_TRNS,
//       KC_TRNS,
//       KC_TRNS, KC_TRNS, KC_WBAK
//),

[EXA] = LAYOUT_ergodox(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, EXA_A,    EXA_S,    EXA_D, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_TRNS,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, EXA_J   , EXA_K,    KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
    case EXA_A:
      if(record->event.pressed) {
        //SEND_STRING(SS_TAP(X_F2)SS_DELAY(16)"a"SS_TAP(X_F2));
        tap_code_delay(KC_F2, 20);
        tap_code_delay(KC_A, 20);
        tap_code_delay(KC_F2, 20);
      }
      return true;
      break;
    case EXA_S:
      if(record->event.pressed) {
        tap_code_delay(KC_F2, 20);
        register_code(KC_S);
      }
      else {
        unregister_code(KC_S);
        tap_code_delay(KC_F2, 20);
      }
      return true;
      break;
    case EXA_D:
      if(record->event.pressed) {
        tap_code_delay(KC_F2, 20);
        tap_code_delay(KC_D, 20);
        tap_code_delay(KC_F2, 20);
      }
      return true;
      break;
    case EXA_J:
      if(record->event.pressed) {
        tap_code_delay(KC_F2, 20);
        tap_code_delay(KC_J, 20);
        tap_code_delay(KC_F2, 20);
      }
      return true;
      break;
    case EXA_K:
      if(record->event.pressed) {
        tap_code_delay(KC_F2, 20);
        tap_code_delay(KC_K, 20);
        tap_code_delay(KC_F2, 20);
      }
      return true;
      break;
  }
  return true;
}

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = get_highest_layer(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

}
