// Copyright 2022 Sebastian Dümcke
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,				KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
					KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,				KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, 
					MO(1), KC_A, KC_S, KC_D, KC_F, KC_G,				KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
				   	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,		KC_BTN1,KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
					MO(2), KC_LCTL, KC_LALT, LGUI_T(KC_ESC),			LT(1,KC_BSPC), KC_RALT, KC_RCTL, MO(2), 
															KC_SPC,	KC_ENT), 
	[1] = LAYOUT(	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,						KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
					KC_TRNS, KC_QUES, RALT(KC_8), RALT(KC_9), KC_GRV, LSFT(KC_1),	LSFT(KC_1), KC_NUBS, LSFT(KC_NUBS), LSFT(KC_0), LSFT(KC_6), KC_NO, 
					KC_TRNS, RALT(KC_MINS), LSFT(KC_7), RALT(KC_7), RALT(KC_0),		LSFT(KC_RBRC), LSFT(KC_MINS), LSFT(KC_8), LSFT(KC_9), KC_SLSH, LSFT(KC_DOT), RALT(KC_Q), 
					KC_LSFT, KC_NUHS, LSFT(KC_4), RALT(KC_NUBS), RALT(KC_RBRC), LSFT(KC_EQL),	KC_TRNS, KC_RBRC, LSFT(KC_5), LSFT(KC_2), LSFT(KC_NUHS), LSFT(KC_COMM), KC_RSFT, 
					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
														KC_TRNS, KC_TRNS),
	[2] = LAYOUT(	QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,			KC_F11, KC_F12, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, 
					KC_TAB, KC_PGUP, KC_BSPC, KC_UP, KC_DEL, KC_PGDN,	RSA(KC_1), KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, 
					MO(1), KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,	RSA(KC_MINS), KC_P4, KC_P5, KC_P6, KC_COMM, KC_DOT, 
					KC_NO, KC_NO, KC_TAB, KC_INS, KC_ENT, KC_SPC,		KC_TRNS, LSFT(KC_DOT), KC_P1, KC_P2, KC_P3, KC_LT, KC_NO, 
					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,					 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_P0, KC_PENT)
};

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_WH_D); 
    } else {
        tap_code(KC_WH_U);
    }
    return true;
}

#endif
