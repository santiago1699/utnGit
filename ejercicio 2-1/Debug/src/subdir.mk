################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ejercicio\ 2-1.c 

C_DEPS += \
./src/ejercicio\ 2-1.d 

OBJS += \
./src/ejercicio\ 2-1.o 


# Each subdirectory must supply rules for building sources it contributes
src/ejercicio\ 2-1.o: ../src/ejercicio\ 2-1.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ejercicio 2-1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ejercicio\ 2-1.d ./src/ejercicio\ 2-1.o

.PHONY: clean-src

