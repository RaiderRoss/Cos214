#ifndef ALARM_H
#define ALARM_H
#include "device.h"
class Alarm : public device {


public:
	Alarm();

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Alarm();
};

#endif
