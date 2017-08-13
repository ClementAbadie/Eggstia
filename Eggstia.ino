#include "Arduino.h"
#include "Thread.h"
#include "ThreadController.h"
#include "StaticThreadController.h"

#include "buildConf.h"
#include "RGB_LED.h"
#include "Shinyei_Model_PPD42NS_Particle_Sensor.h"
#include "HTU21D_Humidity_Temperature.h"
#include "capacitiveTouch.h"


// Values threshold

#define THRESHOLD_TEMPERATURE_MIN 15.0
#define THRESHOLD_TEMPERATURE_MAX 25.0
#define THRESHOLD_HUMIDITY_MIN 30
#define THRESHOLD_HUMIDITY_MAX 70
#define THRESHOLD_NOTE_MIN 0
#define THRESHOLD_NOTE_MAX 10

// THREADS

#define THREAD_DEFAULT_INTERVAL 10
Thread myThread = Thread();

Thread thread_readingSensors = Thread();
Thread thread_readingUserInteract = Thread();
Thread thread_settingLED = Thread();
Thread thread_dataSend = Thread();

ThreadController threadController = ThreadController();

enum LED_STATUS_t {
	LED_STATUS_TEMPERATURE_e,
	LED_STATUS_HUMIDITY_e,
	LED_STATUS_AIRNOTE_e,
	LED_STATUS_GLOBAL_NOTE_e
};




LED_STATUS_t led_status = LED_STATUS_TEMPERATURE_e;


void loop_readingSensors(){
#ifdef DEBUG
	Serial.println("loop_readingSensors");
#endif
	loop_PPD42NS();
	loop_HTU21D();
}

void loop_readingUserInteract(){
#ifdef DEBUG
	Serial.println("loop_readingUserInteract");
#endif

	loop_capacitiveSensor();
}

void loop_settingLED(){
#ifdef DEBUG
	Serial.println("loop_settingLED");
#endif
	switch ( switch_status ) {
	case SWITCH_STATUS_ON_e:
		switch ( led_status ) {
		case LED_STATUS_TEMPERATURE_e:
			RGB_LED_display_value_RGB(value_temperature, (float) THRESHOLD_TEMPERATURE_MIN, (float) THRESHOLD_TEMPERATURE_MAX);
		  break;
		case LED_STATUS_HUMIDITY_e:
			RGB_LED_display_value_RGB(value_humidity, (float) THRESHOLD_HUMIDITY_MIN, (float) THRESHOLD_HUMIDITY_MAX);
		  break;
		case LED_STATUS_AIRNOTE_e:
			RGB_LED_display_value_RGB(value_airNote, (float) 0.0, (float) 10.0);
		  break;
		case LED_STATUS_GLOBAL_NOTE_e:
			RGB_LED_display_value_RGB(tools_GlobalNoteCalculator(), (float) 0.0, (float) 10.0);
		  break;
		default:
		  // Code
		  break;
		}
	  break;
	case SWITCH_STATUS_OFF_e:
			RGB_LED_set_black();
	  break;
	default:
	  // Code
	  break;
	}




}

void loop_dataSend(){
#ifdef DEBUG
	Serial.println("loop_dataSend");
#endif
}



int tools_GlobalNoteCalculator(){
	int VALUE_TEMPERATURE_255 =  ( (int) value_temperature - THRESHOLD_TEMPERATURE_MIN ) * 255 / THRESHOLD_TEMPERATURE_MAX;
	int VALUE_HUMIDITY_255 =  ( (int) value_humidity - THRESHOLD_HUMIDITY_MIN ) * 255 / THRESHOLD_HUMIDITY_MAX;
	int VALUE_AIR_NOTE_255 =  ( (int) value_airNote - THRESHOLD_NOTE_MIN ) * 255 / THRESHOLD_NOTE_MAX;

	return (VALUE_TEMPERATURE_255 + VALUE_TEMPERATURE_255 + VALUE_TEMPERATURE_255)/3;

}


//The setup function is called once at startup of the sketch
void setup()
{
	// Add your initialization code here

#ifdef DEBUG
	Serial.begin(9600);

	Serial.println("Project : Eggstia");
	Serial.print("Build : ");
	Serial.print(__TIME__);
	Serial.print(" ");
	Serial.println(__DATE__);
	Serial.println("Setting up...");
#endif


	setup_RGB_LED();

	RGB_LED_set_blue();
	delay(3000);

	setup_timer();
	setup_HTU21D();
	setup_capacitiveSensor();

	thread_readingSensors.enabled = true;
	thread_readingUserInteract.enabled = true;
	thread_settingLED.enabled = true;
	thread_dataSend.enabled = true;

	thread_readingSensors.setInterval(1000);
	thread_readingUserInteract.setInterval(1);
	thread_settingLED.setInterval(1);
	thread_dataSend.setInterval(1000);


	thread_readingSensors.onRun(loop_readingSensors);
	thread_readingUserInteract.onRun(loop_readingUserInteract);
	thread_settingLED.onRun(loop_settingLED);
	thread_dataSend.onRun(loop_dataSend);

	threadController.add(&thread_readingSensors);
	threadController.add(&thread_readingUserInteract);
	threadController.add(&thread_settingLED);
	threadController.add(&thread_dataSend);



	RGB_LED_set_black();
	delay(200);
	RGB_LED_set_green();
	delay(100);
	RGB_LED_set_black();
	delay(100);
	RGB_LED_set_green();
	delay(100);
	RGB_LED_set_black();


#ifdef DEBUG
	Serial.println("Setted up !");
#endif
}

// The loop function is called in an endless loop
void loop()
{
	//Add your repeated code here
#ifdef DEBUG
	//Serial.println("loop_main");
#endif

#ifdef TEST
	RGB_LED_display_value_RGB(19.9, (float) THRESHOLD_TEMPERATURE_MIN, (float) THRESHOLD_TEMPERATURE_MAX);
	delay(990);
#else
	threadController.run();
#endif

//	delay(100);

}
