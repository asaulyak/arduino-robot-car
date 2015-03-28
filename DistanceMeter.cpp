#include "DistanceMeter.h"

DistanceMeter::DistanceMeter(int TRIG, int ECHO)
{
	this->_trig = TRIG;
	this->_echo = ECHO;
}

void DistanceMeter::Init()
{
	pinMode(this->_trig, OUTPUT); 
  	pinMode(this->_echo, INPUT); 
}

float DistanceMeter::PollController()
{
	digitalWrite(this->_trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->_trig, LOW);
	unsigned int timeElapsed = pulseIn(this->_echo, HIGH);
	
	return timeElapsed / 5800.0; 		
}


float DistanceMeter::GetDistance()
{
	float distanceSum = 0.0f;

	// Sensor can show controversial results
	// Mitigate random errors' impact
	for(int i = 0; i < this->MEASURES_NUM; i++) 
	{
		distanceSum += this->PollController();
	}

	return distanceSum / this->MEASURES_NUM;
}
