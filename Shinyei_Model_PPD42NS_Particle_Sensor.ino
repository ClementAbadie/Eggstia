/**********************************************/
/* Building Arduino Dust Sensor using:        */
/*      - ESP8266 ESP-01                      */
/*      - 3.3-to-5v Logic Level Converter     */
/*      - Shinyei PPD42NS                     */
/* http://www.sca-shinyei.com/pdf/PPD42NS.pdf */
/*                                            */
/* Author: shadowandy[dot]sg[at]gmail[dot]com */
/* Web: www.shadowandy.net                    */
/*                                            */
/* Wiring Instruction:                        */
/*      - PPD42NS Pin 1 => GND                */
/*      - PPD42NS Pin 2 => GPIO0              */
/*      - PPD42NS Pin 3 => 5V                 */
/*      - PPD42NS Pin 4 => GPIO2              */
/**********************************************/

#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"

// Guidelines for the Reporting of Daily Air Quality – the Air Quality Index (AQI)
// https://www3.epa.gov/ttn/oarpg/t1/memoranda/rg701.pdf
//
// Revised air quality standards for particle pollution and updates to the air quality index (aqi)
// https://www3.epa.gov/airquality/particlepollution/2012/decfsstandards.pdf
//
// calculate AQI (Air Quality Index) based on ug/m3 concentration


int ugm32aqi_25 (double ugm3)
{
	int i;

	for (i = 0; i < 7; i++) {
		if (ugm3 >= aqi_25[i].clow &&
				ugm3 <= aqi_25[i].chigh) {
			// Ip =  [(Ihi-Ilow)/(BPhi-BPlow)] (Cp-BPlow)+Ilow,
			return ((aqi_25[i].lhigh - aqi_25[i].llow) / (aqi_25[i].chigh - aqi_25[i].clow)) *
					(ugm3 - aqi_25[i].clow) + aqi_25[i].llow;
		}
	}

	return 0;
}

int ugm32aqi_10 (double ugm3)
{
	int i;

	for (i = 0; i < 7; i++) {
		if (ugm3 >= aqi_10[i].clow &&
				ugm3 <= aqi_10[i].chigh) {
			// Ip =  [(Ihi-Ilow)/(BPhi-BPlow)] (Cp-BPlow)+Ilow,
			return ((aqi_10[i].lhigh - aqi_10[i].llow) / (aqi_10[i].chigh - aqi_10[i].clow)) *
					(ugm3 - aqi_10[i].clow) + aqi_10[i].llow;
		}
	}

	return 0;
}


void setup_PPD42NS() {

	pinMode(pin[PM25], INPUT); //Listen at the designated PIN
	pinMode(pin[PM10], INPUT); //Listen at the designated PIN
	starttime = millis(); //Fetching the current time
	ESP.wdtEnable(WDTO_8S); // Enabling Watchdog
}

