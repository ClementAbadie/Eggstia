/*
 * jeedom.ino
 *
 *  Created on: 13 sept. 2017
 *      Author: Clement ABADIE
 */

#include "jeedom.h"

void setup_Jeedom(Eggstia &thisEggstia) {
	// TODO Auto-generated constructor stub


	JEEDOM_API = "a14ntHuYmR95rkEY0eJAPwE4dMcEOlpB4j6B1XgKEDSbxWhR";
	JEEDOM_HOST = "192.168.0.190";


	switch(thisEggstia.room.id)
	{
	case ROOM_DEV_e:
		thisEggstia.temperature.jeedom_id = 320;
		thisEggstia.humidity.jeedom_id = 321;
		thisEggstia.pressure.jeedom_id = 0;
		thisEggstia.airQuality.airNote.jeedom_id = 322;
		break;
	case ROOM_BEDROOM_1_e:
		thisEggstia.temperature.jeedom_id = 227;
		thisEggstia.humidity.jeedom_id = 228;
		thisEggstia.pressure.jeedom_id = 0;
		thisEggstia.airQuality.airNote.jeedom_id = 0;
		break;
	}

}
