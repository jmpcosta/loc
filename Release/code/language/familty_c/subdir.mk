################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/familty_c/language_c.cpp \
../code/language/familty_c/language_cpp.cpp \
../code/language/familty_c/language_family_c.cpp \
../code/language/familty_c/language_java.cpp 

OBJS += \
./code/language/familty_c/language_c.o \
./code/language/familty_c/language_cpp.o \
./code/language/familty_c/language_family_c.o \
./code/language/familty_c/language_java.o 

CPP_DEPS += \
./code/language/familty_c/language_c.d \
./code/language/familty_c/language_cpp.d \
./code/language/familty_c/language_family_c.d \
./code/language/familty_c/language_java.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/familty_c/%.o: ../code/language/familty_c/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -I"/home/joao/workspace/loc/code/language" -I"/home/joao/workspace/loc/code/language/family_c" -I"/home/joao/workspace/loc/code/language/family_bourne" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


