/*
 * myTimer.ino
 *
 *  Created on: 13 aout 2017
 *      Author: Clement ABADIE
 */

#include "myTimer.h"

/*
 *  Timer1 library example
 *  June 2008 | jesse dot tane at gmail dot com
 */


//TimerThree userTimer;

void setup_timer()
{
	//userTimer.initialize(1000);         // initialize and set a 1/2 second period
	//userTimer.attachInterrupt(&callback_timer);  // attaches callback() as a timer overflow interrupt
}

void callback_timer()
{

	//Called every 1 SECOND

	if(timeout_capacitive_switch > 0)
	{
		timeout_capacitive_switch--;
	}

	if(timeout_capacitive_switch_long_touch > 0)
	{
		timeout_capacitive_switch_long_touch--;
	}

	if(timeout_led > 0)
	{
		timeout_led--;
	}
}
