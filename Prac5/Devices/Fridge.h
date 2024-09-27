#ifndef FRIDGE_H
#define FRIDGE_H
#include "device.h"
class Fridge : public device {


public:
	Fridge();

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Fridge();
};

#endif
