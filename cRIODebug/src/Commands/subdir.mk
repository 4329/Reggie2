################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/AutonomousCommand.cpp \
../src/Commands/ChargeShooter.cpp \
../src/Commands/Fire.cpp \
../src/Commands/NextTube.cpp \
../src/Commands/PrevTube.cpp \
../src/Commands/Release.cpp \
../src/Commands/SoundHorn.cpp \
../src/Commands/TeleopDrive.cpp \
../src/Commands/TeleopLift.cpp \
../src/Commands/ToggleCompressors.cpp \
../src/Commands/ToggleLights.cpp \
../src/Commands/WaitCycle.cpp 

OBJS += \
./src/Commands/AutonomousCommand.o \
./src/Commands/ChargeShooter.o \
./src/Commands/Fire.o \
./src/Commands/NextTube.o \
./src/Commands/PrevTube.o \
./src/Commands/Release.o \
./src/Commands/SoundHorn.o \
./src/Commands/TeleopDrive.o \
./src/Commands/TeleopLift.o \
./src/Commands/ToggleCompressors.o \
./src/Commands/ToggleLights.o \
./src/Commands/WaitCycle.o 

CPP_DEPS += \
./src/Commands/AutonomousCommand.d \
./src/Commands/ChargeShooter.d \
./src/Commands/Fire.d \
./src/Commands/NextTube.d \
./src/Commands/PrevTube.d \
./src/Commands/Release.d \
./src/Commands/SoundHorn.d \
./src/Commands/TeleopDrive.d \
./src/Commands/TeleopLift.d \
./src/Commands/ToggleCompressors.d \
./src/Commands/ToggleLights.d \
./src/Commands/WaitCycle.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Thunder cRIO Tools C++ Compiler'
	powerpc-wrs-vxworks-g++ -DCPU=PPC603 -DTOOL_FAMILY=gnu -DTOOL=gnu -D_WRS_KERNEL -I"C:\GitClone\ReggieNG\src" -I"C:\Program Files (x86)\FRC_Toolchain\mingw\powerpc-wrs-vxworks\wind_base\/../include/WPILib" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=603 -mstrict-align -mlongcall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


