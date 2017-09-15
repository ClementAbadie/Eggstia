#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2017-09-14 08:54:51

#include "Arduino.h"
#include "Arduino.h"
#include "Thread.h"
#include "ThreadController.h"
#include "StaticThreadController.h"
#include "Wire.h"
#include "buildConf.h"
#include "myWifi.h"
#include "RGB_LED.h"
#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"
#include "HTU21D_Humidity_Temperature.h"
#include "capacitiveTouch.h"
#include "HTU21D_Humidity_Temperature.h"
#include "RGB_LED.h"
#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"
#include "buildConf.h"
#include "capacitiveTouch.h"
#include "myTimer.h"
#include "jeedom.h"
#include "myTimer.h"
#include "myWifi.h"

void loop_readingSensors();
void loop_readingUserInteract();
void loop_RGB_LED();
void loop_dataSend();
void loop_timer();
int tools_GlobalNoteCalculator();
void setup() ;
void loop() ;
void setup_HTU21D() ;
void loop_HTU21D() ;
void setup_RGB_LED() ;
void RGB_LED_raw_set(int R, int G, int B) ;
void RGB_LED_set(int R, int G, int B) ;
void RGB_LED_set_red() ;
void RGB_LED_set_blue() ;
void RGB_LED_set_green() ;
void RGB_LED_set_yellow() ;
void RGB_LED_set_purple() ;
void RGB_LED_set_cyan() ;
void RGB_LED_set_black() ;
void RGB_LED_set_white() ;
void RGB_LED_set_orange() ;
void RGB_LED_display_value(float VALUE, int MIN, int MAX, LED_COLOR_t MIN_COLOR, LED_COLOR_t MAX_COLOR);
void RGB_LED_display_value_RGB(float VALUE, float MIN, float MAX);
void loop_PPD42NS() ;
void setup_capacitiveSensor() ;
void loop_capacitiveSensor() ;
void capacitiveSensor_shortTouch() ;
void capacitiveSensor_longTouch() ;
void setJeedom(int ROOM) ;
void setup_timer() ;
void callback_timer() ;
void setup_wifi() ;
void loop_datasend(int virtual_device_ID, float virtual_device_value) ;

#include "Eggstia.ino"

#include "HTU21D_Humidity_Temperature.ino"
#include "RGB_LED.ino"
#include "Shinyei_Model_PPD42NS_Particle_Sensor.ino"
#include "buildConf.ino"
#include "capacitiveTouch.ino"
#include "jeedom.ino"
#include "myTimer.ino"
#include "myWifi.ino"

#endif
