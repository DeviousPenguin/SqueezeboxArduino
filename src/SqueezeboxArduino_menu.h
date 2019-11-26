/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#ifndef MENU_GENERATED_CODE_H
#define MENU_GENERATED_CODE_H

#include <tcMenu.h>
#include "tcMenuU8g2.h"

// all define statements needed
#define TCMENU_USING_PROGMEM true
#define ENCODER_PIN_A 3
#define ENCODER_PIN_B 2
#define ENCODER_PIN_OK 4

// all variables that need exporting
extern U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI oled;
extern U8g2MenuRenderer renderer;
extern IoAbstractionRef io23017;

// all menu item forward references.
extern BooleanMenuItem menuFrozen;
extern EnumMenuItem menuType;
extern AnalogMenuItem menuToasterPower;
extern const ConnectorLocalInfo applicationInfo;

// Callback functions must always include CALLBACK_FUNCTION after the return type
#define CALLBACK_FUNCTION


void setupMenu();

#endif // MENU_GENERATED_CODE_H