void loop_PPD42NS(Eggstia &myEggstia) {
	//	Serial.println("loop");


  value[PM25] = digitalRead(pin[PM25]);
  value[PM10] = digitalRead(pin[PM10]);

  if (value[PM25] == LOW && trigger[PM25] == false) {
    trigger[PM25] = true;
    triggerOn[PM25] = micros();
  }
  if (value[PM25] == HIGH && trigger[PM25] == true) {
    triggerOff[PM25] = micros();
    lowpulseoccupancy[PM25] += (triggerOff[PM25] - triggerOn[PM25]);
    trigger[PM25] = false;
  }
  if (value[PM10] == LOW && trigger[PM10] == false) {
    trigger[PM10] = true;
    triggerOn[PM10] = micros();
  }
  if (value[PM10] == HIGH && trigger[PM10] == true) {
    triggerOff[PM10] = micros();
    lowpulseoccupancy[PM10] += (triggerOff[PM10] - triggerOn[PM10]);
    trigger[PM10] = false;
  }

/*
// Blocking functions :
	duration[PM25] = pulseIn(pin[PM25], LOW);
	lowpulseoccupancy[PM25] = lowpulseoccupancy[PM25]+duration[PM25];
	duration[PM10] = pulseIn(pin[PM10], LOW);
	lowpulseoccupancy[PM10] = lowpulseoccupancy[PM10]+duration[PM10];
*/
	ESP.wdtFeed(); // Reset the WatchDog
	current_time = millis() - starttime;

	if (current_time > sampletime_ms) //Checking if it is time to sample
	{
		ratio[PM25] = lowpulseoccupancy[PM25] / (sampletime_ms * 10.0);
		count[PM25] = 1.1 * pow(ratio[PM25], 3) - 3.8 * pow(ratio[PM25], 2) + 520 * ratio[PM25] + 0.62;
		ratio[PM10] = lowpulseoccupancy[PM10] / (sampletime_ms * 10.0);
		count[PM10] = 1.1 * pow(ratio[PM10], 3) - 3.8 * pow(ratio[PM10], 2) + 520 * ratio[PM10] + 0.62;
		count[PM25] -= count[PM10];

		ESP.wdtFeed(); // Reset the WatchDog
		// Begin mass concentration calculation
		//    float concentration[] = {0, 0};
		double pi = 3.14159;
		// All particles are spherical, with a density of 1.65E12 µg/m3
		double density = 1.65 * pow(10, 12);
		double K = 3531.5; // per m^3

		ESP.wdtFeed(); // Reset the WatchDog
		// PM10
		// The radius of a particle in the PM10 channel is 2.6 µm
		double r10 = 2.6 * pow(10, -6);
		double vol10 = (4 / 3) * pi * pow(r10, 3);
		double mass10 = density * vol10; // ug
		myEggstia.airQuality.pm10_um3 = (count[PM10]) * mass10 * K;

		ESP.wdtFeed(); // Reset the WatchDog
		// PM2.5
		// The radius of a particle in the PM2.5 channel is .44 µm
		double r25 = 0.44 * pow(10, -6);
		double vol25 = (4 / 3) * pi * pow(r25, 3);
		double mass25 = density * vol25; // ug
		myEggstia.airQuality.pm25_um3 = (count[PM25]) * mass25 * K ;
		// End of mass concentration calculation

		ESP.wdtFeed(); // Reset the WatchDog



		//	float value_airNote_10 = (10000 - count[PM10])/1000;
		//	float value_airNote_25 = (10000 - count[PM25])/1000;
		//	float value_airNote =  (12000 - count[PM10] + count[PM25])/1000;

		myEggstia.airQuality.AQI_25 = ugm32aqi_25(myEggstia.airQuality.pm25_um3);
		myEggstia.airQuality.AQI_10 = ugm32aqi_10(myEggstia.airQuality.pm10_um3);

		myEggstia.airQuality.airNote.enable = true;
		myEggstia.airQuality.airNote.value = myEggstia.airQuality.AQI_25;

		Serial.print("PM2.5 AQI : ");
		Serial.print(myEggstia.airQuality.AQI_25);
		Serial.print(" ( ");
		Serial.print(count[PM25]);
		Serial.print(" part. => ");
		Serial.print(myEggstia.airQuality.pm25_um3);
		Serial.print(" ug/m3 )");

		Serial.print(" | ");

		Serial.print("PM10 AQI : ");
		Serial.print(myEggstia.airQuality.AQI_10);
		Serial.print(" ( ");
		Serial.print(count[PM10]);
		Serial.print(" part. => ");
		Serial.print(myEggstia.airQuality.pm10_um3);
		Serial.print(" ug/m3 )");

		Serial.println("");


		//	Serial.print(" | ");
		//	Serial.print("AirNote : ");
		//	Serial.println(value_airNote);
		//	Serial.print(" | ");
		//	Serial.print("AirNote 10 : ");
		//	Serial.print(value_airNote_10);

		//	Serial.println();

		//connectWiFi();
		//Serial.println("1=" + String(concentration[PM10], DEC) + "&2=" + String(count[PM10], DEC) + "&3=" + String(concentration[PM25], DEC) + "&4=" + String(count[PM25], DEC));
		// Resetting for next sampling
		lowpulseoccupancy[PM25] = 0;
		lowpulseoccupancy[PM10] = 0;
		starttime = millis();
		ESP.wdtFeed(); // Reset the WatchDog

	}

}
