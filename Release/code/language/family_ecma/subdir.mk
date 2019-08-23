################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_ecma/language_family_ecma.cpp \
../code/language/family_ecma/language_javascript.cpp 

OBJS += \
./code/language/family_ecma/language_family_ecma.o \
./code/language/family_ecma/language_javascript.o 

CPP_DEPS += \
./code/language/family_ecma/language_family_ecma.d \
./code/language/family_ecma/language_javascript.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_ecma/%.o: ../code/language/family_ecma/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


