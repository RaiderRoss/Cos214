#ifndef ALARM_H
#define ALARM_H
#include "device.h"
class Alarm : public device {


public:
	Alarm(std::string name);

	virtual void getStatus();

	virtual void performAction();

	virtual string getDeviceType();

	virtual ~Alarm();
};

#endif
