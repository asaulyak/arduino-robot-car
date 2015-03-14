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

		void Init();
	public:
		MotorDrive(int IN1, int IN2);

		void Move(int direction);
		void Stop();
};