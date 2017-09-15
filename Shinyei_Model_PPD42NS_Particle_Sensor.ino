/*
 Interface to Shinyei Model PPD42NS Particle Sensor
 Program by Christopher Nafis 
 Written April 2012

 http://www.seeedstudio.com/depot/grove-dust-sensor-p-1050.html
 http://www.sca-shinyei.com/pdf/PPD42NS.pdf

 JST Pin 1 (Black Wire)  => Arduino GND
 JST Pin 3 (Red wire)    => Arduino 5VDC
 JST Pin 4 (Yellow wire) => Arduino Digital Pin 8
 */

#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"





void loop_PPD42NS() {

	duration = pulseIn(PIN_PPD42NS, LOW);
	lowpulseoccupancy = lowpulseoccupancy+duration;
	currenttime = millis()-starttime;

#ifdef DEBUG
		Serial.print("loop_PPD42NS ( currenttime : ");
		Serial.print(currenttime);
		Serial.print(" / ");
		Serial.print(sampletime_ms);
		Serial.println(" )");
#endif

	if ( currenttime > sampletime_ms )
	{
		ratio = lowpulseoccupancy/(sampletime_ms*10.0);  // Integer percentage 0=>100
		value_airConcentration = 1.1*pow(ratio,3)-3.8*pow(ratio,2)+520*ratio+0.62; // using spec sheet curve
		value_airNote = (10000 - value_airConcentration)/1000;

		lowpulseoccupancy = 0;
		starttime = millis();

#ifdef DEBUG
		Serial.print("lowpulseoccupancy : ");
		Serial.print(lowpulseoccupancy);
		Serial.print(", ");
		Serial.print("ratio : ");
		Serial.print(ratio);
		Serial.print(", ");
		Serial.print("concentration : ");
		Serial.println(value_airConcentration);
		Serial.print("AirNote : ");
		Serial.println(value_airNote);
#endif


	}

}
