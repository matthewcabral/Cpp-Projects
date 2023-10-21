################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Classes/Arvore.cpp \
../src/Classes/No.cpp 

OBJS += \
./src/Classes/Arvore.o \
./src/Classes/No.o 

CPP_DEPS += \
./src/Classes/Arvore.d \
./src/Classes/No.d 


# Each subdirectory must supply rules for building sources it contributes
src/Classes/%.o: ../src/Classes/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


