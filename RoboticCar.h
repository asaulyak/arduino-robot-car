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

	RoboticCar(int IN1, int IN2, int IN3, int IN4, int ENA, int ENB);

	void MoveLeft();
	void MoveRight();
	void MoveForward();
	void MoveBackward();
	void Stop();
	void SetSpeed(int speed);
};