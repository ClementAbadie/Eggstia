/*
 * RGB_LED.ino
 *
 *  Created on: 12 aout 2017
 *      Author: Clement ABADIE
 */

#include "RGB_LED.h"


void setup_RGB_LED()
{
	pinMode(RGB_LED_PIN_R, OUTPUT);
	pinMode(RGB_LED_PIN_G, OUTPUT);
	pinMode(RGB_LED_PIN_B, OUTPUT);
}

void RGB_LED_raw_set(int R, int G, int B)
{
	analogWrite(RGB_LED_PIN_R,255-R);
	analogWrite(RGB_LED_PIN_G,255-G);
	analogWrite(RGB_LED_PIN_B,255-B);
}

void RGB_LED_set(int R, int G, int B)
{
	RGB_LED_raw_set(255*R/100,255*G/100,255*B/100);
}

void RGB_LED_set_red()
{
	RGB_LED_raw_set(255,0,0);
}

void RGB_LED_set_blue()
{
	RGB_LED_raw_set(0,0,255);
}

void RGB_LED_set_green()
{
	RGB_LED_raw_set(0,255,0);
}

void RGB_LED_set_yellow()
{
	RGB_LED_raw_set(255,204,0);
}

void RGB_LED_set_purple()
{
	RGB_LED_raw_set(255,0,255);
}

void RGB_LED_set_cyan()
{
	RGB_LED_raw_set(0,255,255);
}


void RGB_LED_set_black()
{
	RGB_LED_raw_set(0,0,0);
}

void RGB_LED_set_white()
{
	RGB_LED_raw_set(255,255,255);
}

void RGB_LED_set_orange()
{
	RGB_LED_raw_set(255,102,0);
}


void RGB_LED_display_value(float VALUE, int MIN, int MAX, LED_COLOR_t MIN_COLOR, LED_COLOR_t MAX_COLOR){

	// Scaling
	int VALUE_255 =  ( (int) VALUE - MIN ) * 255 / MAX;
	// Reverse logic
	int MIN_value = VALUE_255;
	int MAX_value = 255 - VALUE_255;


	analogWrite(MIN_COLOR,MIN_value);
	analogWrite(MAX_COLOR,MAX_value);

}

void RGB_LED_display_value_RGB(float VALUE, float MIN, float MAX){


	// Scaling
	// Reverse logic
	int VALUE_255 = 0;
	int R = 0;
	int G = 0;
	int B = 0;

	float MED = (MAX + MIN) / 2;

	if(VALUE == MED)
	{
		R = 0;
		G = 255;
		B = 0;
	}
	else if(VALUE>MAX)
	{
		R = 255;
		G = 0;
		B = 0;
	}
	else if(VALUE<MIN)
	{
		R = 0;
		G = 0;
		B = 255;
	}
	else if(VALUE>MED)
	{
		VALUE_255 =  ( VALUE - MED ) * 255 / (MAX - MED);
		R = VALUE_255;
		G = 255 - VALUE_255;
		B = 0;
	}
	else if(VALUE<MED)
	{
		VALUE_255 =  ( VALUE - MIN ) * 255 / (MED - MIN);
		R = 0;
		G = VALUE_255;
		B = 255 - VALUE_255;
	}

#ifdef DEBUG
	Serial.print("R : ");
	Serial.print(R);
	Serial.print(" G : ");
	Serial.print(G);
	Serial.print(" B : ");
	Serial.print(B);
	Serial.print(" VALUE_255 : ");
	Serial.println(VALUE_255);
#endif

	RGB_LED_raw_set(R,G,B);
}
