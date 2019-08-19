################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/windows/language_dos.cpp \
../code/language/windows/language_powershell.cpp 

OBJS += \
./code/language/windows/language_dos.o \
./code/language/windows/language_powershell.o 

CPP_DEPS += \
./code/language/windows/language_dos.d \
./code/language/windows/language_powershell.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/windows/%.o: ../code/language/windows/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


