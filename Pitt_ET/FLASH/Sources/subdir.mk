################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Events.c" \
"../Sources/Motor.c" \
"../Sources/Sensor.c" \
"../Sources/TestFreeRTOS.c" \
"../Sources/main.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/Events.c \
../Sources/Motor.c \
../Sources/Sensor.c \
../Sources/TestFreeRTOS.c \
../Sources/main.c \
../Sources/sa_mtb.c \

OBJS += \
./Sources/Events.o \
./Sources/Motor.o \
./Sources/Sensor.o \
./Sources/TestFreeRTOS.o \
./Sources/main.o \
./Sources/sa_mtb.o \

C_DEPS += \
./Sources/Events.d \
./Sources/Motor.d \
./Sources/Sensor.d \
./Sources/TestFreeRTOS.d \
./Sources/main.d \
./Sources/sa_mtb.d \

OBJS_QUOTED += \
"./Sources/Events.o" \
"./Sources/Motor.o" \
"./Sources/Sensor.o" \
"./Sources/TestFreeRTOS.o" \
"./Sources/main.o" \
"./Sources/sa_mtb.o" \

C_DEPS_QUOTED += \
"./Sources/Events.d" \
"./Sources/Motor.d" \
"./Sources/Sensor.d" \
"./Sources/TestFreeRTOS.d" \
"./Sources/main.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/Events.o \
./Sources/Motor.o \
./Sources/Sensor.o \
./Sources/TestFreeRTOS.o \
./Sources/main.o \
./Sources/sa_mtb.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Events.o: ../Sources/Events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Events.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Events.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Motor.o: ../Sources/Motor.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Motor.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Motor.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Sensor.o: ../Sources/Sensor.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Sensor.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Sensor.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/TestFreeRTOS.o: ../Sources/TestFreeRTOS.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/TestFreeRTOS.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/TestFreeRTOS.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '


