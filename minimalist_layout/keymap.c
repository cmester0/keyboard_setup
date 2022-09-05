#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYM 1 
#define _NUM 2
#define _NAV 3
#define _COM 4
#define _PLOVER 5
#define _GAMEING 6

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYM,
  NUM,
  NAV,
  COM,
  PLOVER,
  GAMEING,
};

/* // Shortcut to make keymap more readable */ 
#define L_HOME0 LCTL_T(KC_A)
#define L_HOME1 LT(_NAV,    KC_S)
#define L_HOME2 LSFT_T(KC_D)
#define L_HOME3 LT(_COM,    KC_F)
#define L_HOME4 LT(_NUM,    KC_SPC)

#define R_HOME0 RCTL_T(KC_SCLN)
#define R_HOME1 LT(_NAV,    KC_L)
#define R_HOME2 RSFT_T(KC_K)
#define R_HOME3 LT(_COM,    KC_J)
#define R_HOME4 LT(_SYM,    KC_TAB)

#define DF_GAMEING DF(_GAMEING)
#define DF_PLOVER DF(_PLOVER)
#define DF_QWERTY DF(_QWERTY)

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Q,      KC_W,      KC_E    ,  KC_R   ,   KC_T   ,  XXXXXXX ,                             XXXXXXX ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,  KC_P    , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  L_HOME0 ,  L_HOME1 ,  L_HOME2 ,  L_HOME3 ,  KC_G   ,  XXXXXXX ,                             XXXXXXX ,   KC_H   ,  R_HOME3 ,  R_HOME2 ,  R_HOME1 ,  R_HOME0 , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B   ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   KC_N   ,   KC_M   ,  KC_COMM ,  KC_DOT ,  KC_SLSH ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT  ,     L_HOME4 ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     R_HOME4 ,          KC_LGUI ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_SYM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_EXLM ,  KC_AT   , KC_HASH  , KC_DLR  , KC_PERC  ,  XXXXXXX ,                             XXXXXXX ,  KC_CIRC ,  KC_AMPR ,  KC_LPRN ,  KC_RPRN , KC_ASTR ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX , KC_LCTRL ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  KC_MINS ,  KC_EQL  ,  KC_LBRC ,  KC_RBRC , KC_BSLS ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  KC_UNDS ,  KC_PLUS ,  KC_LCBR ,  KC_RCBR , KC_PIPE ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     R_HOME4 ,         KC_LGUI ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_NUM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_4   ,   KC_5   ,   KC_6   , KC_TILD , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_1   ,   KC_2   ,   KC_3   , KC_QUOT ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,   KC_7   ,   KC_8   ,   KC_9   , KC_GRV  ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,        KC_0  ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_NAV] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX , XXXXXXX ,   XXXXXXX ,  XXXXXXX , XXXXXXX  ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX , KC_LCTRL ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX , XXXXXXX ,   KC_LEFT ,  KC_UP   ,  KC_RGHT ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX , XXXXXXX ,   XXXXXXX , KC_DOWN  , XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     R_HOME4 ,         KC_LGUI ,  XXXXXXX , XXXXXXX , XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),  

  [_COM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,   KC_F1  ,   KC_F2  ,   KC_F3  ,  KC_F4  ,   KC_F5  ,  RESET   ,                              RESET  ,   KC_F6  ,   KC_F7  ,   KC_F8  ,   KC_F9  ,  KC_F10 , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX , KC_LCTRL ,  XXXXXXX , XXXXXXX ,  KC_ENT  ,  XXXXXXX , XXXXXXX ,                              XXXXXXX ,  KC_BSPC ,  KC_ENT  ,  KC_VOLU , XXXXXXX ,  XXXXXXX ,  XXXXXXX , 
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  KC_DEL  ,  XXXXXXX ,  KC_VOLD ,  KC_F11 ,  KC_F12 ,DF_GAMEING,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     R_HOME4 ,         KC_LGUI ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_PLOVER] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX  , XXXXXXX  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_4   ,  KC_5    ,  XXXXXXX ,                             XXXXXXX ,   KC_6   ,   KC_7   ,  KC_8    ,  KC_9    ,  KC_0   , KC_LBRC  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Q    ,  KC_W    ,  KC_E    ,  KC_R   ,  KC_T    ,  XXXXXXX ,                             XXXXXXX ,   KC_Y   ,   KC_U   ,  KC_I    ,  KC_O    ,  KC_P   , KC_QUOT  ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_A    ,  KC_S    ,  KC_D    ,  KC_F   ,  KC_G    ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   KC_H   ,   KC_J   ,  KC_K    ,  KC_L   ,  KC_SCLN , XXXXXXX  ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
      DF_QWERTY, XXXXXXX  , XXXXXXX  ,  KC_C    ,      KC_V   ,         KC_SPC  ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,       KC_N   ,         KC_M   ,  KC_LEFT , KC_DOWN  , KC_RGHT
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_GAMEING] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       KC_ESC  ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_4   ,   KC_5   ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       KC_TAB  ,  KC_Q,      KC_W,      KC_E    ,  KC_R   ,   KC_T   ,  XXXXXXX ,                             XXXXXXX ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,  KC_P    , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       KC_LCTRL,  KC_A,      KC_S,      KC_D,      KC_F,      KC_G   ,  XXXXXXX ,                             XXXXXXX ,   KC_H   ,   KC_J   ,   KC_K   ,   KC_L   , KC_MINUS,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B   ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   KC_N   ,   KC_M   ,  KC_COMM ,  KC_DOT ,  KC_SLSH ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       KC_LCTRL,  XXXXXXX ,  XXXXXXX , KC_LALT  ,     KC_SPC ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,    DF_QWERTY,         DF_PLOVER ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

};

// design filosofi
