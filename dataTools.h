/*
 * dataTools.h
 *
 *  Created on: 22 sept. 2017
 *      Author: Clement ABADIE
 */

#ifndef DATATOOLS_H_
#define DATATOOLS_H_
#include "string"


struct BasicPhysicalData {
	bool enable;

    float value;
    float ideal;
    float threshold_min;
    float threshold_max;

    int jeedom_id;

};

struct AirQualityData {

    float pm25_um3;
    float pm10_um3;

    float note_25;
    float note_10;
    float note_global;

    int  AQI_25;
    int  AQI_10;


    BasicPhysicalData airNote;
};

struct Room {

    int	id;
	String name;
};


struct Eggstia {
	BasicPhysicalData global;
	BasicPhysicalData temperature;
	BasicPhysicalData humidity;
	BasicPhysicalData pressure;
	AirQualityData airQuality;

	Room room;

};


int tools_GlobalNoteCalculator(Eggstia& thisEggstia);

#endif /* DATATOOLS_H_ */
