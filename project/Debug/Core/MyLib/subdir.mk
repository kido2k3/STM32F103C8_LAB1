################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/MyLib/segment_led.c 

OBJS += \
./Core/MyLib/segment_led.o 

C_DEPS += \
./Core/MyLib/segment_led.d 


# Each subdirectory must supply rules for building sources it contributes
Core/MyLib/%.o Core/MyLib/%.su Core/MyLib/%.cyclo: ../Core/MyLib/%.c Core/MyLib/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-MyLib

clean-Core-2f-MyLib:
	-$(RM) ./Core/MyLib/segment_led.cyclo ./Core/MyLib/segment_led.d ./Core/MyLib/segment_led.o ./Core/MyLib/segment_led.su

.PHONY: clean-Core-2f-MyLib

