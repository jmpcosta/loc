################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_basic/language_basic.cpp \
../code/language/family_basic/language_family_basic.cpp 

OBJS += \
./code/language/family_basic/language_basic.o \
./code/language/family_basic/language_family_basic.o 

CPP_DEPS += \
./code/language/family_basic/language_basic.d \
./code/language/family_basic/language_family_basic.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_basic/%.o: ../code/language/family_basic/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -flto -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


