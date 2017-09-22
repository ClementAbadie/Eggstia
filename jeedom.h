/*
 * jeedom.h
 *
 *  Created on: 13 sept. 2017
 *      Author: Clement ABADIE
 */

#ifndef JEEDOM_H_
#define JEEDOM_H_
#include "buildConf.h"


	String JEEDOM_API = "";
	String JEEDOM_HOST = "";

	int JEEDOM_VIRTUAL_TEMPERATURE_ID = 0;
	int JEEDOM_VIRTUAL_HUMIDITY_ID = 0;

	void setup_Jeedom(Eggstia &thisEggstia);

#endif /* JEEDOM_H_ */
