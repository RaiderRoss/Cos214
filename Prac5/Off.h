#ifndef OFF_H
#define OFF_H
#include "SwitchState.h"
#include "On.h"
/** 
 * @file Off.h
 * @class Off
 * @brief Represents the 'Off' state in a switch state machine.
 * 
 * This class inherits from SwitchState and implements the behavior 
 * for the 'Off' state, including toggling, engaging, and disengaging.
 */

/**
 * @fn State* Off::toggle()
 * @brief Toggles the state from 'Off' to the next state.
 * @return A pointer to the new state after toggling.
 */

/**
 * @fn virtual State* Off::engage()
 * @brief Engages the 'Off' state.
 * @return A pointer to the current state after engaging.
 */

/**
 * @fn virtual State* Off::disengage()
 * @brief Disengages the 'Off' state.
 * @return A pointer to the current state after disengaging.
 */

/**
 * @fn virtual std::string Off::display()
 * @brief Displays the current state as a string.
 * @return A string representation of the 'Off' state.
 */
class Off : public SwitchState {

public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
