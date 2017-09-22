/*
 * myWifi.h
 *
 *  Created on: 12 août 2017
 *      Author: Clement ABADIE
 */

#ifndef MYWIFI_H_
#define MYWIFI_H_

#include "dataTools.h"

#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

const char* ssid = "SFR-e170";
const char* password = "QY3XW4EDHDU4";



void setup_wifi();
int check_wifi();


void loop_datasend(Eggstia& thisEggstia);
void datasend(int virtual_device_ID, float virtual_device_value);

#endif /* myWifi.h */
