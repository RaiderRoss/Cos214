#ifndef DEVICE_H
#define DEVICE_H
#include "Group.h"
#include "Locked.h"
#include "Off.h"
#include "On.h"
#include "Unlocked.h"
/**
 * @file device.h
 * 
 * This class provides an interface for various device operations and state management.
 * 
 * @protected
 * @var State* state
 * Pointer to the current state of the device.
 * 
 * @public
 * @fn device(std::string name)
 * Constructor that initializes the device with a given name.
 * 
 * @fn virtual ~device()
 * Virtual destructor for proper cleanup in derived classes.
 * 
 * @fn virtual std::vector<unique_ptr<Group>>& getChildren()
 * Returns a reference to a vector containing unique pointers to child groups.
 * 
 * @fn virtual void getStatus(int) = 0
 * Pure virtual function to get the status of the device.
 * 
 * @fn virtual void toggleAction() = 0
 * Pure virtual function to toggle the action of the device.
 * 
 * @fn virtual void turnOnAction() = 0
 * Pure virtual function to turn on the device.
 * 
 * @fn virtual void turnOffAction() = 0
 * Pure virtual function to turn off the device.
 * 
 * @fn virtual string getDeviceType() = 0
 * Pure virtual function to get the type of the device.
 * 
 * @fn void setState(State* s)
 * Sets the state of the device.
 * 
 * @param s
 * Pointer to the new state to be set.
 */
class device : public Group {
   protected:
	State* state;

   public:
	device(std::string name);

	virtual ~device();
	virtual std::vector<unique_ptr<Group>>& getChildren();

	virtual void getStatus(int) = 0;

	virtual void toggleAction() = 0;
	virtual void turnOnAction() = 0;
	virtual void turnOffAction() = 0;

	virtual string getDeviceType() = 0;

	void setState(State* s);
};

#endif
