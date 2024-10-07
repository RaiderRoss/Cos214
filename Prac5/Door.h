#ifndef DOOR_H
#define DOOR_H
#include "device.h"
/**
 * @file Door.h
 * @class Door
 * @brief Represents a door device with various actions and status checks.
 * 
 * The Door class inherits from the device class and provides specific implementations
 * for toggling, turning on, turning off, and getting the status of the door.
 */

/**
 * @fn Door::Door(std::string name)
 * @brief Constructs a Door object with a given name.
 * @param name The name of the door.
 */

/**
 * @fn Door::getStatus(int)
 * @brief Retrieves the status of the door.
 * @param status An integer representing the status to be retrieved.
 */

/**
 * @fn Door::toggleAction()
 * @brief Toggles the action of the door.
 */

/**
 * @fn Door::turnOnAction()
 * @brief Turns on the door action.
 */

/**
 * @fn Door::turnOffAction()
 * @brief Turns off the door action.
 */

/**
 * @fn Door::getDeviceType()
 * @brief Gets the type of the device.
 * @return A string representing the type of the device.
 */

/**
 * @fn Door::~Door()
 * @brief Destroys the Door object.
 */
class Door : public device {


public:
	Door(std::string name);

	virtual void getStatus(int);

		virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();
	virtual string getDeviceType();

	virtual ~Door();
};

#endif
