################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/report/csvReport.cpp \
../code/report/report.cpp \
../code/report/textReport.cpp \
../code/report/xmlReport.cpp 

OBJS += \
./code/report/csvReport.o \
./code/report/report.o \
./code/report/textReport.o \
./code/report/xmlReport.o 

CPP_DEPS += \
./code/report/csvReport.d \
./code/report/report.d \
./code/report/textReport.d \
./code/report/xmlReport.d 


# Each subdirectory must supply rules for building sources it contributes
code/report/%.o: ../code/report/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -DLOC_TRACING -I"${LOC_DIR}/code" -O0 -g3 -p -pg -Wall -Wextra -Wconversion -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


