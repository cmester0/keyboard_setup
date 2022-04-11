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

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYM,
  NUM,
  NAV,
  COM,
};

/* // Shortcut to make keymap more readable */ 
#define LT_L_HOME0 LT(L_CTRL,  KC_A)
#define LT_L_HOME1 LT(_NAV,    KC_S)
#define LT_L_HOME2 LT(L_SHIFT, KC_D)
#define LT_L_HOME3 LT(_COM,    KC_F)
#define LT_L_HOME4 LT(_NUM,    KC_SPC)

#define LT_R_HOME0 LT(L_CTRL,  KC_MINUS)
#define LT_R_HOME1 LT(_NAV,    KC_L)
#define LT_R_HOME2 LT(L_SHIFT, KC_K)
#define LT_R_HOME3 LT(_COM,    KC_J)
#define LT_R_HOME4 LT(_SYM,    KC_BSPC)

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Q,      KC_W,      KC_E    ,  KC_R   ,   KC_T   ,  XXXXXXX ,                             XXXXXXX ,   KC_Y   , LT_U_NAV ,   KC_I   ,   KC_O   ,  KC_P    , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,LT_L_HOME0,LT_L_HOME1,LT_L_HOME2,LT_L_HOME3,  KC_G   ,  XXXXXXX ,                             XXXXXXX ,   KC_H   ,LT_R_HOME3,LT_R_HOME2,LT_R_HOME1,LT_R_HOME0, XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_Z    ,  KC_X    ,  KC_C    ,  KC_V    ,  KC_B   ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   KC_N   ,   KC_M   ,  KC_COMM ,  KC_DOT ,  KC_SLSH ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT  ,   LT_L_HOME4,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,   LT_R_HOME4,          KC_TAB ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_SYM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  KC_EXLM ,  KC_AT   , KC_HASH  , KC_DLR  , KC_PERC  ,  XXXXXXX ,                             XXXXXXX ,  KC_CIRC ,  KC_AMPR ,  KC_LPRN ,  KC_RPRN , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_RBRC ,  KC_BSLS , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_LCBR ,  KC_RCBR , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,     KC_BSPC ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

  [_NUM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_4   ,   KC_5   ,   KC_6   ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX ,  XXXXXXX ,   KC_1   ,   KC_2   ,   KC_3   , XXXXXXX ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,   KC_7   ,   KC_8   ,   KC_9   , XXXXXXX ,  XXXXXXX ,
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
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX , XXXXXXX ,   KC_LEFT ,  KC_UP   ,  KC_RGHT ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,                             XXXXXXX , XXXXXXX ,   XXXXXXX , KC_DOWN  , XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,      XXXXXXX ,         XXXXXXX ,  XXXXXXX , XXXXXXX , XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),  

  [_COM] = LAYOUT(
  //┌─────┬─────┬─────┬─────┬─────┬─────┐                                                ┌─────┬─────┬─────┬─────┬─────┬─────┐
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,                                                   XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,   KC_F1  ,   KC_F2  ,   KC_F3  ,  KC_F4  ,   KC_F5  ,  RESET   ,                              RESET  ,   KC_F6  ,   KC_F7  ,   KC_F8  ,   KC_F9  ,  KC_F10 , XXXXXXX ,
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┤                          ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  KC_ENT  ,  XXXXXXX , XXXXXXX ,                              XXXXXXX ,  XXXXXXX ,  KC_ENT  ,  KC_VOLU , XXXXXXX ,  XXXXXXX ,  XXXXXXX , 
  //├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┐    ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_VOLD ,  KC_F11 ,  KC_F12 ,  XXXXXXX ,
  //├─────┼─────┼─────┼─────┼───────────┼─────┼─────┤    ├─────┼─────┼───────────┼─────┼─────┼─────┼─────┤
       XXXXXXX ,  XXXXXXX ,  XXXXXXX , KC_LALT ,      KC_SPC  ,         XXXXXXX ,  XXXXXXX ,       XXXXXXX ,  XXXXXXX ,      KC_DEL ,         XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX
  //└─────┴─────┴─────┴─────┘  └─────┘     └─────┴─────┘    └─────┴─────┘  └─────┘     └─────┴─────┴─────┴─────┘
  ),

};

// design filosofi
