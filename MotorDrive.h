#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define FORWARD  0
#define BACKWARD 1


class MotorDrive
{
	private:
		int _IN1;
		int _IN2;
		int _ENABLED;

		void Init();
	public:
		MotorDrive(int IN1, int IN2, int ENABLED);

		void Move(int direction);
		void Stop();
		void SetSpeed(int speed /* from 0 to 255*/);
};