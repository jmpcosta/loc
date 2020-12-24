################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_lisp/language_closure.cpp \
../code/language/family_lisp/language_family_lisp.cpp \
../code/language/family_lisp/language_lisp.cpp \
../code/language/family_lisp/language_logo.cpp \
../code/language/family_lisp/language_scheme.cpp 

OBJS += \
./code/language/family_lisp/language_closure.o \
./code/language/family_lisp/language_family_lisp.o \
./code/language/family_lisp/language_lisp.o \
./code/language/family_lisp/language_logo.o \
./code/language/family_lisp/language_scheme.o 

CPP_DEPS += \
./code/language/family_lisp/language_closure.d \
./code/language/family_lisp/language_family_lisp.d \
./code/language/family_lisp/language_lisp.d \
./code/language/family_lisp/language_logo.d \
./code/language/family_lisp/language_scheme.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_lisp/%.o: ../code/language/family_lisp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -I"${LOC_DIR}/code" -O2 -flto -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


