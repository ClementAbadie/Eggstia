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
..\jeedom.ino \
..\myTimer.ino \
..\myWifi.ino 

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
.\jeedom.ino.d \
.\myTimer.ino.d \
.\myWifi.ino.d 

CPP_DEPS += \
.\sloeber.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Eggstia.o: ..\Eggstia.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

HTU21D_Humidity_Temperature.o: ..\HTU21D_Humidity_Temperature.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

RGB_LED.o: ..\RGB_LED.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

Shinyei_Model_PPD42NS_Particle_Sensor.o: ..\Shinyei_Model_PPD42NS_Particle_Sensor.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

buildConf.o: ..\buildConf.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

capacitiveTouch.o: ..\capacitiveTouch.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

jeedom.o: ..\jeedom.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

myTimer.o: ..\myTimer.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

myWifi.o: ..\myWifi.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

sloeber.ino.cpp.o: ..\sloeber.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/tools/xtensa-lx106-elf-gcc/1.20.0-26-gb404fb9-2/bin/xtensa-lx106-elf-g++" -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/include" "-IC:\Program Files\sloeber\/arduinoPlugin/packages/esp8266/hardware/esp8266/2.3.0/tools/sdk/lwip/include" "-ID:\Dev\Git\Eggstia/Release/core" -c -Wall -Wextra -Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -DF_CPU=80000000L -DLWIP_OPEN_SRC  -DARDUINO=10802 -DARDUINO_ESP8266_ESP01 -DARDUINO_ARCH_ESP8266 "-DARDUINO_BOARD=\"ESP8266_ESP01\"" -DESP8266  -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\cores\esp8266" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\variants\generic" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\Wire" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\Adafruit_HTU21DF_Library\1.0.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\CapacitiveSensor\0.5.1" -I"C:\Program Files\sloeber\arduinoPlugin\libraries\ArduinoThread\2.1.1" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266HTTPClient\src" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi" -I"C:\Program Files\sloeber\arduinoPlugin\packages\esp8266\hardware\esp8266\2.3.0\libraries\ESP8266WiFi\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


