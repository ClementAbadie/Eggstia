/*
 * dataTools.ino
 *
 *  Created on: 22 sept. 2017
 *      Author: Clement ABADIE
 */

#include "dataTools.h"

int tools_GlobalNoteCalculator(Eggstia& thisEggstia){

	//TODO : Note calcul of hum and temp : MED is the best
	int VALUE_TEMPERATURE_255 =  ( (int) thisEggstia.temperature.value - thisEggstia.temperature.threshold_min ) * 255 / thisEggstia.temperature.threshold_max;
	int VALUE_HUMIDITY_255 =  ( (int) thisEggstia.humidity.value - thisEggstia.humidity.threshold_min ) * 255 / thisEggstia.humidity.threshold_max;
	int VALUE_AIR_NOTE_255 =  ( (int) thisEggstia.airQuality.airNote.value - thisEggstia.airQuality.airNote.threshold_min ) * 255 / thisEggstia.airQuality.airNote.threshold_max;

	int VALUE_GLOBAL_NOTE_255 =  (VALUE_TEMPERATURE_255 + VALUE_HUMIDITY_255 + VALUE_AIR_NOTE_255)/3;

	int VALUE_GLOBAL_NOTE =  VALUE_GLOBAL_NOTE_255 * 10 / 255;

#ifdef DEBUG
	Serial.print("Global Note : ");
	Serial.print(VALUE_GLOBAL_NOTE_255);
	Serial.print("(");
	Serial.print(VALUE_GLOBAL_NOTE);
	Serial.print("/");
	Serial.print(thisEggstia.global.threshold_max);
	Serial.println(")");
#endif

	return VALUE_GLOBAL_NOTE;

}
