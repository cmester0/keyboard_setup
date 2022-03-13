#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYM 1
#define _FUN 2
#define _NAV 3
#define _ADJUST 4

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYM,
  FUN,
  NAV,
  ADJUST,
};

/* // Shortcut to make keymap more readable */
#define MOD_ADJUST DF(_ADJUST)
#define MOD_NAV DF(_NAV)

#define MOD_SYM DF(_SYM)
#define MOD_FUN DF(_FUN)

#define LT_Q_CTRL LCTL_T(KC_Q)
// #define LT_Q_CTRL LT(KC_LCTRL, KC_Q)
#define LT_W_ADJ LT(MOD_ADJUST, KC_W)
#define LT_R_NAV LT(MOD_NAV, KC_R)
#define LT_U_NAV LT(MOD_NAV, KC_R)

#define LT_RSFT_MINUS LT(KC_RSFT, KC_MINUS)

#define LT_SPC_SYM LT(MOD_SYM, KC_SPC)
#define LT_BSPC_FUN LT(MOD_FUN, KC_BSPC)


/* bool process_record_user(uint16_t keycode, keyrecord_t *record) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX , LT_Q_CTRL, LT_W_ADJ ,  KC_E    , LT_R_NAV,   KC_T   ,  XXXXXXX ,                             XXXXXXX ,   KC_Y   , LT_U_NAV ,   KC_I   ,   KC_O   ,  KC_P    , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_A    ,  KC_S    ,  KC_D    ,  KC_F    ,  KC_G   ,  XXXXXXX ,                             XXXXXXX ,   KC_H   ,   KC_J   ,   KC_K   ,   KC_L  ,LT_RSFT_MINUS,XXXXXXX,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B   ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,   KC_N   ,   KC_M   , KC_SLSH ,  XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT  ,   LT_SPC_SYM,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   LT_BSPC_FUN,          KC_TAB ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_SYM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,    KC_1  ,   KC_2   ,   KC_3   ,   KC_4  ,    KC_5  ,  XXXXXXX ,                             XXXXXXX ,    KC_6  ,    KC_7  ,    KC_8  ,    KC_9  ,    KC_0  , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,     XXXXXXX ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,      XXXXXXX ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_FUN] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,   KC_F1  ,   KC_F2  ,   KC_F3  ,  KC_F4  ,   KC_F5  ,  XXXXXXX ,                             XXXXXXX ,   KC_F6  ,   KC_F7  ,   KC_F8  ,   KC_F9  ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_VOLD ,  KC_VOLU ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,     XXXXXXX ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,      XXXXXXX ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),
  
 [_NAV] = LAYOUT(
 //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_ENTER , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX , KC_ENTER ,  XXXXXXX ,  XXXXXXX ,  KC_BSPC , XXXXXXX ,  
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,     XXXXXXX ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     XXXXXXX ,         XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX
 //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
 ),
 
 [_ADJUST] = LAYOUT(
 //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,   KC_UP  ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      XXXXXXX , KC_LCTRL ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  KC_LEFT ,  KC_DOWN , KC_RIGHT , XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       RESET  ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
 //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
      XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,     KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     XXXXXXX ,         XXXXXXX  , XXXXXXX ,  XXXXXXX ,  XXXXXXX
 //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
 ),

};

// design filosofi



//  [_QWERTY] = LAYOUT(
//  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  KC_Q    ,  KC_W    ,  KC_E    ,  KC_R    , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_U   ,   KC_I   ,   KC_O   ,  KC_P    , XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  KC_A    ,  KC_S    ,  KC_D    ,  KC_F    , XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_J   ,   KC_K   ,   KC_L   , KC_SCLN ,  XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_C    ,     KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     KC_QUOT ,         KC_SLSH ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
//  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
//  ),



// Empty:
//  [_FUN] = LAYOUT(
//  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,
//  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
//       XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,     XXXXXXX ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,      XXXXXXX ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
//  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
//  ),
