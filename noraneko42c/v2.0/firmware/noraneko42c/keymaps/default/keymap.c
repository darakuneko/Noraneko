/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    	MT(MOD_LALT,KC_ESC), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, 
    	MT(MOD_LCTL,KC_TAB), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  
    	KC_LSFT,             KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, 
		                           KC_LGUI, MO(1),   MT(MOD_LALT, KC_SPC),       MT(MOD_RALT,KC_ENT), LT(1,KC_BSPC), KC_RGUI                         \
	),
 
	[1] = LAYOUT(
		KC_GRV,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,    KC_LBRC, KC_RBRC,  KC_MINS, KC_EQL,
		KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO, KC_NO, 
		KC_LSFT,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_NO,   KC_NO,   KC_NO,   KC_SCLN, KC_QUOT,   KC_NO,
		KC_LALT,   KC_LSFT,   MO(2),   MO(2),   KC_LSFT,   MO(3)
	),

	[2] = LAYOUT(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
	),
  
	[3] = LAYOUT(
		RGB_VAI,  RGB_SAI,    RGB_HUI,    RGB_SPI,    RGB_MOD,    RGB_TOG,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
		RGB_VAD,  RGB_SAD,    RGB_HUD,    RGB_SPD,   RGB_RMOD,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
		KC_NO,   KC_NO,   EE_CLR,   QK_BOOT,   KC_NO,   KC_NO
	),

};


led_config_t g_led_config = { {
  // Key Matrix to LED Index
    { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, }, 
    { 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, }, 
    { 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, }, 
    { NO_LED, NO_LED, NO_LED, 36, 37, 38, 39, 40, 41 }
    }, {
  // LED Index to Physical Position 
  {0, 0},     {20, 0},     {40, 0},     {60, 0},     {80, 0},     {100, 0},    {120, 0},     {140, 0},     {160, 0},     {180, 0},     {200, 0},     {224, 0},  
  {0, 21},    {20, 21},    {40, 21},    {60, 21},    {80, 21},    {100, 21},   {120, 21},    {140, 21},    {160, 21},    {180, 21},    {200, 21},    {224, 21},  
  {0, 42},    {20, 42},    {40, 42},    {60, 42},    {80, 42},    {100, 42},   {120, 42},    {140, 42},    {160, 42},    {180, 42},    {200, 42},    {224, 42},  
                                        {60, 64},    {80, 64},    {100, 64},   {120, 64},    {140, 64},    {160, 64}
  }, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2
  } 
};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) { 
  int is_layer = get_highest_layer(layer_state|default_layer_state);  
  HSV hsv = {0, 255, rgblight_get_val()};
  if (is_layer == 1) {
    hsv.h = 191; //PURPLE
  } else if (is_layer == 2)  {
    hsv.h = 85; //GREEN
  } else if (is_layer == 3)  {
    hsv.h = 43; //YELLOW
  } else {
    hsv.h = 128; //CYAN
  }
  RGB rgb = hsv_to_rgb(hsv);

  
  for (uint8_t i = led_min; i <= led_max -1; i++) {
      if (HAS_FLAGS(g_led_config.flags[i], 0x02)) {
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
      }
  }

  const led_t led_state = host_keyboard_led_state();
  HSV state_hsv = {0, 255, rgblight_get_val()};
  state_hsv.h = 0;
  RGB state_rgb = hsv_to_rgb(state_hsv);

  if (led_state.num_lock) {
        rgb_matrix_set_color(54, state_rgb.r, state_rgb.g, state_rgb.b);
  }
  if (led_state.caps_lock || is_caps_word_on()) {
        rgb_matrix_set_color(55, state_rgb.r, state_rgb.g, state_rgb.b);
  }
  if (led_state.scroll_lock) {
        rgb_matrix_set_color(56, state_rgb.r, state_rgb.g, state_rgb.b);
  }
}  


