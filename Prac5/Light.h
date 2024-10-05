#ifndef LIGHT_H
#define LIGHT_H
#include "device.h"
class Light : public device {


public:
	Light(std::string name);

	virtual void getStatus(int);

		virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Light();
};

#endif
