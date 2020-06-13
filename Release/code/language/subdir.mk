################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/LanguageProvider.cpp \
../code/language/language.cpp \
../code/language/language_factory.cpp 

OBJS += \
./code/language/LanguageProvider.o \
./code/language/language.o \
./code/language/language_factory.o 

CPP_DEPS += \
./code/language/LanguageProvider.d \
./code/language/language.d \
./code/language/language_factory.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/%.o: ../code/language/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -I"${LOC_DIR}/code" -O2 -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


