/*
 * SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR.h
 *
 *  Created on: 12 aout 2017
 *      Author: Clement ABADIE
 */

#ifndef SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR_H_
#define SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR_H_

int pin = 8;
unsigned long duration;
unsigned long starttime;
unsigned long currenttime;
unsigned long sampletime_ms = 30000;
unsigned long lowpulseoccupancy = 0;
float ratio = 0;
float value_airConcentration = 0;
float value_airNote = 0;


void loop_PPD42NS();



#endif /* SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR */
