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
	g++ -std=c++17 -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


