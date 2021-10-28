/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0C45
#define PRODUCT_ID      0x5004
#define DEVICE_VER      0x0001

#define MANUFACTURER    Redragon
#define PRODUCT         K556
#define DESCRIPTION     K556 Devarajas

/* Additional options */
#define RGB_MATRIX_ENABLE 1
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#define RGB_MATRIX_STARTUP_SPD 32

#define RGBLIGHT_EFFECT_STATIC_GRADIENT

#define DISABLE_LED_MATRIX_ALPHAS_MODS
#define DISABLE_LED_MATRIX_BREATHING
#define DISABLE_LED_MATRIX_BAND
#define DISABLE_LED_MATRIX_BAND_PINWHEEL
#define DISABLE_LED_MATRIX_BAND_SPIRAL
#define DISABLE_LED_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_LED_MATRIX_CYCLE_UP_DOWN
#define DISABLE_LED_MATRIX_CYCLE_OUT_IN
#define DISABLE_LED_MATRIX_DUAL_BEACON
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_SIMPLE
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_LED_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_LED_MATRIX_SOLID_SPLASH
#define DISABLE_LED_MATRIX_SOLID_MULTISPLASH
#define DISABLE_LED_MATRIX_WAVE_LEFT_RIGHT
#define DISABLE_LED_MATRIX_WAVE_UP_DOWN

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 21

#define DIODE_DIRECTION ROW2COL

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, B0, B1, B2, B3, B4, B5 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Enable NKRO - Up to 248 keys at the same time. */
#define FORCE_NKRO

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

#define LED_NUM_LOCK_PIN    B13
#define LED_CAPS_LOCK_PIN   B14
#define LED_SCROLL_LOCK_PIN B15
#define LED_PIN_ON_STATE    0

#include "config_led.h"
