//=======================================================================
// File:                setup.cpp
// Author:              Marcelo Castello (https://github.com/mcastellogh)
// Licence:             GPLV3+
// Version:             1.0.0
// Date:                Noviembre 2024
// Info:                Project for Electrónica II
//=======================================================================

//--Includes
#include "setup.h"

//--Local variables
uint8_t var_count;
extern bool wifi_state;
Config config;


//--Extern variables




//--Startup function
void App_setup(void){
    Serial.begin(SERIAL_BAUDRATE);

    //--PINS
    pinMode(ONBOARD_LED_PIN,OUTPUT);
    pinMode(WIFI_LED_PIN,OUTPUT);

    led_welcome();

    //--Load stored variables
    load_config();

    //--Init wifi
    wifi_state=wifi_init(WIFI_STA);


    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Persist variables");

    //--Read command configuration
    conf_read();
}