################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/parser/parser.cpp \
../code/parser/parser_factory.cpp \
../code/parser/streamParser.cpp 

OBJS += \
./code/parser/parser.o \
./code/parser/parser_factory.o \
./code/parser/streamParser.o 

CPP_DEPS += \
./code/parser/parser.d \
./code/parser/parser_factory.d \
./code/parser/streamParser.d 


# Each subdirectory must supply rules for building sources it contributes
code/parser/%.o: ../code/parser/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -flto -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


