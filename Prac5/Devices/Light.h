#ifndef LIGHT_H
#define LIGHT_H
#include "device.h"
class Light : public device {


public:
	Light();

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Light();
};

#endif
