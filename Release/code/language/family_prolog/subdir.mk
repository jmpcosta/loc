################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_prolog/language_family_prolog.cpp \
../code/language/family_prolog/language_prolog.cpp 

OBJS += \
./code/language/family_prolog/language_family_prolog.o \
./code/language/family_prolog/language_prolog.o 

CPP_DEPS += \
./code/language/family_prolog/language_family_prolog.d \
./code/language/family_prolog/language_prolog.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_prolog/%.o: ../code/language/family_prolog/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


