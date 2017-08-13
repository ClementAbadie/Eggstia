################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\Eggstia.ino \
..\HTU21D_Humidity_Temperature.ino \
..\RGB_LED.ino \
..\Shinyei_Model_PPD42NS_Particle_Sensor.ino \
..\buildConf.ino \
..\capacitiveTouch.ino \
..\myTimer.ino 

CPP_SRCS += \
..\sloeber.ino.cpp 

LINK_OBJ += \
.\sloeber.ino.cpp.o 

INO_DEPS += \
.\Eggstia.ino.d \
.\HTU21D_Humidity_Temperature.ino.d \
.\RGB_LED.ino.d \
.\Shinyei_Model_PPD42NS_Particle_Sensor.ino.d \
.\buildConf.ino.d \
.\capacitiveTouch.ino.d \
.\myTimer.ino.d 

CPP_DEPS += \
.\sloeber.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Eggstia.o: ..\Eggstia.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

HTU21D_Humidity_Temperature.o: ..\HTU21D_Humidity_Temperature.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

RGB_LED.o: ..\RGB_LED.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

Shinyei_Model_PPD42NS_Particle_Sensor.o: ..\Shinyei_Model_PPD42NS_Particle_Sensor.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

buildConf.o: ..\buildConf.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

capacitiveTouch.o: ..\capacitiveTouch.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

myTimer.o: ..\myTimer.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

sloeber.ino.cpp.o: ..\sloeber.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


