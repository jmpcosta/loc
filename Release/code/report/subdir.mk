################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/report/csvReport.cpp \
../code/report/report.cpp \
../code/report/textReport.cpp 

OBJS += \
./code/report/csvReport.o \
./code/report/report.o \
./code/report/textReport.o 

CPP_DEPS += \
./code/report/csvReport.d \
./code/report/report.d \
./code/report/textReport.d 


# Each subdirectory must supply rules for building sources it contributes
code/report/%.o: ../code/report/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


