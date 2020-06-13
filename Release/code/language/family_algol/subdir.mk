################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_algol/language_algol.cpp \
../code/language/family_algol/language_beta.cpp \
../code/language/family_algol/language_family_algol.cpp \
../code/language/family_algol/language_simula.cpp 

OBJS += \
./code/language/family_algol/language_algol.o \
./code/language/family_algol/language_beta.o \
./code/language/family_algol/language_family_algol.o \
./code/language/family_algol/language_simula.o 

CPP_DEPS += \
./code/language/family_algol/language_algol.d \
./code/language/family_algol/language_beta.d \
./code/language/family_algol/language_family_algol.d \
./code/language/family_algol/language_simula.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_algol/%.o: ../code/language/family_algol/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -I"${LOC_DIR}/code" -O2 -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


