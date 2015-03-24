#include "RoboticCar.h"

// Private
void RoboticCar::Move(int direction)
{
	switch(direction)
	{
		case FORWARD:
		this->_leftMotor.Move(FORWARD);
		this->_rightMotor.Move(FORWARD);
		break;

		case BACKWARD:
		this->_leftMotor.Move(BACKWARD);
		this->_rightMotor.Move(BACKWARD);
		break;

		case LEFT:
		this->_leftMotor.Move(BACKWARD);
		this->_rightMotor.Move(FORWARD);
		break;

		case RIGHT:
		this->_leftMotor.Move(FORWARD);
		this->_rightMotor.Move(BACKWARD);
		break;
	}
}

// Public
RoboticCar::RoboticCar(int IN1, int IN2, int IN3, int IN4, int ENA, int ENB) : 
	_leftMotor(IN1, IN2, ENA), _rightMotor(IN3, IN4, ENB)
{
	
}

void RoboticCar::MoveLeft()
{
	this->Move(LEFT);
}

void RoboticCar::MoveRight()
{
	this->Move(RIGHT);
}

void RoboticCar::MoveForward()
{
	this->Move(FORWARD);
}

void RoboticCar::MoveBackward()
{
	this->Move(BACKWARD);
}

void RoboticCar::Stop()
{
	this->_leftMotor.Stop();
	this->_rightMotor.Stop();
}

void RoboticCar::SetSpeed(int speed)
{
	this._leftMotor.SetSpeed(speed);
	this._rightMotor.SetSpeed(speed);
}

