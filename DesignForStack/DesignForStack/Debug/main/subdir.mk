################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main/main.c 

OBJS += \
./main/main.o 

C_DEPS += \
./main/main.d 


# Each subdirectory must supply rules for building sources it contributes
main/%.o: ../main/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/xin/Documents/workspace/DesignStack/DesignForStack/DesignForStack/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


