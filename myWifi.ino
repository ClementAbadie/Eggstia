/*
 *  HTTP over TLS (HTTPS) example sketch
 *
 *  This example demonstrates how to use
 *  WiFiClientSecure class to access HTTPS API.
 *  We fetch and display the status of
 *  esp8266/Arduino project continuous integration
 *  build.
 *
 *  Created by Ivan Grokhotkov, 2015.
 *  This example is in public domain.
 */
#include "myWifi.h"

void setup_wifi() {
	Serial.print("setup_wifi");
	Serial.print("connecting to ");
	Serial.println(ssid);
	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
	 }
	Serial.println("");
	Serial.println("WiFi connected");
	Serial.println("IP address: ");
	Serial.println(WiFi.localIP());

}

void loop_datasend(int virtual_device_ID, float virtual_device_value)
{
	HTTPClient http;    //Declare object of class HTTPClient

	String url = 	"http://" + host + "/core/api/jeeApi.php?apikey=" + JEEDOM_API +
					"&type=virtual&id=" + String(virtual_device_ID) +
					"&value=" + String(virtual_device_value);

	http.begin(url);      //Specify request destination
	http.addHeader("Content-Type", "text/plain");  //Specify content-type header

	int httpCode = -1;
	String payload = "";

	httpCode = http.GET();   //Send the request
	//int httpCode = http.POST("Message from ESP8266");   //Send the request
	payload = http.getString();                  //Get the response payload

	Serial.println(httpCode);   //Print HTTP return code
	Serial.println(payload);    //Print request response payload

	http.end();  //Close connection

}
