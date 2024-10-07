#ifndef FRIDGE_H
#define FRIDGE_H
#include "device.h"
/**
 * @file Fridge.h
 * @class Fridge
 * @brief Represents a fridge device.
 * 
 * This class inherits from the device class and provides specific implementations
 * for a fridge, including actions like toggling, turning on, and turning off.
 */

/**
 * @fn Fridge::Fridge(std::string name)
 * @brief Constructor for the Fridge class.
 * @param name The name of the fridge.
 */

/**
 * @fn void Fridge::getStatus(int)
 * @brief Retrieves the status of the fridge.
 * @param statusCode An integer representing the status code.
 */

/**
 * @fn void Fridge::toggleAction()
 * @brief Toggles the action of the fridge.
 */

/**
 * @fn void Fridge::turnOnAction()
 * @brief Turns on the fridge.
 */

/**
 * @fn void Fridge::turnOffAction()
 * @brief Turns off the fridge.
 */

/**
 * @fn std::string Fridge::getDeviceType()
 * @brief Gets the type of the device.
 * @return A string representing the device type.
 */

/**
 * @fn Fridge::~Fridge()
 * @brief Destructor for the Fridge class.
 */
class Fridge : public device {
   public:
	Fridge(std::string name);

	virtual void getStatus(int);

	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();

	virtual string getDeviceType();

	virtual ~Fridge();
};

#endif
