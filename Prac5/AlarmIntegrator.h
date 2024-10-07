#ifndef ALARMINTEGRATOR_H
#define ALARMINTEGRATOR_H
#include "device.h"
#include "OldAlarm.h"
<<<<<<< HEAD

=======
/**
 * @class AlarmIntegrator
 * @brief A class that integrates an old alarm system with a new device interface.
 * 
 * The AlarmIntegrator class provides an interface to control and monitor an old alarm system.
 * It inherits from the base class `device` and implements various actions such as toggling,
 * turning on, and turning off the alarm.
 * 
 * @note This class assumes the existence of an `OldAlarm` class and a `device` base class.
 * 
 * @param name The name of the alarm integrator device.
 * 
 * @method getStatus Retrieves the status of the alarm.
 * @param int An integer parameter for status retrieval.
 * 
 * @method toggleAction Toggles the state of the alarm.
 * 
 * @method turnOnAction Turns on the alarm.
 * 
 * @method turnOffAction Turns off the alarm.
 * 
 * @method getDeviceType Returns the type of the device as a string.
 */
>>>>>>> e18f7ea96d2362f3945eea3602ae6c23e9f20081
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