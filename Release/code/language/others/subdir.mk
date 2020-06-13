################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/others/language_forth.cpp \
../code/language/others/language_fortran.cpp \
../code/language/others/language_kotlin.cpp \
../code/language/others/language_perl.cpp \
../code/language/others/language_python.cpp \
../code/language/others/language_ruby.cpp \
../code/language/others/language_scala.cpp \
../code/language/others/language_smalltalk.cpp \
../code/language/others/language_yam.cpp 

OBJS += \
./code/language/others/language_forth.o \
./code/language/others/language_fortran.o \
./code/language/others/language_kotlin.o \
./code/language/others/language_perl.o \
./code/language/others/language_python.o \
./code/language/others/language_ruby.o \
./code/language/others/language_scala.o \
./code/language/others/language_smalltalk.o \
./code/language/others/language_yam.o 

CPP_DEPS += \
./code/language/others/language_forth.d \
./code/language/others/language_fortran.d \
./code/language/others/language_kotlin.d \
./code/language/others/language_perl.d \
./code/language/others/language_python.d \
./code/language/others/language_ruby.d \
./code/language/others/language_scala.d \
./code/language/others/language_smalltalk.d \
./code/language/others/language_yam.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/others/%.o: ../code/language/others/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -I"${LOC_DIR}/code" -O2 -Wall -c -fmessage-length=0 -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


