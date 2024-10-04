#ifndef DEVICE_H
#define DEVICE_H
#include "Group.h"
#include "State.h"
class device : public Group {

public:
	State* state;

	device();

	virtual ~device();

	virtual void getStatus() = 0;

	virtual void performAction() = 0;

	virtual string getDeviceType() = 0;

	void setState(State* s);
};

#endif
