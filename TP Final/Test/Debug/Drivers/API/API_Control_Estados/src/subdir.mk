################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/API/API_Control_Estados/src/API_Control_Estados.c 

OBJS += \
./Drivers/API/API_Control_Estados/src/API_Control_Estados.o 

C_DEPS += \
./Drivers/API/API_Control_Estados/src/API_Control_Estados.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/API/API_Control_Estados/src/%.o Drivers/API/API_Control_Estados/src/%.su: ../Drivers/API/API_Control_Estados/src/%.c Drivers/API/API_Control_Estados/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/SensorTemp/inc" -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/Buzzer/inc" -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/API_uart/inc" -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/API_delay/inc" -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/API_debounce/inc" -I"C:/Users/diego/Documents/Especializacion Sistemas Embebidos/Primer Bimestre/Programacion de Microprocesadores/PdM_workspace/TP Final/Test/Drivers/API/API_Control_Estados/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-API-2f-API_Control_Estados-2f-src

clean-Drivers-2f-API-2f-API_Control_Estados-2f-src:
	-$(RM) ./Drivers/API/API_Control_Estados/src/API_Control_Estados.d ./Drivers/API/API_Control_Estados/src/API_Control_Estados.o ./Drivers/API/API_Control_Estados/src/API_Control_Estados.su

.PHONY: clean-Drivers-2f-API-2f-API_Control_Estados-2f-src

