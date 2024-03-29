/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#include <tcMenu.h>
#include "SqueezeboxArduino_menu.h"

// Global variable declarations

U8g2GfxMenuConfig gfxConfig;
U8g2MenuRenderer renderer;

// Global Menu Item declarations

const PROGMEM BooleanMenuInfo minfoFrozen = { "Frozen", 3, 0xffff, 1, NO_CALLBACK, NAMING_YES_NO };
BooleanMenuItem menuFrozen(&minfoFrozen, false, NULL);
const char enumStrType_0[] PROGMEM = "Bread";
const char enumStrType_1[] PROGMEM = "Bagel";
const char enumStrType_2[] PROGMEM = "Pancake";
const char* const enumStrType[] PROGMEM  = { enumStrType_0, enumStrType_1, enumStrType_2 };
const PROGMEM EnumMenuInfo minfoType = { "Type", 2, 0xffff, 2, NO_CALLBACK, enumStrType };
EnumMenuItem menuType(&minfoType, 0, &menuFrozen);
const PROGMEM AnalogMenuInfo minfoToasterPower = { "Toaster power", 1, 0xffff, 10, NO_CALLBACK, 0, 1, "" };
AnalogMenuItem menuToasterPower(&minfoToasterPower, 0, &menuType);
const PROGMEM ConnectorLocalInfo applicationInfo = { "Super Toaster", "e6b47a70-cca5-4d50-8ca9-b952db08d50d" };

// Set up code

void setupMenu() {
    prepareBasicU8x8Config(gfxConfig);
    renderer.setGraphicsDevice(&oled, &gfxConfig);
    switches.initialiseInterrupt(io23017, true);
    menuMgr.initForEncoder(&renderer, &menuToasterPower, ENCODER_PIN_A, ENCODER_PIN_B, ENCODER_PIN_OK);
}

