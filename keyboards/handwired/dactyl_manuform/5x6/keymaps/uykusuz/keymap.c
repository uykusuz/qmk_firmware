/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LAYER_LEFT_1 1
#define _LAYER_RIGHT_1 2
#define _LAYER_LEFT_2 3
#define _LAYER_RIGHT_2 4

#define LAYER_LEFT_1 LT(_LAYER_LEFT_1, KC_SPACE)
#define LAYER_RIGHT_1 LT(_LAYER_RIGHT_1, KC_ENTER)
#define LAYER_LEFT_2 MO(_LAYER_LEFT_2)
#define LAYER_RIGHT_2 MO(_LAYER_RIGHT_2)

#define UMLAUT_O LGUI(KC_O)
#define UMLAUT_A LGUI(KC_A)
#define UMLAUT_U LGUI(KC_U)
#define UMLAUT_S LGUI(KC_S)

#define IDE_RUN         LSFT(KC_F10)
#define IDE_DEBUG       LSFT(KC_F9)
#define IDE_STEPOVER    KC_F8
#define IDE_STEPINTO    KC_F7
#define IDE_STEPOUT     LSFT(KC_F8)
#define IDE_RESUME      KC_F9
#define IDE_REFACTOR    MEH(KC_T)
#define IDE_BUILD       LCTL(KC_F9)
#define IDE_BREAKPOINT  LCTL(KC_F8)

#define KEYMAP_LAYER_EMPTY_ROW_0  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_1  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_2  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_3  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_4                      _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_5   _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_6   _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_7   _______,_______

#define KEYMAP_LAYER_1_LEFT_ROW_0_LEFT  _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5
#define KEYMAP_LAYER_1_LEFT_ROW_1_LEFT  _______ , _______ , _______ , _______ , _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_2_LEFT  _______ , KC_LCBR , KC_RCBR , KC_LBRC , KC_RBRC , KC_MINS
#define KEYMAP_LAYER_1_LEFT_ROW_3_LEFT  _______ , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC
#define KEYMAP_LAYER_1_LEFT_ROW_4_LEFT                     _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_5_LEFT                                           _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_6_LEFT                                           _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_7_LEFT                                           _______,_______

#define KEYMAP_LAYER_1_RIGHT_ROW_0_RIGHT KC_F6   ,   KC_F7 , KC_F8   , KC_F9   , KC_F10  , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_1_RIGHT _______ , _______   , _______ , _______ , _______ ,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_2_RIGHT KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , _______ , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_3_RIGHT KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_4_RIGHT                      _______,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_5_RIGHT KC_LSHIFT , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_6_RIGHT KC_F11    , KC_F12
#define KEYMAP_LAYER_1_RIGHT_ROW_7_RIGHT KC_HOME   , KC_END

#define KEYMAP_LAYER_2_LEFT_ROW_0_LEFT  _______ , _______   , _______ , _______ , _______ , _______
#define KEYMAP_LAYER_2_LEFT_ROW_1_LEFT  _______ , _______ , _______ , KC_BSLASH , KC_PIPE , _______
#define KEYMAP_LAYER_2_LEFT_ROW_2_LEFT  _______ , KC_QUOTE  , KC_DQT  , KC_PLUS , KC_EQL  , KC_UNDERSCORE
#define KEYMAP_LAYER_2_LEFT_ROW_3_LEFT  _______ , _______   , _______ , _______ , _______ ,_______
#define KEYMAP_LAYER_2_LEFT_ROW_4_LEFT                      _______,_______
#define KEYMAP_LAYER_2_LEFT_ROW_5_LEFT                                            _______,_______
#define KEYMAP_LAYER_2_LEFT_ROW_6_LEFT                                            _______,_______
#define KEYMAP_LAYER_2_LEFT_ROW_7_LEFT                                            _______,_______

#define KEYMAP_LAYER_2_RIGHT_ROW_0_RIGHT _______ , _______ , _______ , _______ , _______ , _______
#define KEYMAP_LAYER_2_RIGHT_ROW_1_RIGHT _______ , IDE_REFACTOR , IDE_RUN , IDE_DEBUG , IDE_BUILD , _______
#define KEYMAP_LAYER_2_RIGHT_ROW_2_RIGHT IDE_BREAKPOINT , IDE_STEPOVER , IDE_STEPINTO , IDE_STEPOUT , IDE_RESUME , _______
#define KEYMAP_LAYER_2_RIGHT_ROW_3_RIGHT UMLAUT_A , UMLAUT_U , UMLAUT_S , UMLAUT_O , _______ , _______
#define KEYMAP_LAYER_2_RIGHT_ROW_4_RIGHT                      _______,_______
#define KEYMAP_LAYER_2_RIGHT_ROW_5_RIGHT _______,_______
#define KEYMAP_LAYER_2_RIGHT_ROW_6_RIGHT _______,_______
#define KEYMAP_LAYER_2_RIGHT_ROW_7_RIGHT _______,_______

