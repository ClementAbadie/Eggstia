/*
 * capacitiveTouch.ino
 *
 *  Created on: 13 aout 2017
 *      Author: Clement ABADIE
 */


#include "capacitiveTouch.h"
#include "myTimer.h"

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10 megohm between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50 kilohm - 50 megohm. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 * Best results are obtained if sensor foil and wire is covered with an insulator such as paper or plastic sheet
 */


CapacitiveSensor   capacitiveSensor = CapacitiveSensor(CAPACITIVE_PIN_CHARGE,CAPACITIVE_PIN_SENSOR);        // 10 megohm resistor between pins 10 & 15, pin 15 is sensor pin, add wire, foil

void setup_capacitiveSensor()
{

	capacitiveSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example


}

void loop_capacitiveSensor()
{
	//    long start = millis();
	total =  capacitiveSensor.capacitiveSensor(CAPACITIVE_SAMPLE);


	if((CAPACITIVE_THRESHOLD < total) && (timeout_capacitive_switch == 0) && !capacitive_switch_pushed) {
		pushed_time = millis();
		capacitive_switch_pushed = 1;
		timeout_capacitive_switch = CAPACITIVE_FILTER_MS;
		timeout_capacitive_switch_long_touch = CAPACITIVE_LONG_TOUCH_MS;

	}

	if((CAPACITIVE_THRESHOLD > total) && capacitive_switch_pushed) {
		capacitive_switch_pushed = 0;
		push_duration = millis()-pushed_time;
		if(push_duration < (unsigned long) CAPACITIVE_LONG_TOUCH_MS)
		{
			capacitiveSensor_shortTouch();
		}
		else
		{
			capacitiveSensor_longTouch();
		}
	}


	if(timeout_capacitive_switch_long_touch == 0 && capacitive_switch_pushed){
		capacitive_switch_pushed = 0;
		timeout_capacitive_switch_long_touch = -1;
		capacitiveSensor_longTouch();
	}


#ifdef DEBUG
//  Serial.println(millis() - start);        // check on performance in milliseconds
	Serial.print("total : ");
	Serial.print(total);
	Serial.print(" push_duration : ");
	Serial.print(push_duration);
	Serial.print(" pushed : ");
	Serial.println(capacitive_switch_pushed);

#endif

}




void capacitiveSensor_shortTouch()
{

#ifdef DEBUG
	Serial.println("Short touch !");
#endif

	switch ( switch_status ) {
	case SWITCH_STATUS_ON_e:
		switch_status = SWITCH_STATUS_OFF_e;
		break;
	case SWITCH_STATUS_OFF_e:
		switch_status = SWITCH_STATUS_ON_e;
		break;
	default:
		switch_status = SWITCH_STATUS_ON_e;
		break;
	}
}


void capacitiveSensor_longTouch()
{
#ifdef DEBUG
	Serial.println("Long touch !");
#endif

	switch_status = SWITCH_STATUS_ON_e;

	switch ( led_status ) {
	case LED_STATUS_TEMPERATURE_e:
		led_status = LED_STATUS_HUMIDITY_e;
		break;
	case LED_STATUS_HUMIDITY_e:
		led_status = LED_STATUS_AIRNOTE_e;
		break;
	case LED_STATUS_AIRNOTE_e:
		led_status = LED_STATUS_GLOBAL_NOTE_e;
		break;
	case LED_STATUS_GLOBAL_NOTE_e:
		led_status = LED_STATUS_TEMPERATURE_e;
		break;
	default:
		led_status = LED_STATUS_TEMPERATURE_e;
		break;
	}

}
