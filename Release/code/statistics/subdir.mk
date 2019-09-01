################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/statistics/StatisticsProvider.cpp \
../code/statistics/statistics.cpp 

OBJS += \
./code/statistics/StatisticsProvider.o \
./code/statistics/statistics.o 

CPP_DEPS += \
./code/statistics/StatisticsProvider.d \
./code/statistics/statistics.d 


# Each subdirectory must supply rules for building sources it contributes
code/statistics/%.o: ../code/statistics/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


