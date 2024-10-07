#ifndef SWITCHSTATE_H
#define SWITCHSTATE_H
#include "State.h"
/**
 * @file SwitchState.h
 */

/**
 * @fn virtual State* toggle() = 0
 * @brief Toggles the state of the switch.
 * @return A pointer to the new state of the switch.
 */

/**
 * @fn virtual State* engage() = 0
 * @brief Engages the switch.
 * @return A pointer to the new state of the switch.
 */

/**
 * @fn virtual State* disengage() = 0
 * @brief Disengages the switch.
 * @return A pointer to the new state of the switch.
 */

/**
 * @fn virtual std::string display() = 0
 * @brief Displays the current state of the switch.
 * @return A string representing the current state of the switch.
 */
class SwitchState : public State {
   public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
