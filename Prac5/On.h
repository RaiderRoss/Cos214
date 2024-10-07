#ifndef ON_H
#define ON_H
#include "SwitchState.h"
#include "Off.h"
/** 
 * @file On.h
 * @class On
 * @brief Represents the 'On' state of a switch.
 * 
 * This class inherits from SwitchState and provides implementations for 
 * toggling, engaging, disengaging, and displaying the state.
 */

/**
 * @fn State* toggle()
 * @brief Toggles the switch state.
 * 
 * @return A pointer to the new state after toggling.
 */

/**
 * @fn virtual State* engage()
 * @brief Engages the switch to the 'On' state.
 * 
 * @return A pointer to the current state.
 */

/**
 * @fn virtual State* disengage()
 * @brief Disengages the switch from the 'On' state.
 * 
 * @return A pointer to the new state after disengaging.
 */

/**
 * @fn virtual std::string display()
 * @brief Displays the current state as a string.
 * 
 * @return A string representing the current state.
 */
class On : public SwitchState {
   public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
