################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_idl/language_family_idl.cpp \
../code/language/family_idl/language_idl_omg.cpp 

OBJS += \
./code/language/family_idl/language_family_idl.o \
./code/language/family_idl/language_idl_omg.o 

CPP_DEPS += \
./code/language/family_idl/language_family_idl.d \
./code/language/family_idl/language_idl_omg.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_idl/%.o: ../code/language/family_idl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


