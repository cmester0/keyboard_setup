#include QMK_KEYBOARD_H

#include "keyboards/gboards/g/keymap_combo.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMB,
  ADJUST,
};

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_ADJUST MO(_ADJUST)
#define KC_QWERTY DF(_QWERTY)

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       KC_ESC ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_4    ,  KC_5   ,                                                    KC_6    ,  KC_7   ,   KC_8   ,   KC_9   ,  KC_0    , KC_BSPC  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       KC_TAB  ,  KC_Q    ,  KC_W    ,  KC_E    ,  KC_R    ,  KC_T   , KC_PMNS  ,                             SYM_L   ,  KC_Y    ,   KC_U   ,   KC_I   ,   KC_O   ,  KC_P    , KC_MINUS ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      KC_LCTRL ,  KC_A    ,  KC_S    ,  KC_D    ,  KC_F    ,  KC_G   , KC_LBRC  ,                             KC_RBRC ,  KC_H    ,   KC_J   ,   KC_K   ,   KC_L   , KC_SCLN ,  KC_ENT  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       KC_LSFT ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B   , KC_ADJUST, BL_TOGG  ,       KC_GRAVE, KC_BSLASH, KC_COMM  ,   KC_N   ,   KC_M   , KC_DOT  ,   KC_UP  ,  KC_RSFT ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
      KC_LCTRL , XXXXXXX  , KC_LGUI  , KC_ALAS  ,     KC_SPC  ,        KC_SPC   , KC_DEL   ,        KC_F5   ,KC_EQL  ,      KC_QUOT ,         KC_SLSH ,  KC_LEFT , KC_DOWN  , KC_RGHT
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_SYMB] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
      _______  , KC_F1    , KC_F2   ,  KC_F3    , KC_F4   , KC_F5    ,                                                    KC_F6  , KC_F7    , KC_F8    , KC_F9    , KC_F10   , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      _______  , KC_EXLM  , KC_AT   ,  KC_LCBR  , KC_RCBR , KC_PIPE  , RESET ,                                _______ , KC_PSLS  , KC_P7    , KC_P8    , KC_P9    , KC_PMNS  , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      _______  , KC_HASH  , KC_DLR  ,  KC_LBRC  , KC_RBRC , KC_GRV   , _______ ,                              _______ , KC_PAST  , KC_P4    , KC_P5    , KC_P6    , KC_PPLS , XXXXXXX  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      _______  , KC_PERC  , KC_CIRC ,  KC_LPRN  , KC_RPRN , KC_TILD  , _______ ,  _______  ,       _______ ,  _______ , XXXXXXX  , KC_P1    , KC_P2    , KC_P3   , KC_PENT  , XXXXXXX  ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
      _______  , _______  , _______  , _______  ,     _______ ,        _______  , _______  ,       _______ ,  _______ ,      KC_P0   ,        KC_P0    , KC_PDOT , KC_PENT  , XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4  ,  KC_F5   ,                                                    KC_F6   ,  KC_F7  ,  KC_F8   ,  KC_F9   ,  KC_F10  , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  RESET   ,  RGB_M_P ,  RGB_TOG ,  RGB_MOD , RGB_HUD ,  RGB_HUI ,                             RGB_SAD ,  RGB_SAI ,  RGB_VAD ,  RGB_VAI ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX,KC_SYSTEM_SLEEP,XXXXXXX, XXXXXXX  , XXXXXXX ,  XXXXXXX , _______  , XXXXXXX  ,       XXXXXXX , _______ ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX , XXXXXXX  ,  XXXXXXX ,  XXXXXXX ,    XXXXXXX  ,        XXXXXXX  , XXXXXXX  ,       XXXXXXX , XXXXXXX  ,     XXXXXXX ,        XXXXXXX  ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),
};
