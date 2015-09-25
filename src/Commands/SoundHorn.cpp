// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "SoundHorn.h"

SoundHorn::SoundHorn() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::horn);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void SoundHorn::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SoundHorn::Execute() {
	Robot::horn->On();
}

// Make this return true when this Command no longer needs to run execute()
bool SoundHorn::IsFinished() {
	XBOX_ButtonState state = Robot::oi->getDriverInterface()->Get_ButtonState();
	//printf("HornButton %d/n", state.B);
	if (state.B) return false;
	return true;
}

// Called once after isFinished returns true
void SoundHorn::End() {
	Robot::horn->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SoundHorn::Interrupted() {
	Robot::horn->Off();
	doRun = false;
}