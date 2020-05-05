################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_pascal/language_ada.cpp \
../code/language/family_pascal/language_family_pascal.cpp \
../code/language/family_pascal/language_pascal.cpp 

OBJS += \
./code/language/family_pascal/language_ada.o \
./code/language/family_pascal/language_family_pascal.o \
./code/language/family_pascal/language_pascal.o 

CPP_DEPS += \
./code/language/family_pascal/language_ada.d \
./code/language/family_pascal/language_family_pascal.d \
./code/language/family_pascal/language_pascal.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_pascal/%.o: ../code/language/family_pascal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


