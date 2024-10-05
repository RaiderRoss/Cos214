#ifndef ALARM_H
#define ALARM_H
#include "device.h"
class Alarm : public device {
   public:
	Alarm(std::string name);
	virtual void getStatus(int);
	virtual string getDeviceType();
	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();
	virtual ~Alarm();
};

#endif
