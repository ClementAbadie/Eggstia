/*
 * jeedom.ino
 *
 *  Created on: 13 sept. 2017
 *      Author: Clement ABADIE
 */

#include "jeedom.h"

void setJeedom(int ROOM) {
	// TODO Auto-generated constructor stub


	JEEDOM_API = "a14ntHuYmR95rkEY0eJAPwE4dMcEOlpB4j6B1XgKEDSbxWhR";
	JEEDOM_HOST = "192.168.0.190";


	switch(ROOM)
	{
	case ROOM_DEV_e:
		JEEDOM_VIRTUAL_TEMPERATURE_ID = 320;
		JEEDOM_VIRTUAL_HUMIDITY_ID = 321;

		break;
	case ROOM_BEDROOM_1_e:
		JEEDOM_VIRTUAL_TEMPERATURE_ID = 227;
		JEEDOM_VIRTUAL_HUMIDITY_ID = 228;
		break;
	}

}
