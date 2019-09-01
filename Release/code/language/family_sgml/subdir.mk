################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_sgml/language_family_sgml.cpp \
../code/language/family_sgml/language_html.cpp \
../code/language/family_sgml/language_xml.cpp 

OBJS += \
./code/language/family_sgml/language_family_sgml.o \
./code/language/family_sgml/language_html.o \
./code/language/family_sgml/language_xml.o 

CPP_DEPS += \
./code/language/family_sgml/language_family_sgml.d \
./code/language/family_sgml/language_html.d \
./code/language/family_sgml/language_xml.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_sgml/%.o: ../code/language/family_sgml/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


