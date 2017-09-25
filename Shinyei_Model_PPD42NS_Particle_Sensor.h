/*
 * SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR.h
 *
 *  Created on: 12 aout 2017
 *      Author: Clement ABADIE
 */

#ifndef SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR_H_
#define SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR_H_

#include "dataTools.h"

int counter = 0;


#define PM25 0
#define PM10 1
int pin[] = {2, 0};

unsigned long current_time = 0;
unsigned long starttime;
unsigned long sampletime_ms = 30000;
unsigned long triggerOn[2];
unsigned long triggerOff[2];
unsigned long duration[] = {0, 0};;
unsigned long lowpulseoccupancy[] = {0, 0};
float ratio[] = {0, 0};
float count[] = {0, 0};
boolean value[] = {HIGH, HIGH};
boolean trigger[] = {false, false};

// https://airnow.gov/index.cfm?action=airnow.calculator
static struct aqi_25 {
	float clow;
	float chigh;
	int llow;
	int lhigh;
}
//Given for 2.5um particules
aqi_25[] = {
		{0.0,    12.0,   0,  50},
		{12.1,   35.4,  51, 100},
		{35.5,   55.4, 101, 150},
		{55.5,  150.4, 151, 200},
		{150.5, 250.4, 201, 300},
		{250.5, 350.4, 301, 400},
		{350.5, 500,   401, 500},
};


static struct aqi_10 {
	float clow;
	float chigh;
	int llow;
	int lhigh;
}
//Given for 10um particules
aqi_10[] = {
		{  0.0,	 54.0,    0,  50},
		{ 55.0,	154.0,   51, 100},
		{155.0,	254.0,  101, 150},
		{255.0,	354.0,  151, 200},
		{355.0,	424.0,  201, 300},
		{425.0,	504.0,  301, 400},
		{505.0,	604.0,  401, 500},
};





void setup_PPD42NS();
void loop_PPD42NS(Eggstia &myEggstia);


#endif /* SHINYEI_MODEL_PPD42NS_PARTICULE_SENSOR */