#define LAYOUT_WRAPPER(...) LAYOUT_5x6(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
    KC_GRAVE, KC_1  , KC_2 , KC_3 , KC_4 , KC_5  ,               KC_6  , KC_7  , KC_8    , KC_9   , KC_0    , KC_PAUSE,
    _______ , KC_Q  , KC_W , KC_E , KC_R , KC_T  ,               KC_Y  , KC_U  , KC_I    , KC_O   , KC_P    , KC_VOLU ,
    KC_CAPS , KC_A  , KC_S , KC_D , KC_F , KC_G  ,               KC_H  , KC_J , KC_K , KC_L  , KC_SCLN , KC_VOLD ,
    RESET   , KC_Z  , KC_X , KC_C , LSFT_T(KC_V) , KC_B  ,       KC_N  , LSFT_T(KC_M)  , KC_COMM , KC_DOT , KC_SLSH , KC_LALT,
                       _______ , _______ ,                                _______ , _______,
                                  KC_ESC  , LAYER_RIGHT_1 ,      LAYER_LEFT_1  , OSM(MOD_RCTL),
                                  KC_TAB  , CTL_T(KC_DEL) ,      CTL_T(KC_BSPACE) , KC_TAB ,
                                  _______ , LAYER_RIGHT_2 ,      LAYER_LEFT_2 , _______
  ),

  [_LAYER_LEFT_1] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_1_LEFT_ROW_0_LEFT , KEYMAP_LAYER_EMPTY_ROW_0 ,
    KEYMAP_LAYER_1_LEFT_ROW_1_LEFT , KEYMAP_LAYER_EMPTY_ROW_1 ,
    KEYMAP_LAYER_1_LEFT_ROW_2_LEFT , KEYMAP_LAYER_EMPTY_ROW_2 ,
    KEYMAP_LAYER_1_LEFT_ROW_3_LEFT , KEYMAP_LAYER_EMPTY_ROW_3 ,
    KEYMAP_LAYER_1_LEFT_ROW_4_LEFT , KEYMAP_LAYER_EMPTY_ROW_4 ,
    KEYMAP_LAYER_1_LEFT_ROW_5_LEFT , KEYMAP_LAYER_EMPTY_ROW_5 ,
    KEYMAP_LAYER_1_LEFT_ROW_6_LEFT , KEYMAP_LAYER_EMPTY_ROW_6 ,
    KEYMAP_LAYER_1_LEFT_ROW_7_LEFT , KEYMAP_LAYER_EMPTY_ROW_7
  ),

  [_LAYER_RIGHT_1] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_EMPTY_ROW_0 , KEYMAP_LAYER_1_RIGHT_ROW_0_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_1 , KEYMAP_LAYER_1_RIGHT_ROW_1_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_2 , KEYMAP_LAYER_1_RIGHT_ROW_2_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_3 , KEYMAP_LAYER_1_RIGHT_ROW_3_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_4 , KEYMAP_LAYER_1_RIGHT_ROW_4_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_5 , KEYMAP_LAYER_1_RIGHT_ROW_5_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_6 , KEYMAP_LAYER_1_RIGHT_ROW_6_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_7 , KEYMAP_LAYER_1_RIGHT_ROW_7_RIGHT
  ),

  [_LAYER_LEFT_2] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_2_LEFT_ROW_0_LEFT , KEYMAP_LAYER_EMPTY_ROW_0 ,
    KEYMAP_LAYER_2_LEFT_ROW_1_LEFT , KEYMAP_LAYER_EMPTY_ROW_1 ,
    KEYMAP_LAYER_2_LEFT_ROW_2_LEFT , KEYMAP_LAYER_EMPTY_ROW_2 ,
    KEYMAP_LAYER_2_LEFT_ROW_3_LEFT , KEYMAP_LAYER_EMPTY_ROW_3 ,
    KEYMAP_LAYER_2_LEFT_ROW_4_LEFT , KEYMAP_LAYER_EMPTY_ROW_4 ,
    KEYMAP_LAYER_2_LEFT_ROW_5_LEFT , KEYMAP_LAYER_EMPTY_ROW_5 ,
    KEYMAP_LAYER_2_LEFT_ROW_6_LEFT , KEYMAP_LAYER_EMPTY_ROW_6 ,
    KEYMAP_LAYER_2_LEFT_ROW_7_LEFT , KEYMAP_LAYER_EMPTY_ROW_7
  ),

  [_LAYER_RIGHT_2] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_EMPTY_ROW_0 , KEYMAP_LAYER_2_RIGHT_ROW_0_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_1 , KEYMAP_LAYER_2_RIGHT_ROW_1_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_2 , KEYMAP_LAYER_2_RIGHT_ROW_2_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_3 , KEYMAP_LAYER_2_RIGHT_ROW_3_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_4 , KEYMAP_LAYER_2_RIGHT_ROW_4_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_5 , KEYMAP_LAYER_2_RIGHT_ROW_5_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_6 , KEYMAP_LAYER_2_RIGHT_ROW_6_RIGHT ,
    KEYMAP_LAYER_EMPTY_ROW_7 , KEYMAP_LAYER_2_RIGHT_ROW_7_RIGHT
  )
};

