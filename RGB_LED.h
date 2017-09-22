/*
 * RGB_LED.h
 *
 *  Created on: 12 ao�t 2017
 *      Author: Clement ABADIE
 */

#ifndef RGB_LED_H_
#define RGB_LED_H_


#include "dataTools.h"


#define RGB_LED_PIN_R 9
#define RGB_LED_PIN_G 6
#define RGB_LED_PIN_B 5


// LED mode change times

#define RGB_LED_SHOW_MODE_TIME 1000
#define RGB_LED_SHOW_BLACK_TIME 100



enum LED_COLOR_t {
	LED_COLOR_R_e = RGB_LED_PIN_R,
	LED_COLOR_G_e = RGB_LED_PIN_G,
	LED_COLOR_B_e = RGB_LED_PIN_B,
};

enum LED_STATUS_t {
	LED_STATUS_TEMPERATURE_e,
	LED_STATUS_HUMIDITY_e,
	LED_STATUS_AIRNOTE_e,
	LED_STATUS_GLOBAL_NOTE_e
};



LED_STATUS_t led_status = LED_STATUS_TEMPERATURE_e;
LED_STATUS_t led_status_old = led_status;


void setup_RGB_LED();

void loop_RGB_LED(Eggstia& thisEggstia);

void RGB_LED_set(int R, int G, int B);

void RGB_LED_set_red();

void RGB_LED_set_blue();

void RGB_LED_set_green();

void RGB_LED_set_yellow();

void RGB_LED_set_purple();

void RGB_LED_set_orange();

void RGB_LED_set_black();

void RGB_LED_set_white();

void RGB_LED_display_value(float VALUE, int MIN, int MAX, LED_COLOR_t MIN_COLOR, LED_COLOR_t MAX_COLOR);

void RGB_LED_display_value_RGB(float VALUE, int MIN, int MAX);

#endif /* RGB_LED_H_ */
