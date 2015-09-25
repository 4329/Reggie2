// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.




#include "Shooter.h"
#include "../Robotmap.h"
#include <unistd.h>

Shooter::Shooter() : Subsystem("Shooter") {
	printf("Entering Shooter Constructor\n");
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	solenoid = RobotMap::shooterSolenoid;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	printf("Exiting Shooter Constructor\n");
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
/*
void Shooter::RetrieveConfig()
{
	// do nothing
}

void Shooter::StoreConfig()
{
	// do nothing
}

void Shooter::Configure()
{
	// do nothing
}
*/
void Shooter::Shoot()
{
	solenoid->Set(true);
    Wait(0.005);
	solenoid->Set(false);
}
