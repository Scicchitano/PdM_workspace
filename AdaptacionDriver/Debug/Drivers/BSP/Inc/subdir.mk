################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Inc/stm32f4xx_nucleo_144.c 

OBJS += \
./Drivers/BSP/Inc/stm32f4xx_nucleo_144.o 

C_DEPS += \
./Drivers/BSP/Inc/stm32f4xx_nucleo_144.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Inc/%.o Drivers/BSP/Inc/%.su: ../Drivers/BSP/Inc/%.c Drivers/BSP/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Inc

clean-Drivers-2f-BSP-2f-Inc:
	-$(RM) ./Drivers/BSP/Inc/stm32f4xx_nucleo_144.d ./Drivers/BSP/Inc/stm32f4xx_nucleo_144.o ./Drivers/BSP/Inc/stm32f4xx_nucleo_144.su

.PHONY: clean-Drivers-2f-BSP-2f-Inc

