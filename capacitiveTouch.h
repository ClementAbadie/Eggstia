/*
 * capacitiveTouch.h
 *
 *  Created on: 13 août 2017
 *      Author: Clement ABADIE
 */

#ifndef CAPACITIVETOUCH_H_
#define CAPACITIVETOUCH_H_


#include <CapacitiveSensor.h>

#define CAPACITIVE_PIN_CHARGE 10
#define CAPACITIVE_PIN_SENSOR 15


#define CAPACITIVE_THRESHOLD 50
#define CAPACITIVE_SAMPLE 5
#define CAPACITIVE_FILTER_MS 1000
#define CAPACITIVE_LONG_TOUCH_MS 500

int capacitive_switch_pushed = 0;
unsigned long push_duration = 0;
long total = 0;

unsigned long pushed_time = millis();

enum SWITCH_STATUS_t {
	SWITCH_STATUS_ON_e,
	SWITCH_STATUS_OFF_e
};

void capacitiveSensor_shortTouch();
void capacitiveSensor_longTouch();

SWITCH_STATUS_t switch_status = SWITCH_STATUS_ON_e;
#endif /* CAPACITIVETOUCH_H_ */
