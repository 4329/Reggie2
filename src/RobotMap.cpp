// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::driveTrainLeftMotor1 = NULL;
CANJaguar* RobotMap::driveTrainRightMotor1 = NULL;
CANJaguar* RobotMap::driveTrainLeftMotor2 = NULL;
CANJaguar* RobotMap::driveTrainRightMotor2 = NULL;
RobotDrive* RobotMap::driveTrainDriveA = NULL;
CANJaguar* RobotMap::driveTrainLeftMotor3 = NULL;
CANJaguar* RobotMap::driveTrainRightMotor3 = NULL;
RobotDrive* RobotMap::driveTrainDriveB = NULL;
CANJaguar* RobotMap::revolverRevolver = NULL;
DigitalInput* RobotMap::revolverAlignmentSwitch = NULL;
DoubleSolenoid* RobotMap::lifterSolenoid = NULL;
Solenoid* RobotMap::shooterSolenoid = NULL;
Compressor* RobotMap::pneumaticsCompressor1 = NULL;
Compressor* RobotMap::pneumaticsCompressor2 = NULL;
Relay* RobotMap::lightSpike = NULL;
Relay* RobotMap::hornSpike = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	printf("Entering RobotMap::init\n");
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainLeftMotor1 = new CANJaguar(4);
	
	
	driveTrainRightMotor1 = new CANJaguar(3);
	
	
	driveTrainLeftMotor2 = new CANJaguar(6);
	
	
	driveTrainRightMotor2 = new CANJaguar(5);
	
	
	driveTrainDriveA = new RobotDrive(driveTrainLeftMotor1, driveTrainLeftMotor2,
              driveTrainRightMotor1, driveTrainRightMotor2);
	
	driveTrainDriveA->SetSafetyEnabled(false);
      //  driveTrainDriveA->SetExpiration(0.5);
        driveTrainDriveA->SetSensitivity(0.5);
        driveTrainDriveA->SetMaxOutput(1.0);
        driveTrainDriveA->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        driveTrainDriveA->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	driveTrainLeftMotor3 = new CANJaguar(8);
	
	
	driveTrainRightMotor3 = new CANJaguar(7);
	
	
	driveTrainDriveB = new RobotDrive(driveTrainLeftMotor3, driveTrainRightMotor3);
	
	driveTrainDriveB->SetSafetyEnabled(false);
     //   driveTrainDriveB->SetExpiration(0.5);
        driveTrainDriveB->SetSensitivity(0.5);
        driveTrainDriveB->SetMaxOutput(1.0);
        driveTrainDriveB->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);        

	revolverRevolver = new CANJaguar(2);
	revolverRevolver->ConfigMaxOutputVoltage(12.0);
	revolverRevolver->ChangeControlMode(CANJaguar::kPercentVbus);
	revolverRevolver->EnableControl();
	
	revolverAlignmentSwitch = new DigitalInput(1, 5); // 1,1
	lw->AddSensor("Revolver", "AlignmentSwitch", revolverAlignmentSwitch);
	
	lifterSolenoid = new DoubleSolenoid(1, 2, 3);   // 1,2,3
	
	
	shooterSolenoid = new Solenoid(1, 1); // 1,1
	lw->AddActuator("Shooter", "Solenoid", shooterSolenoid);
	
	pneumaticsCompressor1 = new Compressor(2, 6); // 1,2,1,6
	
	
	pneumaticsCompressor2 = new Compressor(3, 2); // 1,3,1,2
	
	
	lightSpike = new Relay(1, 3); // 1,3
	lw->AddActuator("Light", "Spike", lightSpike);
	
	hornSpike = new Relay(1, 4);  // 1,4
	lw->AddActuator("Horn", "Spike", hornSpike);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	printf("Exiting RobotMap::init\n");
}