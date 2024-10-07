#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "device.h"

/**
 * @file Thermostat.h
 * @class Thermostat
 * @brief Represents a thermostat device.
 * 
 * This class provides functionalities to control and monitor a thermostat device.
 * It inherits from the base class `device`.
 * 
 * @fn Thermostat::Thermostat(std::string name)
 * @brief Constructs a Thermostat object with the given name.
 * @param name The name of the thermostat.
 * 
 * @fn void Thermostat::getStatus(int)
 * @brief Retrieves the status of the thermostat.
 * @param status The status code to retrieve.
 * 
 * @fn void Thermostat::toggleAction()
 * @brief Toggles the action of the thermostat.
 * 
 * @fn void Thermostat::turnOnAction()
 * @brief Turns on the thermostat.
 * 
 * @fn void Thermostat::turnOffAction()
 * @brief Turns off the thermostat.
 * 
 * @fn string Thermostat::getDeviceType()
 * @brief Gets the type of the device.
 * @return The type of the device as a string.
 * 
 * @fn Thermostat::~Thermostat()
 * @brief Destroys the Thermostat object.
 */
class Thermostat : public device {
   public:
	Thermostat(std::string name);

	virtual void getStatus(int);

	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Thermostat();
};

#endif
