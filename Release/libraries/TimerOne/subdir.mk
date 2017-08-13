################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:\Program\ Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0\TimerOne.cpp 

LINK_OBJ += \
.\libraries\TimerOne\TimerOne.cpp.o 

CPP_DEPS += \
.\libraries\TimerOne\TimerOne.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
libraries\TimerOne\TimerOne.cpp.o: C:\Program\ Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0\TimerOne.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega32u4 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_LEONARDO -DARDUINO_ARCH_AVR -DUSB_VID=0x2341 -DUSB_PID=0x8036 "-DUSB_MANUFACTURER=\"Unknown\"" "-DUSB_PRODUCT=\"Arduino Leonardo\""  -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\cores\arduino" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\variants\leonardo" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.19\libraries\Wire\src" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\TimerOne\1.1.0" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


