#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "device.h"

class Thermostat : public device {
   public:
	Thermostat(std::string name);

	virtual void getStatus(int);

	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Thermostat();
};

#endif
