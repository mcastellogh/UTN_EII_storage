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

    //--Config pins

    #ifdef NODEMCU
    pinMode(LED2_PIN,OUTPUT);
    pinMode(LED1_PIN,OUTPUT);
    #endif
    
    #ifdef PCB_UTN
    pinMode(LED1_PIN,OUTPUT);
    pinMode(LED2_PIN,OUTPUT);
    pinMode(LED3_PIN,OUTPUT);
    pinMode(RELAY1_PIN,OUTPUT);
    pinMode(RELAY2_PIN,OUTPUT);
    #endif

    led_welcome();

    //--Load stored variables
    load_config();

    //--Init wifi
    wifi_state=wifi_init(WIFI_STA);


    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Persist variables");

    //--Read command configuration
    //conf_read();
}