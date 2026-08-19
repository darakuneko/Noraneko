/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    	KC_ESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    	MT(MOD_LCTL,KC_TAB), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    	KC_LSFT,             KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
		                           KC_LGUI, KC_LALT,   LT(1, KC_SPC),       LT(1, KC_ENT), KC_BSPC, KC_RGUI                         \
	),

	[1] = LAYOUT(
		KC_GRV,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,    KC_LBRC, KC_RBRC,  KC_MINS, KC_EQL,
		KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO, KC_NO,
		KC_LSFT,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_NO,   KC_NO,   KC_NO,   KC_SCLN, KC_QUOT,   KC_NO,
		KC_LALT,   MO(2),   KC_LSFT,   KC_LSFT,   MO(2),   MO(3)
	),

	[2] = LAYOUT(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
	),

	[3] = LAYOUT(
		KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
		KC_NO,   KC_NO,   EE_CLR,   QK_BOOT,   KC_NO,   KC_NO
	),

};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  int rgb_matrix_mode = rgb_matrix_get_mode();
  if(rgb_matrix_mode != 1){ return false; }

  int curr_layer = get_highest_layer(layer_state|default_layer_state);
  HSV hsv = {0, 255, rgb_matrix_get_val()};

  if (curr_layer == 1) {
    hsv.h = 43; //YELLOW
  } else if (curr_layer == 2)  {
    hsv.h = 11; //CORAL
  } else if (curr_layer == 3)  {
    hsv.h = 191; //PURPLE
  } else {
    hsv.h = 128; //CYAN
  }
  RGB rgb = hsv_to_rgb(hsv);

  for (uint8_t i = led_min; i <= led_max; i++) {
    rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
  }
  return false;
};
