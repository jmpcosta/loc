################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_ecma/language_eiffel.cpp \
../code/language/family_ecma/language_family_ecma.cpp \
../code/language/family_ecma/language_javascript.cpp 

OBJS += \
./code/language/family_ecma/language_eiffel.o \
./code/language/family_ecma/language_family_ecma.o \
./code/language/family_ecma/language_javascript.o 

CPP_DEPS += \
./code/language/family_ecma/language_eiffel.d \
./code/language/family_ecma/language_family_ecma.d \
./code/language/family_ecma/language_javascript.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_ecma/%.o: ../code/language/family_ecma/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


