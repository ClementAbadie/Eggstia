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

// LED mode change times

#define RGB_LED_SHOW_MODE_TIME 1000
#define RGB_LED_SHOW_BLACK_TIME 100

// THREADS

#define THREAD_DEFAULT_INTERVAL 10
Thread myThread = Thread();

Thread thread_readingSensors = Thread();
Thread thread_readingUserInteract = Thread();
Thread thread_settingLED = Thread();
Thread thread_dataSend = Thread();
Thread thread_timer = Thread();

ThreadController threadController = ThreadController();

enum LED_STATUS_t {
	LED_STATUS_TEMPERATURE_e,
	LED_STATUS_HUMIDITY_e,
	LED_STATUS_AIRNOTE_e,
	LED_STATUS_GLOBAL_NOTE_e
};



LED_STATUS_t led_status = LED_STATUS_TEMPERATURE_e;
LED_STATUS_t led_status_old = led_status;


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

void loop_RGB_LED(){
#ifdef DEBUG
	Serial.println("loop_RGB_LED");
#endif

	if(led_status != led_status_old)
	{
		led_status_old = led_status;
		timeout_led = RGB_LED_SHOW_MODE_TIME + 3 * RGB_LED_SHOW_BLACK_TIME;
	}

	if(timeout_led == 0)
	{

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
				RGB_LED_display_value(value_airNote, (float) THRESHOLD_NOTE_MIN, (float) THRESHOLD_NOTE_MAX, LED_COLOR_R_e, LED_COLOR_G_e);
				break;
			case LED_STATUS_GLOBAL_NOTE_e:
				RGB_LED_display_value(tools_GlobalNoteCalculator(), (float) THRESHOLD_NOTE_MIN, (float) THRESHOLD_NOTE_MAX, LED_COLOR_R_e,LED_COLOR_G_e);
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
	else if ((timeout_led < RGB_LED_SHOW_BLACK_TIME)
			|| (timeout_led < 3 * RGB_LED_SHOW_BLACK_TIME && timeout_led > 2 * RGB_LED_SHOW_BLACK_TIME )
			|| (timeout_led > RGB_LED_SHOW_MODE_TIME + 2 * RGB_LED_SHOW_BLACK_TIME))
	{
		RGB_LED_set_black();
	}
	else
	{
		switch ( led_status ) {
		case LED_STATUS_TEMPERATURE_e:
			RGB_LED_set_red();
			break;
		case LED_STATUS_HUMIDITY_e:
			RGB_LED_set_blue();
			break;
		case LED_STATUS_AIRNOTE_e:
			RGB_LED_set_green();
			break;
		case LED_STATUS_GLOBAL_NOTE_e:
			RGB_LED_set_white();
			break;
		default:
			// Code
			break;
		}
	}
}





void loop_dataSend(){
#ifdef DEBUG
	Serial.println("loop_dataSend");
#endif
}

void loop_timer(){
#ifdef DEBUG
	Serial.println("loop_timer");
#endif
	callback_timer();
}



int tools_GlobalNoteCalculator(){

	//TODO : Note calcul of hum and temp : MED is the best
	int VALUE_TEMPERATURE_255 =  ( (int) value_temperature - THRESHOLD_TEMPERATURE_MIN ) * 255 / THRESHOLD_TEMPERATURE_MAX;
	int VALUE_HUMIDITY_255 =  ( (int) value_humidity - THRESHOLD_HUMIDITY_MIN ) * 255 / THRESHOLD_HUMIDITY_MAX;
	int VALUE_AIR_NOTE_255 =  ( (int) value_airNote - THRESHOLD_NOTE_MIN ) * 255 / THRESHOLD_NOTE_MAX;

	int VALUE_GLOBAL_NOTE_255 =  (VALUE_TEMPERATURE_255 + VALUE_HUMIDITY_255 + VALUE_AIR_NOTE_255)/3;

	int VALUE_GLOBAL_NOTE =  VALUE_GLOBAL_NOTE_255 * 10 / 255;

#ifdef DEBUG
	Serial.print("Global Note : ");
	Serial.print(VALUE_GLOBAL_NOTE_255);
	Serial.print("(");
	Serial.print(VALUE_GLOBAL_NOTE);
	Serial.print("/");
	Serial.print(THRESHOLD_NOTE_MAX);
	Serial.println(")");
#endif

	return VALUE_GLOBAL_NOTE;

}


//The setup function is called once at startup of the sketch
void setup()
{
	// Add your initialization code here

#ifdef DEBUG
	Serial.begin(115200);

	Serial.println("Project : Eggstia");
	Serial.print("Build : ");
	Serial.print(__TIME__);
	Serial.print(" ");
	Serial.println(__DATE__);
	Serial.println("Setting up...");
#endif


	setup_RGB_LED();

	RGB_LED_set_blue();
	delay(1000);

	setup_timer();
	setup_HTU21D();
	setup_capacitiveSensor();

	loop_readingSensors();

	thread_readingSensors.enabled = true;
	thread_readingUserInteract.enabled = true;
	thread_settingLED.enabled = true;
	thread_dataSend.enabled = true;
	thread_timer.enabled = true;

	thread_readingSensors.setInterval(10000);
	thread_readingUserInteract.setInterval(1);
	thread_settingLED.setInterval(1);
	thread_dataSend.setInterval(1000);
	thread_timer.setInterval(1000);


	thread_readingSensors.onRun(loop_readingSensors);
	thread_readingUserInteract.onRun(loop_readingUserInteract);
	thread_settingLED.onRun(loop_RGB_LED);
	thread_dataSend.onRun(loop_dataSend);
	thread_timer.onRun(loop_timer);

	threadController.add(&thread_readingSensors);
	threadController.add(&thread_readingUserInteract);
	threadController.add(&thread_settingLED);
	threadController.add(&thread_dataSend);
	threadController.add(&thread_timer);



	RGB_LED_set_black();
	delay(RGB_LED_SHOW_BLACK_TIME);
	RGB_LED_set_green();
	delay(RGB_LED_SHOW_BLACK_TIME);
	RGB_LED_set_black();
	delay(RGB_LED_SHOW_BLACK_TIME);
	RGB_LED_set_green();
	delay(RGB_LED_SHOW_BLACK_TIME);
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
	Serial.println("loop_main");
	delay(100);
#endif

#ifdef TEST
	RGB_LED_display_value_RGB(19.9, (float) THRESHOLD_TEMPERATURE_MIN, (float) THRESHOLD_TEMPERATURE_MAX);
	delay(990);
#else
	threadController.run();
#endif




}
