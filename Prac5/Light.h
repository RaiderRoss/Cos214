#ifndef LIGHT_H
#define LIGHT_H
#include "device.h"
/**
 * @file Light.h
 * @class Light
 * @brief Represents a light device with various actions and status checks.
 * 
 * The Light class inherits from the device class and provides specific 
 * implementations for toggling, turning on, and turning off the light.
 */

/**
 * @fn Light::Light(std::string name)
 * @brief Constructs a Light object with a given name.
 * @param name The name of the light device.
 */

/**
 * @fn void Light::getStatus(int)
 * @brief Retrieves the status of the light device.
 * @param status The status code to be retrieved.
 */

/**
 * @fn void Light::toggleAction()
 * @brief Toggles the state of the light device.
 */

/**
 * @fn void Light::turnOnAction()
 * @brief Turns on the light device.
 */

/**
 * @fn void Light::turnOffAction()
 * @brief Turns off the light device.
 */

/**
 * @fn std::string Light::getDeviceType()
 * @brief Retrieves the type of the device.
 * @return The type of the device as a string.
 */

/**
 * @fn Light::~Light()
 * @brief Destructor for the Light class.
 */
class Light : public device {


public:
	Light(std::string name);

	virtual void getStatus(int);

		virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Light();
};

#endif
