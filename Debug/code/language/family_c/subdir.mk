################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/language/family_c/language_awk.cpp \
../code/language/family_c/language_c.cpp \
../code/language/family_c/language_cpp.cpp \
../code/language/family_c/language_csharp.cpp \
../code/language/family_c/language_d.cpp \
../code/language/family_c/language_family_c.cpp \
../code/language/family_c/language_go.cpp \
../code/language/family_c/language_java.cpp \
../code/language/family_c/language_objective_c.cpp \
../code/language/family_c/language_php.cpp \
../code/language/family_c/language_rust.cpp \
../code/language/family_c/language_swift.cpp 

OBJS += \
./code/language/family_c/language_awk.o \
./code/language/family_c/language_c.o \
./code/language/family_c/language_cpp.o \
./code/language/family_c/language_csharp.o \
./code/language/family_c/language_d.o \
./code/language/family_c/language_family_c.o \
./code/language/family_c/language_go.o \
./code/language/family_c/language_java.o \
./code/language/family_c/language_objective_c.o \
./code/language/family_c/language_php.o \
./code/language/family_c/language_rust.o \
./code/language/family_c/language_swift.o 

CPP_DEPS += \
./code/language/family_c/language_awk.d \
./code/language/family_c/language_c.d \
./code/language/family_c/language_cpp.d \
./code/language/family_c/language_csharp.d \
./code/language/family_c/language_d.d \
./code/language/family_c/language_family_c.d \
./code/language/family_c/language_go.d \
./code/language/family_c/language_java.d \
./code/language/family_c/language_objective_c.d \
./code/language/family_c/language_php.d \
./code/language/family_c/language_rust.d \
./code/language/family_c/language_swift.d 


# Each subdirectory must supply rules for building sources it contributes
code/language/family_c/%.o: ../code/language/family_c/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -fstack-protector-all -Wformat=2 -Wformat-security -Wstrict-overflow -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


