// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_POWER_EN_PIN B1 //USB ENABLE pin
#define LED_POWER_EN_PIN A5 //LED ENABLE pin
#define HS_BAT_CABLE_PIN A7 //USB insertion detection pin

#define BAT_FULL_PIN A15
#define BAT_FULL_STATE 1


#define HS_RGB_INDICATOR_COUNT 99
#define HS_RGB_BAT_COUNT 1

/* Device Connection RGB Indicator Light Index And Color */


/* Status Indicator Lamp */

#define HS_RGB_INDEX_CAPS 0
#define HS_RGB_INDEX_WIN_LOCK 1
#define HS_RGB_BLINK_INDEX_VAI 0
#define HS_RGB_BLINK_INDEX_VAD 1
#define HS_RGB_BLINK_INDEX_SPI 2

#define HS_RGB_BLINK_INDEX_WIN 55
#define HS_RGB_BLINK_INDEX_MAC 56

/* Encoder */
#define ENCODER_MAP_KEY_DELAY 1

/* SPI */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4

/* Flash */
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12
#define WEAR_LEVELING_LOGICAL_SIZE (WEAR_LEVELING_BACKING_SIZE / 2)

/* RGB Matrix */
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/* WS2812 */
#define WS2812_SPI_DRIVER SPIDM2
#define WS2812_SPI_DIVISOR 32
