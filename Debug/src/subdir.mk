################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Jungo_Home_Task.c \
../src/average_buffer.c \
../src/jungo.c 

OBJS += \
./src/Jungo_Home_Task.o \
./src/average_buffer.o \
./src/jungo.o 

C_DEPS += \
./src/Jungo_Home_Task.d \
./src/average_buffer.d \
./src/jungo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


