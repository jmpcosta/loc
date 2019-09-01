################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/others/language_fortran.cpp \
../code/language/others/language_perl.cpp \
../code/language/others/language_python.cpp 

OBJS += \
./code/language/others/language_fortran.o \
./code/language/others/language_perl.o \
./code/language/others/language_python.o 

CPP_DEPS += \
./code/language/others/language_fortran.d \
./code/language/others/language_perl.d \
./code/language/others/language_python.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/others/%.o: ../code/language/others/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


