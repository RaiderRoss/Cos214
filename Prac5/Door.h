#ifndef DOOR_H
#define DOOR_H
#include "device.h"
class Door : public device {


public:
	Door(std::string name);

	virtual void getStatus(int);

		virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();
	virtual string getDeviceType();

	virtual ~Door();
};

#endif
