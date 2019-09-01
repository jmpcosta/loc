################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/files/file.cpp \
../code/files/fileSet.cpp 

OBJS += \
./code/files/file.o \
./code/files/fileSet.o 

CPP_DEPS += \
./code/files/file.d \
./code/files/fileSet.d 


# Each subdirectory must supply rules for building sources it contributes
code/files/%.o: ../code/files/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


