#ifndef _funciones_h_
#define _funciones_h_
#include <Arduino.h>
#include <ArduinoJson.h>
#include "config.h"
#include "persist.h"

#define TIMEOUT_SERIAL_CONFIG   10000
#define DEVICE_CONFIG           1
#define IRR_CONFIG              2

void conf_read(void);

#endif