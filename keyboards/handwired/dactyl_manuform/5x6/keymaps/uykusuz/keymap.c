/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LAYER_LEFT 1
#define _LAYER_RIGHT 2

#define LAYER_LEFT_TAB LT(_LAYER_LEFT, KC_TAB)
#define LAYER_RIGHT_ESC LT(_LAYER_RIGHT, KC_ESC)
#define LAYER_RIGHT_CTL_SFT LM(_LAYER_RIGHT, MOD_LCTL | MOD_LSFT)
#define LAYER_RIGHT_SFT LM(_LAYER_RIGHT, MOD_LSFT)

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
#define IDE_BRKPT       LCTL(KC_F8)
#define IDE_FIND        LCTL(LSFT(KC_F))
#define IDE_REPLACE     LCTL(LSFT(KC_R))
#define IDE_OPEN        LCTL(LSFT(KC_O))
#define IDE_USAGES      LALT(KC_F7)
#define IDE_GOTOIMPL    LCTL(LALT(KC_B))
#define IDE_GOTOTEST    LCTL(LSFT(KC_T))
#define IDE_SELECTFILE  LALT(KC_F1)

#define CTL_SFT_SPC     LCTL(LSFT(KC_SPACE))

#define KEYMAP_LAYER_EMPTY_ROW_0  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_1  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_2  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_3  _______,_______,_______,_______,_______,_______
#define KEYMAP_LAYER_EMPTY_ROW_4                      _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_5   _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_6   _______,_______
#define KEYMAP_LAYER_EMPTY_ROW_7   _______,_______

#define KEYMAP_LAYER_1_LEFT_ROW_0_LEFT  _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5
#define KEYMAP_LAYER_1_LEFT_ROW_1_LEFT  _______ , UMLAUT_A , UMLAUT_S , KC_LBRC , KC_RBRC , KC_UNDERSCORE
#define KEYMAP_LAYER_1_LEFT_ROW_2_LEFT  _______ , KC_PLUS , KC_EQL  , KC_LPRN , KC_RPRN , KC_MINS
#define KEYMAP_LAYER_1_LEFT_ROW_3_LEFT  _______ , UMLAUT_U , UMLAUT_O , KC_LCBR , KC_RCBR , KC_APP
#define KEYMAP_LAYER_1_LEFT_ROW_4_LEFT                     _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_5_LEFT                                           IDE_FIND , IDE_OPEN
#define KEYMAP_LAYER_1_LEFT_ROW_6_LEFT                                           IDE_REPLACE , IDE_USAGES
#define KEYMAP_LAYER_1_LEFT_ROW_7_LEFT                                           _______ , IDE_REFACTOR

#define KEYMAP_LAYER_1_LEFT_ROW_0_RIGHT _______ , _______ , _______ , _______ , _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_1_RIGHT _______ , _______ , _______ , _______ , _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_2_RIGHT KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_3_RIGHT _______ , KC_WH_D , KC_WH_U , _______ , _______ , _______
#define KEYMAP_LAYER_1_LEFT_ROW_4_RIGHT                      _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_5_RIGHT _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_6_RIGHT _______,_______
#define KEYMAP_LAYER_1_LEFT_ROW_7_RIGHT _______,_______

#define KEYMAP_LAYER_1_RIGHT_ROW_0_LEFT _______, _______,_______,_______,_______,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_1_LEFT _______ , _______  , IDE_DEBUG , IDE_RUN , IDE_BUILD , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_2_LEFT _______ , IDE_RESUME , IDE_STEPOUT, IDE_STEPINTO , IDE_STEPOVER, IDE_BRKPT
#define KEYMAP_LAYER_1_RIGHT_ROW_3_LEFT _______, _______, IDE_SELECTFILE , IDE_GOTOTEST , IDE_GOTOIMPL ,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_4_LEFT                      _______,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_5_LEFT                                  _______,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_6_LEFT                                  _______,_______
#define KEYMAP_LAYER_1_RIGHT_ROW_7_LEFT                                  _______,_______

#define KEYMAP_LAYER_1_RIGHT_ROW_0_RIGHT KC_F6    , KC_F7   , KC_F8     , KC_F9    , KC_F10  , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_1_RIGHT KC_QUOTE , KC_DQT  , KC_BSLASH , KC_PIPE  , _______ , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_2_RIGHT KC_LEFT  , KC_DOWN , KC_UP     , KC_RIGHT , _______ , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_3_RIGHT _______  , _______ , _______   , _______  , _______ , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_4_RIGHT                      _______ , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_5_RIGHT KC_LSHIFT , _______
#define KEYMAP_LAYER_1_RIGHT_ROW_6_RIGHT KC_F11    , KC_F12
#define KEYMAP_LAYER_1_RIGHT_ROW_7_RIGHT KC_HOME   , KC_END

#define LAYOUT_WRAPPER(...) LAYOUT_5x6(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
    RESET   , KC_1  , KC_2 , KC_3 , KC_4 , KC_5  ,              KC_6  , KC_7  , KC_8    , KC_9   , KC_0    , KC_PAUSE,
    _______ , KC_Q  , KC_W , KC_E , KC_R , KC_T  ,              KC_Y  , KC_U  , KC_I    , KC_O   , KC_P    , KC_VOLU ,
    KC_CAPS , KC_A  , KC_S , KC_D , KC_F , KC_G  ,              KC_H  , KC_J , KC_K , KC_L  , KC_SCLN , KC_VOLD ,
    KC_GRAVE, KC_Z  , KC_X , KC_C , KC_V , KC_B  ,              KC_N  , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_LALT,
                       _______ , _______ ,                                _______ , _______,
                       LAYER_RIGHT_ESC , LSFT_T(KC_ENTER) ,       LSFT_T(KC_SPACE) , LAYER_LEFT_TAB,
                                  CTL_SFT_SPC , CTL_T(KC_DEL) ,   CTL_T(KC_BSPACE) , _______  ,
                                  LAYER_RIGHT_SFT , LAYER_RIGHT_CTL_SFT,  KC_RCTRL , _______
  ),

  [_LAYER_LEFT] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_1_LEFT_ROW_0_LEFT , KEYMAP_LAYER_1_LEFT_ROW_0_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_1_LEFT , KEYMAP_LAYER_1_LEFT_ROW_1_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_2_LEFT , KEYMAP_LAYER_1_LEFT_ROW_2_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_3_LEFT , KEYMAP_LAYER_1_LEFT_ROW_3_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_4_LEFT , KEYMAP_LAYER_1_LEFT_ROW_4_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_5_LEFT , KEYMAP_LAYER_1_LEFT_ROW_5_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_6_LEFT , KEYMAP_LAYER_1_LEFT_ROW_6_RIGHT ,
    KEYMAP_LAYER_1_LEFT_ROW_7_LEFT , KEYMAP_LAYER_1_LEFT_ROW_7_RIGHT
  ),

  [_LAYER_RIGHT] = LAYOUT_WRAPPER(
    KEYMAP_LAYER_1_RIGHT_ROW_0_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_0_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_1_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_1_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_2_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_2_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_3_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_3_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_4_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_4_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_5_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_5_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_6_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_6_RIGHT ,
    KEYMAP_LAYER_1_RIGHT_ROW_7_LEFT , KEYMAP_LAYER_1_RIGHT_ROW_7_RIGHT
  ),
};

