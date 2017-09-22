#include "Eggstia.h"




void loop_readingSensors(){
#ifdef DEBUG
	Serial.println("loop_readingSensors");
#endif
	loop_PPD42NS();

	if(!check_HTU21D(thisEggstia.temperature, thisEggstia.humidity))
	{
		setup_HTU21D();
	}
	loop_HTU21D(thisEggstia.temperature, thisEggstia.humidity);
}

void loop_readingUserInteract(){
#ifdef DEBUG
	Serial.println("loop_readingUserInteract");
#endif

	loop_capacitiveSensor();
}

void loop_writeUserInteract(){
#ifdef DEBUG
	Serial.println("loop_readingUserInteract");
#endif

	loop_RGB_LED(thisEggstia);
}



void loop_dataSend(){
#ifdef DEBUG
	Serial.println("loop_dataSend");
#endif

	if(!check_wifi()){
		setup_wifi();
	}

	loop_datasend(thisEggstia);
}

void loop_timer(){
#ifdef DEBUG
	//Serial.println("loop_timer");
#endif
	callback_timer();
}






//The setup function is called once at startup of the sketch
void setup()
{
	// Add your initialization code here

#ifdef DEBUG
	Serial.begin(115200);
	Serial.println("");
	Serial.println("");
	Serial.println("Project : Eggstia");
	Serial.print("Build : ");
	Serial.print(__TIME__);
	Serial.print(" ");
	Serial.println(__DATE__);
	Serial.println("Setting up...");
#endif

	//setup_RGB_LED();

	//RGB_LED_set_blue();
	//delay(1000);

	setup_Jeedom(thisEggstia);

	//setup_capacitiveSensor();

	loop_readingSensors();

	//setup_wifi();

	thread_readingSensors.enabled = true;
	thread_readingUserInteract.enabled = true;
	thread_settingLED.enabled = true;
	thread_dataSend.enabled = true;
	thread_timer.enabled = true;

	thread_readingSensors.setInterval(10000);
	thread_readingUserInteract.setInterval(1);
	thread_settingLED.setInterval(1);
	thread_dataSend.setInterval(60 * 1000);
	thread_timer.setInterval(1000);


	thread_timer.onRun(loop_timer);
	thread_readingSensors.onRun(loop_readingSensors);
	thread_readingUserInteract.onRun(loop_readingUserInteract);
	thread_settingLED.onRun(loop_writeUserInteract);
	thread_dataSend.onRun(loop_dataSend);

	threadController.add(&thread_timer);
	threadController.add(&thread_readingSensors);
//	threadController.add(&thread_readingUserInteract);
//	threadController.add(&thread_settingLED);
	threadController.add(&thread_dataSend);



#ifdef DEBUG
	Serial.println("Setted up !");
#endif
}

// The loop function is called in an endless loop
void loop()
{
	//Add your repeated code here
#ifdef DEBUG


#endif

#ifdef TEST



#else
	threadController.run();
#endif
}
