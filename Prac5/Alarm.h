#ifndef ALARM_H
#define ALARM_H
#include "device.h"
/**
 * @file Alarm.h
 * @class Alarm
 * @brief Represents an alarm device with various actions and status reporting.
 * 
 * The Alarm class inherits from the device class and provides specific implementations
 * for actions such as toggling, turning on, and turning off the alarm. It also includes
 * methods to get the status and type of the device.
 * 
 * @note This class is part of the COS 214 practical assignment.
 * 
 * @param name The name of the alarm device.
 * 
 * @fn Alarm::getStatus(int level)
 * @brief Retrieves the status of the device.
 * @param level The level of detail for the status.
 * 
 * @fn Alarm::getDeviceType()
 * @brief Retrieves the type of the device.
 * @return A string representing the type of the device.
 * 
 * @fn Alarm::toggleAction()
 * @brief Toggles the state of the alarm.
 * 
 * @fn Alarm::turnOnAction()
 * @brief Turns on the alarm.
 * 
 * @fn Alarm::turnOffAction()
 * @brief Turns off the alarm.
 * 
 * @fn Alarm::~Alarm()
 * @brief Destructor for the Alarm class.
 */
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
