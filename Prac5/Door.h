#ifndef DOOR_H
#define DOOR_H
#include "device.h"
class Door : public device {


public:
	Door(std::string name);

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Door();
};

#endif
