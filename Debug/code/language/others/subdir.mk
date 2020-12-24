################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/others/language_assembler.cpp \
../code/language/others/language_crystal.cpp \
../code/language/others/language_elena.cpp \
../code/language/others/language_forth.cpp \
../code/language/others/language_fortran.cpp \
../code/language/others/language_haskell.cpp \
../code/language/others/language_jade.cpp \
../code/language/others/language_julia.cpp \
../code/language/others/language_kotlin.cpp \
../code/language/others/language_lua.cpp \
../code/language/others/language_nim.cpp \
../code/language/others/language_perl.cpp \
../code/language/others/language_python.cpp \
../code/language/others/language_ruby.cpp \
../code/language/others/language_scala.cpp \
../code/language/others/language_smalltalk.cpp \
../code/language/others/language_yam.cpp 

OBJS += \
./code/language/others/language_assembler.o \
./code/language/others/language_crystal.o \
./code/language/others/language_elena.o \
./code/language/others/language_forth.o \
./code/language/others/language_fortran.o \
./code/language/others/language_haskell.o \
./code/language/others/language_jade.o \
./code/language/others/language_julia.o \
./code/language/others/language_kotlin.o \
./code/language/others/language_lua.o \
./code/language/others/language_nim.o \
./code/language/others/language_perl.o \
./code/language/others/language_python.o \
./code/language/others/language_ruby.o \
./code/language/others/language_scala.o \
./code/language/others/language_smalltalk.o \
./code/language/others/language_yam.o 

CPP_DEPS += \
./code/language/others/language_assembler.d \
./code/language/others/language_crystal.d \
./code/language/others/language_elena.d \
./code/language/others/language_forth.d \
./code/language/others/language_fortran.d \
./code/language/others/language_haskell.d \
./code/language/others/language_jade.d \
./code/language/others/language_julia.d \
./code/language/others/language_kotlin.d \
./code/language/others/language_lua.d \
./code/language/others/language_nim.d \
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
	g++ -std=c++2a -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


