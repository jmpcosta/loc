################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/others/language_fortran.cpp 

OBJS += \
./code/language/others/language_fortran.o 

CPP_DEPS += \
./code/language/others/language_fortran.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/others/%.o: ../code/language/others/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

