/*
 * myWifi.h
 *
 *  Created on: 12 août 2017
 *      Author: Clement ABADIE
 */

#ifndef MYWIFI_H_
#define MYWIFI_H_


#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

const char* ssid = "SFR-e170";
const char* password = "QY3XW4EDHDU4";

String JEEDOM_API = "a14ntHuYmR95rkEY0eJAPwE4dMcEOlpB4j6B1XgKEDSbxWhR";

String host = "192.168.0.190";

int JEEDOM_VIRTUAL_TEMPERATURE_ID = 227;
int JEEDOM_VIRTUAL_HUMIDITY_ID = 228;

void setup_wifi();

void loop_datasend(int virtual_device_ID, int virtual_device_value);

#endif /* myWifi.h */
