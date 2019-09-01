################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_bourne/language_bash.cpp \
../code/language/family_bourne/language_bourne.cpp \
../code/language/family_bourne/language_csh.cpp \
../code/language/family_bourne/language_family_bourne.cpp 

OBJS += \
./code/language/family_bourne/language_bash.o \
./code/language/family_bourne/language_bourne.o \
./code/language/family_bourne/language_csh.o \
./code/language/family_bourne/language_family_bourne.o 

CPP_DEPS += \
./code/language/family_bourne/language_bash.d \
./code/language/family_bourne/language_bourne.d \
./code/language/family_bourne/language_csh.d \
./code/language/family_bourne/language_family_bourne.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_bourne/%.o: ../code/language/family_bourne/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


