################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/parser/parser_factory.cpp \
../code/language/parser/streamParser.cpp 

OBJS += \
./code/language/parser/parser_factory.o \
./code/language/parser/streamParser.o 

CPP_DEPS += \
./code/language/parser/parser_factory.d \
./code/language/parser/streamParser.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/parser/%.o: ../code/language/parser/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


