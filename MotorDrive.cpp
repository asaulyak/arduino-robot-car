#include "MotorDrive.h"

// Private
void MotorDrive::Init()
{
	pinMode (this->_IN1, OUTPUT);
	pinMode (this->_IN2, OUTPUT);
}

// Public
MotorDrive::MotorDrive(int IN1, int IN2)
{
	this->_IN1 = IN1;
	this->_IN2 = IN2;

	this->Init();
}

void MotorDrive::Move(int direction)
{
	switch(direction)
	{
		case FORWARD:
		digitalWrite(this->_IN1, HIGH);
		digitalWrite(this->_IN2, LOW);
		break;

		case BACKWARD:
		digitalWrite(this->_IN1, LOW);
		digitalWrite(this->_IN2, HIGH);
		break;
	}
}

void MotorDrive::Stop()
{
	digitalWrite(this->_IN1, LOW);
	digitalWrite(this->_IN2, LOW);
}