/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

/* If PH3 used with a stronger pull resistor then the following definition needs be included */
// #define MATRIX_UNSELECT_DRIVE_HIGH

/* RGB Matrix Driver Configuration */
#define SNLED27351_I2C_ADDRESS_1 SNLED27351_I2C_ADDRESS_VDDIO
#define SNLED27351_I2C_ADDRESS_2 SNLED27351_I2C_ADDRESS_GND

/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U

// Homerow mod options
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY


#define SNLED27351_PHASE_CHANNEL SNLED27351_SCAN_PHASE_9_CHANNEL
#define SNLED27351_CURRENT_TUNE \
    { 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60 }

/* Encoder Configuration */
#define ENCODER_DEFAULT_POS 0x3
