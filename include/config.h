#ifndef _config_h_
#define _config_h_

//--Includes
#include <Arduino.h>
#define PCB_UTN
//#define NODEMCU

//--Hardware PINS definitions
#ifdef NODEMCU
#define LED1_PIN              23
#define LED2_PIN              2
#endif

#ifdef PCB_UTN
#define LED1_PIN              38  
#define LED2_PIN              2    
#define LED3_PIN              1
#define DHT22_PIN             20
#define ANALOG0_PIN           5
#define ANALOG1_PIN           4
#define RELAY1_PIN            21
#define RELAY2_PIN            14
#define BI0_PIN               7
#define BI1_PIN               6 
#define AI0_PIN               16
#define AI1_PIN               15
#define BIN1_PIN              18
#define BIN2_PIN              17
#define AIN1_PIN              8
#define AIN2_PIN              9
#define nFAULT_PIN            11
#define nSLEEP_PIN            12
#define nRESET_PIN            13
#define DECAY_PIN             10
#endif


//--Software constants
#define SERIAL_BAUDRATE      19200

//--Structures
struct Config {
  String ssid;
  String ssid_pass;
  uint8_t irr_hour;
  uint8_t irr_minute;
  uint8_t irr_time;
};

#endif