#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "DistanceMeter.h"
#include "RoboticCar.h"

class AICarDriver
{
	private:
		RoboticCar* _car;
		DistanceMeter* _distanceMeter;
		bool _isStarted;

	public:
		void Init();

		AICarDriver(RoboticCar* car, DistanceMeter* distanceMeter);
		void Start();
		void Stop();
		void Update();
};