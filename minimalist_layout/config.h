/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* #undef RGBLED_NUM */
/* #define RGBLIGHT_ANIMATIONS */
/* #define RGBLED_NUM 14 */
/* #define RGBLIGHT_HUE_STEP 8 */
/* #define RGBLIGHT_SAT_STEP 8 */
/* #define RGBLIGHT_VAL_STEP 8 */

#define FORCE_NKRO

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 160

/* // Prevent normal rollover on alphas from accidentally triggering mods. */
/* #define IGNORE_MOD_TAP_INTERRUPT */

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

#define BACKLIGHT_ON_STATE 0
