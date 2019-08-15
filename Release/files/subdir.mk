################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../files/file.cpp \
../files/fileExtensions.cpp \
../files/fileSet.cpp 

OBJS += \
./files/file.o \
./files/fileExtensions.o \
./files/fileSet.o 

CPP_DEPS += \
./files/file.d \
./files/fileExtensions.d \
./files/fileSet.d 


# Each subdirectory must supply rules for building sources it contributes
files/%.o: ../files/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


