#include "AICarDriver.h"

AICarDriver::AICarDriver(RoboticCar* car, DistanceMeter* distanceMeter)
{
	this->_car = car;
	this->_distanceMeter = distanceMeter;
}

void AICarDriver::Init()
{
	// this->_car->Init();
	this->_distanceMeter->Init();

	this->_isStarted = false;
}


void AICarDriver::Start()
{
	this->_isStarted = true;
	this->_car->MoveForward();

	for(int i = 50; i < 180; i++)
	{
		this->_car->SetSpeed(i);
		delay(30);
	}
}

void AICarDriver::Stop()
{
	this->_isStarted = false;
	this->_car->Stop();
}

void AICarDriver::Update()
{
	if(this->_isStarted) 
	{
		float distance = this->_distanceMeter->GetDistance();
		if(distance <= 0.2 && distance > 0.0)
		{
			this->_car->MoveRight();
			delay(200);
			this->_car->MoveForward();
		}
	}
}
