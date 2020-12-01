#pragma once
#define CONFIGURATION_H_VERSION 020008
#define PRUSA_SKR_CONFIGURATION_VERSION "2020-12-1"

//===========================================================================
//====================== All-in-One Prusa SKR Firmware ======================
//===========================================================================

/**
 * If you find this project helpful, please consider donating:
 *
 * Chris Warkocki, SKR Bear Project:             https://patreon.com/chriswarkocki
 * Keith Bennett, Marlin tester/config builder:  https://github.com/sponsors/thisiskeithb
 * Grégoire Saunier, Prusa Bear Project:         https://patreon.com/gregsaun
 * Scott Lahteine, lead Marlin dev/maintainer:   https://patreon.com/thinkyhead
 *
 * Here are some standard links for getting your machine setup:
 *
 * Chris Warkocki's SKR Bear Github:  https://github.com/codiac2600/SKR-Bear-Marlin
 * Chris Warkocki's SKR Bear wiring guide: https://git.io/JTRGU
 * Chris Warkocki's SKR Bear videos:  https://youtube.com/c/ChrisWarkocki/search?query=skr+bear
 * Prusa Bear Upgrade Facebook group: https://facebook.com/groups/prusabearupgrade/
 * Prusa Community Facebook group:    https://facebook.com/groups/675831176090951/
 *
 * Thank you and Happy Printing!
 */

//===========================================================================
//=========================== Custom Printer Name ===========================
//===========================================================================

// "SKR Bear" or "SKR Caribou" will be used by default. Uncomment to set a custom printer name.
//#define PRUSA_SKR_CUSTOM_NAME "3D Printer"

//===========================================================================
//=========================== Printer/Frame Type ============================
//===========================================================================

// Prusa Bear frame is enabled by default.

/**
 * Options:  1: Bear       (210mm Z)
 *           2: Tall Bear  (310mm Z)
 *           3: Caribou    (320mm Z)
 */
#define PRUSA_SKR_FRAME_TYPE 1

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

// SKR 1.4 is enabled by default.

/**
 * Options:  1: BigTreeTech SKR 1.4        (LPC1768)
 *           2: BigTreeTech SKR 1.4 Turbo  (LPC1769)
 */
#define PRUSA_SKR_MOTHERBOARD 1

//===========================================================================
//============================= Stepper Motors ==============================
//===========================================================================

/**
 * Extruder Stepper
 *
 * Stock 1.8° extruder stepper is enabled by default.
 *
 * Options:  1: Stock 1.8°
 *           2: Bondtech/Motech 1.8° pancake
 *           3: LDO 0.9° pancake
 *           4: LDO planetary
 */
#define PRUSA_SKR_E_STEPPER 1

/**
 * X/Y Steppers
 *
 * Stock 1.8° X/Y steppers are enabled by default.
 *
 * Options:  1: Stock 1.8° X/Y
 *           2: LDO 0.9° X/Y
 *           3: Moons 0.9° X/Y
 */
#define PRUSA_SKR_XY_STEPPER 1

/**
 *  Sensorless Homing (StallGuard)
 *
 * If needed, uncomment *_STALL_SENSITIVITY to customize StallGuard settings.
 * This can also be customized via LCD under Configuration -> Advanced Settings -> TMC Drivers -> Sensorless Homing
 */
//#define PRUSA_SKR_X_STALL_SENSITIVITY  90
//#define PRUSA_SKR_Y_STALL_SENSITIVITY  100

//===========================================================================
//================================= Hotend ==================================
//===========================================================================

/**
 * Extruder
 *
 * Bear Extruder is enabled by default.
 *
 * Options:   1: Bear extruder w/ PINDA V2 or SuperPINDA
 *            2: Bear extruder w/ integrated BLTouch mount by Vertigo 235 https://www.prusaprinters.org/prints/6606
 *            3: Bondtech BMG extruder w/ PINDA V2 or SuperPINDA https://www.bondtech.se/en/product/prusa-i3-mk3s-extruder-upgrade/
 *            4: Bondtech BMG extruder w/ BLTouch mount by Vertigo 235 https://www.prusaprinters.org/prints/6623
 */
#define PRUSA_SKR_EXTRUDER 1

/**
 * Pinda Probe
 *
 * PINDA V2 is enabled by default. This setting is ignored if you are using a BLTouch.
 *
 * Options:  1: PINDA V2
 *           2: SuperPINDA
 */
#define PRUSA_SKR_PINDA_PROBE 1

/*
 * Custom Probe Offset
 *
 * If needed, uncomment to customize probe offset. This can also be customized via LCD
 * under Configuration -> Advanced Settings -> Probe Offsets
 */
//#define PRUSA_SKR_NOZZLE_TO_PROBE_OFFSET { 23, 5, 0 }

/**
 * Thermistor
 *
 * Stock E3D Semitec 104NT thermistor is enabled by default.
 *
 * Options:  1: E3D Semitec 104NT thermistor
 *           2: Slice Engineering's 450°C High Temperature thermistor
 *              !WARNING! If you plan to print above 295°C, you will need to upgrade from the stock V6 aluminum block or it will soften and/or melt!
 */
#define PRUSA_SKR_THERMISTOR 1

//===========================================================================
//============================== Bed Leveling ===============================
//===========================================================================

// Bilinear is enabled by default.

/**
 * Options:  1: Bilinear
 *           2: Unified Bed Leveling
 */
#define PRUSA_SKR_BED_LEVELING 1

//===========================================================================
//================================= Display =================================
//===========================================================================

//Stock/OLED RepRapDiscount smart controller is enabled by default.

/**
 * Options:  1: Stock/OLED RepRapDiscount smart controller
 *           2: BigTreeTech Dual Mode TFT (TFT35/TFT50/TFT70,etc.)
 */
#define PRUSA_SKR_DISPLAY 1

//===========================================================================
//================================ NeoPixels ================================
//===========================================================================

// NeoPixels are disabled by default. Uncomment to enable.
//#define PRUSA_SKR_NEOPIXELS

// If needed, uncomment to customize NeoPixel settings.
//#define PRUSA_SKR_NEOPIXEL_TYPE   NEO_GRB  // Options: NEO_GRBW or NEO_GRB
//#define PRUSA_SKR_NEOPIXEL_PIXELS 17
//#define PRUSA_SKR_NEOPIXEL_BRIGHTNESS 255  // 255 is max brightness

//===========================================================================
//===================== DO NOT EDIT BELOW THIS SECTION ======================
//===========================================================================

#include "src/inc/Prusa_SKR_Conditionals.h"
