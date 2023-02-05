// Copyright 2022 Sebastian Dümcke
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F7, D4, C6, B5, B4, D7 }
#define MATRIX_COL_PINS { D2, B1, F5, F4, B3, D1, E6 }
#define MATRIX_ROW_PINS_RIGHT { D0, D1, D4, C6, F4, D2 }
#define MATRIX_COL_PINS_RIGHT { D7, B4, B6, B1, B3, B2, B5 }
#define DIODE_DIRECTION COL2ROW

//#define TAPPING_TERM 100
//#define DEBOUNCE 5

/* encoder support */
//#define ENCODERS_PAD_A { F5 }
//#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F6 }
#define ENCODERS_PAD_B_RIGHT { F7 }
#define ENCODER_RESOLUTION 2

//#define TAP_CODE_DELAY 10

/* communication between sides */
#define SOFT_SERIAL_PIN D3
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

/* define 2 LEDS to visualise layer status */
//#define LED_NUM_LOCK_PIN D5
//#define LED_CAPS_LOCK_PIN B0
//TODO: needs code to update LED on layer change. This code will go into the keymaps.c file
