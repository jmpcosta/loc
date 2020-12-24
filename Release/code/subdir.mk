################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/code.cpp \
../code/commandLine.cpp \
../code/converter.cpp \
../code/main.cpp \
../code/options.cpp 

OBJS += \
./code/code.o \
./code/commandLine.o \
./code/converter.o \
./code/main.o \
./code/options.o 

CPP_DEPS += \
./code/code.d \
./code/commandLine.d \
./code/converter.d \
./code/main.d \
./code/options.d 


# Each subdirectory must supply rules for building sources it contributes
code/%.o: ../code/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -flto -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


