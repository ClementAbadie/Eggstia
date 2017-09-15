/*
 * HTU21D_Humidity_Temperature.h
 *
 *  Created on: 12 août 2017
 *      Author: Clement ABADIE
 */

#ifndef HTU21D_HUMIDITY_TEMPERATURE_H_
#define HTU21D_HUMIDITY_TEMPERATURE_H_


/*
 HTU21D Humidity Sensor Example Code
 By: Nathan Seidle
 SparkFun Electronics
 Date: September 15th, 2013
 License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).

 Uses the HTU21D library to display the current humidity and temperature

 Open serial monitor at 9600 baud to see readings. Errors 998 if not sensor is detected. Error 999 if CRC is bad.

 Hardware Connections (Breakoutboard to Arduino):
 -VCC = 3.3V
 -GND = GND
 -SDA = A4 (use inline 10k resistor if your board is 5V)
 -SCL = A5 (use inline 10k resistor if your board is 5V)

 */

#include <Wire.h>
//#include "HTU21D.h"
#include <Adafruit_HTU21DF.h>


#define HTU21D_HUMIDITY_CORRECTION_RAMP 1.0
#define HTU21D_HUMIDITY_CORRECTION_OFFSET 0.0
#define HTU21D_TEMPERATURE_CORRECTION_RAMP 1.0
#define HTU21D_TEMPERATURE_CORRECTION_OFFSET -2.0


//Create an instance of the object
Adafruit_HTU21DF myHTU21DF;

float value_temperature = 0.0;
float value_humidity = 0.0;

void setup_HTU21D();

int check_HTU21D();

void loop_HTU21D();


#endif /* HTU21D_HUMIDITY_TEMPERATURE_H_ */
