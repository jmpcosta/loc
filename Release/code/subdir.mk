################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/cmdArgs.cpp \
../code/code.cpp \
../code/main.cpp \
../code/options.cpp \
../code/statistics.cpp 

OBJS += \
./code/cmdArgs.o \
./code/code.o \
./code/main.o \
./code/options.o \
./code/statistics.o 

CPP_DEPS += \
./code/cmdArgs.d \
./code/code.d \
./code/main.d \
./code/options.d \
./code/statistics.d 


# Each subdirectory must supply rules for building sources it contributes
code/%.o: ../code/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


