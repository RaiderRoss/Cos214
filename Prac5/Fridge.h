#ifndef FRIDGE_H
#define FRIDGE_H
#include "device.h"
class Fridge : public device {


public:
	Fridge(std::string name);

	virtual void getStatus(int);

		virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Fridge();
};

#endif
