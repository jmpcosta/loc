################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include code/statistics/subdir.mk
-include code/report/subdir.mk
-include code/parser/subdir.mk
-include code/language/windows/subdir.mk
-include code/language/others/subdir.mk
-include code/language/family_sgml/subdir.mk
-include code/language/family_prolog/subdir.mk
-include code/language/family_pascal/subdir.mk
-include code/language/family_ml/subdir.mk
-include code/language/family_lisp/subdir.mk
-include code/language/family_idl/subdir.mk
-include code/language/family_ecma/subdir.mk
-include code/language/family_c/subdir.mk
-include code/language/family_bourne/subdir.mk
-include code/language/family_basic/subdir.mk
-include code/language/family_algol/subdir.mk
-include code/language/subdir.mk
-include code/files/subdir.mk
-include code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: loc

# Tool invocations
loc: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -p -pg -o "loc" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) loc
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
