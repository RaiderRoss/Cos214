#ifndef THERMOSTATINTEGRATOR_H
#define THERMOTATINTEGRATOR_H
#include "device.h"
#include "OldThermostat.h"

/**
 * @file ThermostatIntegrator.h
 * @class ThermostatIntegrator
 * @brief Integrates an old thermostat with a new system.
 * 
 * This class provides an interface to control an old thermostat using a new system.
 * It includes methods to get the status, toggle actions, turn on, turn off, and get the device type.
 * 
 * @fn ThermostatIntegrator::ThermostatIntegrator(std::string name)
 * @brief Constructs a ThermostatIntegrator with the given name.
 * @param name The name of the thermostat integrator.
 * 
 * @fn void ThermostatIntegrator::getStatus(int)
 * @brief Retrieves the status of the thermostat.
 * @param status The status code to retrieve.
 * 
 * @fn void ThermostatIntegrator::toggleAction()
 * @brief Toggles the action of the thermostat.
 * 
 * @fn void ThermostatIntegrator::turnOnAction()
 * @brief Turns on the thermostat.
 * 
 * @fn void ThermostatIntegrator::turnOffAction()
 * @brief Turns off the thermostat.
 * 
 * @fn std::string ThermostatIntegrator::getDeviceType()
 * @brief Gets the type of the device.
 * @return The type of the device as a string.
 */
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