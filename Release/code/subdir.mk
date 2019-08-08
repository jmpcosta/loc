################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/cmdArgs.cpp \
../code/file.cpp \
../code/fileExtensions.cpp \
../code/fileSet.cpp \
../code/insight.cpp \
../code/language.cpp \
../code/main.cpp 

OBJS += \
./code/cmdArgs.o \
./code/file.o \
./code/fileExtensions.o \
./code/fileSet.o \
./code/insight.o \
./code/language.o \
./code/main.o 

CPP_DEPS += \
./code/cmdArgs.d \
./code/file.d \
./code/fileExtensions.d \
./code/fileSet.d \
./code/insight.d \
./code/language.d \
./code/main.d 


# Each subdirectory must supply rules for building sources it contributes
code/%.o: ../code/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


