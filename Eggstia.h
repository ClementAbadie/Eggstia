/*
 * Eggstia.h
 *
 *  Created on: 22 sept. 2017
 *      Author: Clement ABADIE
 */

#ifndef EGGSTIA_H_
#define EGGSTIA_H_

#include "Arduino.h"
#include "Thread.h"
#include "ThreadController.h"
#include "StaticThreadController.h"


#include "buildConf.h"
#include "myWifi.h"
#include "RGB_LED.h"
#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"
#include "HTU21D_Humidity_Temperature.h"
#include "capacitiveTouch.h"
#include "dataTools.h"


// Structures

BasicPhysicalData global = {	true,	//enable
								0.0, 	//value
								10.0,	//ideal
								0.0, 	//THRESHOLD_TEMPERATURE_MIN
								10.0, 	//THRESHOLD_TEMPERATURE_MAX
								0 		//Jeedom ID
							};

BasicPhysicalData temperature = {	false,	//enable
									0.0, 	//value
									20.0,	//ideal
									15.0, 	//THRESHOLD_TEMPERATURE_MIN
									25.0, 	//THRESHOLD_TEMPERATURE_MAX
									0 		//Jeedom ID
								};

BasicPhysicalData humidity 	= {	false,	//enable
								0.0, 	//value
								50.0,	//ideal
								30.0, 	//THRESHOLD_TEMPERATURE_MIN
								70.0,  	//THRESHOLD_TEMPERATURE_MAX
								0 		//Jeedom ID
								};

BasicPhysicalData pressure = {	false,	//enable
								0.0,	//value
								1000.0,	//ideal
								950.0, 	//THRESHOLD_TEMPERATURE_MIN
								1050.0, //THRESHOLD_TEMPERATURE_MAX
								0 		//Jeedom ID
								};

BasicPhysicalData airNote = {	false,	//enable
								0.0, 	//value
								10.0,	//ideal
								0.0, 	//THRESHOLD_TEMPERATURE_MIN
								10.0,  	//THRESHOLD_TEMPERATURE_MAX
								0 		//Jeedom ID
								};

AirQualityData AirQuality = {
								0.0, 	//pm25_um3
								0.0, 	//pm10_um3
								0.0,	//note_10
								0, 		//AQI
								airNote
							};



Room room = {
				ROOM_CONF,
				"Chambre"
			};

Eggstia thisEggstia = {	global,
						temperature,
						humidity,
						pressure,
						AirQuality,

						room
						};






// THREADS

#define THREAD_DEFAULT_INTERVAL 10
Thread myThread = Thread();

Thread thread_readingSensors = Thread();
Thread thread_readingUserInteract = Thread();
Thread thread_settingLED = Thread();
Thread thread_dataSend = Thread();
Thread thread_timer = Thread();

ThreadController threadController = ThreadController();



#endif /* EGGSTIA_H_ */
