
#include "HTU21D_Humidity_Temperature.h"


void setup_HTU21D()
{

#ifdef DEBUG
  Serial.println("HTU21D_setup");
#endif
  myHumidity.begin();
}

void loop_HTU21D()
{
	value_humidity = myHumidity.readHumidity() * HTU21D_HUMIDITY_CORRECTION_RAMP + HTU21D_HUMIDITY_CORRECTION_OFFSET;
	value_temperature = myHumidity.readTemperature() * HTU21D_TEMPERATURE_CORRECTION_RAMP + HTU21D_TEMPERATURE_CORRECTION_OFFSET;
#ifdef DEBUG
  Serial.println("HTU21D_loop");


  Serial.print(" Temperature : ");
  Serial.print(value_temperature, 1);
  Serial.print(" C");
  Serial.print(" Humidity : ");
  Serial.print(value_humidity, 1);
  Serial.println(" %");

#endif
}
