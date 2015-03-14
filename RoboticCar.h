// #include <StandardCplusplus.h> 
// #include <vector>

#include "MotorDrive.h"

// From MotorDrive:
// FORWARD 0
// BACKWARD 1
#define LEFT 2
#define RIGHT 3

class RoboticCar 
{
private:
		MotorDrive _leftMotor;
		MotorDrive _rightMotor;

	void Move(int direction);

public:

	RoboticCar(int IN1, int IN2, int IN3, int IN4);

	void MoveLeft();
	void MoveRight();
	void MoveForward();
	void MoveBackward();
	void Stop();
	void Turn(int angle);
};