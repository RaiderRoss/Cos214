#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "device.h"
class Thermostat : public device {
public:
	Thermostat();

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Thermostat();
};

#endif
