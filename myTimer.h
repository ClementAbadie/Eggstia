/*
 * myTimer.h
 *
 *  Created on: 13 août 2017
 *      Author: Clement ABADIE
 */

#ifndef MYTIMER_H_
#define MYTIMER_H_

//#include <TimerThree.h>

void setup_timer();

void callback_timer();


int timeout_capacitive_switch = 0;
int timeout_capacitive_switch_long_touch = 0;
int timeout_led = 0;

#endif /* MYTIMER_H_ */
