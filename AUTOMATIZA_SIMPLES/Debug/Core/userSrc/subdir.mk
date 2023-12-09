################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/userSrc/loadControl.c 

OBJS += \
./Core/userSrc/loadControl.o 

C_DEPS += \
./Core/userSrc/loadControl.d 


# Each subdirectory must supply rules for building sources it contributes
Core/userSrc/%.o Core/userSrc/%.su Core/userSrc/%.cyclo: ../Core/userSrc/%.c Core/userSrc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G071xx -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Admin/STM32CubeIDE/workspace_1.14.0/AUTOMATIZA_SIMPLES/Core/userInc" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.14.0/AUTOMATIZA_SIMPLES/Core/userSrc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-userSrc

clean-Core-2f-userSrc:
	-$(RM) ./Core/userSrc/loadControl.cyclo ./Core/userSrc/loadControl.d ./Core/userSrc/loadControl.o ./Core/userSrc/loadControl.su

.PHONY: clean-Core-2f-userSrc

