################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/DriveTrain.cpp \
../src/Subsystems/Horn.cpp \
../src/Subsystems/Lifter.cpp \
../src/Subsystems/Light.cpp \
../src/Subsystems/Pneumatics.cpp \
../src/Subsystems/Revolver.cpp \
../src/Subsystems/Shooter.cpp 

OBJS += \
./src/Subsystems/DriveTrain.o \
./src/Subsystems/Horn.o \
./src/Subsystems/Lifter.o \
./src/Subsystems/Light.o \
./src/Subsystems/Pneumatics.o \
./src/Subsystems/Revolver.o \
./src/Subsystems/Shooter.o 

CPP_DEPS += \
./src/Subsystems/DriveTrain.d \
./src/Subsystems/Horn.d \
./src/Subsystems/Lifter.d \
./src/Subsystems/Light.d \
./src/Subsystems/Pneumatics.d \
./src/Subsystems/Revolver.d \
./src/Subsystems/Shooter.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Thunder cRIO Tools C++ Compiler'
	powerpc-wrs-vxworks-g++ -DCPU=PPC603 -DTOOL_FAMILY=gnu -DTOOL=gnu -D_WRS_KERNEL -I"C:\GitClone\ReggieNG\src" -I"C:\Program Files (x86)\FRC_Toolchain\mingw\powerpc-wrs-vxworks\wind_base\/../include/WPILib" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=603 -mstrict-align -mlongcall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


