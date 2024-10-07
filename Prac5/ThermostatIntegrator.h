#ifndef THERMOSTATINTEGRATOR_H
#define THERMOTATINTEGRATOR_H
#include "device.h"
#include "OldThermostat.h"

class ThermostatIntegrator : public device {
    private: 
        OldThermostat* oldThermostat;
    public: 
        ThermostatIntegrator(std::string name);

        
	virtual void getStatus(int);
	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();
	virtual string getDeviceType();

};

#endif