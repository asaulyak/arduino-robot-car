#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class DistanceMeter
{
	private:
		int _trig;
		int _echo;

		const int MEASURES_NUM = 10;

		float PollController();

	public:
		DistanceMeter(int TRIG, int ECHO);
		float GetDistance();
		void Init();
};