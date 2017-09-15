
#include "HTU21D_Humidity_Temperature.h"


void setup_HTU21D()
{
#ifdef DEBUG
	Serial.println("setup_HTU21D");
#endif
	myHTU21DF.begin();
}

int check_HTU21D(){

	Wire.beginTransmission(HTU21DF_I2CADDR);
	Wire.write(HTU21DF_READREG);
	Wire.endTransmission();
	Wire.requestFrom(HTU21DF_I2CADDR, 1);
	int state_HTU21D = Wire.read() == 0x2;
	Serial.print("check_HTU21D : ");
	Serial.println(state_HTU21D);
	return (state_HTU21D); // after reset should be 0x2

}

void loop_HTU21D()
{

	value_humidity = myHTU21DF.readHumidity() * HTU21D_HUMIDITY_CORRECTION_RAMP + HTU21D_HUMIDITY_CORRECTION_OFFSET;
	value_temperature = myHTU21DF.readTemperature() * HTU21D_TEMPERATURE_CORRECTION_RAMP + HTU21D_TEMPERATURE_CORRECTION_OFFSET;

#ifdef DEBUG
	Serial.println("HTU21D_loop");

	Serial.print(" Temperature : ");
	Serial.print(value_temperature, 1);
	Serial.print(" °C");
	Serial.print(" Humidity : ");
	Serial.print(value_humidity, 1);
	Serial.println(" %");
#endif
}
