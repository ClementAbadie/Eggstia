/*
 * RGB_LED.h
 *
 *  Created on: 12 août 2017
 *      Author: Clement ABADIE
 */

#ifndef RGB_LED_H_
#define RGB_LED_H_







#define RGB_LED_PIN_R 9
#define RGB_LED_PIN_G 6
#define RGB_LED_PIN_B 5

enum LED_COLOR_t {
	LED_COLOR_R_e = RGB_LED_PIN_R,
	LED_COLOR_G_e = RGB_LED_PIN_G,
	LED_COLOR_B_e = RGB_LED_PIN_B,
};



void setup_RGB_LED();

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
