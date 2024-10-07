#ifndef ALARMINTEGRATOR_H
#define ALARMINTEGRATOR_H
#include "device.h"
#include "OldAlarm.h"

class AlarmIntegrator: public device {
    private: 
        OldAlarm* alarm;
    public: 
        AlarmIntegrator(std::string name);
	    virtual void getStatus(int);
        virtual void toggleAction();
	    virtual void turnOnAction();
	    virtual void turnOffAction();

	virtual string getDeviceType();

};

#endif