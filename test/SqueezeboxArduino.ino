#include "SqueezeboxArduino_menu.h"
// #include <Wire.h>
#include <IoAbstractionWire.h>

// the width and height of the attached OLED display.
#define OLED_WIDTH 128
#define OLED_HEIGHT 64

// Here we declare the variable using exactly the name that we used in the 
// designers code generator panel for the graphics variable. The name and
// type must match exactly
U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI oled(U8G2_R0, /* cs=*/ 10, /* dc=*/ A1, /* reset=*/ A0);
U8g2GfxMenuConfig myConfig;

// this is the interrupt pin connection from the PCF8574 back to the ESP8266 board.
#define IO_INTERRUPT_PIN 7


// as we've attached the rotary encoder to an I2C PCF8574 device we need to
// declare it here. We've told the designer that we would when we set the
// switch IO device.
// IoAbstractionRef io8574 = ioFrom8574(0x20, IO_INTERRUPT_PIN);
IoAbstractionRef io23017 = ioFrom23017(0x20, ACTIVE_LOW_OPEN, IO_INTERRUPT_PIN);



void prepareDisplayConfig() {
    myConfig.itemFont = u8g2_font_6x10_tn;
    myConfig.titleFont = u8g2_font_6x10_tn;

    // myConfig.itemFont = u8g2_font_6x10_tr;
    // myConfig.titleFont = u8g2_font_6x10_tr;

    // not used on u8g2, set to 0 or 1
    // myConfig.itemFontMagnification = 1;

    // the LoRes icons for editing and selecting can be changed from the high res ones.
    // if you leave both icons as NULL, the default will be used, you can redefine your
    // own, see bitmap docs on u8g2 site.
    // .editIcon = loResEditingIcon;
    // myConfig.activeIcon = loResActiveIcon;
    // myConfig.editIconHeight = 6;
    // myConfig.editIconWidth = 8;
    myConfig.editIcon = NULL;
    myConfig.activeIcon = NULL;
}


void setup() {

    oled.setBusClock(8000000);
    oled.begin();
    oled.setContrast(50);

    prepareDisplayConfig();
    
    setupMenu();

}

void loop() {
    taskManager.runLoop();

}


void CALLBACK_FUNCTION onStartToasting(int id) {
    // TODO - your menu change code
}

