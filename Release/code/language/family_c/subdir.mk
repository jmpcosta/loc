################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_c/language_awk.cpp \
../code/language/family_c/language_c.cpp \
../code/language/family_c/language_cpp.cpp \
../code/language/family_c/language_csharp.cpp \
../code/language/family_c/language_family_c.cpp \
../code/language/family_c/language_java.cpp \
../code/language/family_c/language_php.cpp \
../code/language/family_c/language_swift.cpp 

OBJS += \
./code/language/family_c/language_awk.o \
./code/language/family_c/language_c.o \
./code/language/family_c/language_cpp.o \
./code/language/family_c/language_csharp.o \
./code/language/family_c/language_family_c.o \
./code/language/family_c/language_java.o \
./code/language/family_c/language_php.o \
./code/language/family_c/language_swift.o 

CPP_DEPS += \
./code/language/family_c/language_awk.d \
./code/language/family_c/language_c.d \
./code/language/family_c/language_cpp.d \
./code/language/family_c/language_csharp.d \
./code/language/family_c/language_family_c.d \
./code/language/family_c/language_java.d \
./code/language/family_c/language_php.d \
./code/language/family_c/language_swift.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_c/%.o: ../code/language/family_c/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"/home/joao/workspace/loc/code" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


