#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;
/**
 * @file State.h
 */

/**
 * @fn virtual State* toggle() = 0
 * @brief Toggles the state.
 * @return A pointer to the new state after toggling.
 */

/**
 * @fn virtual State* engage() = 0
 * @brief Engages the state.
 * @return A pointer to the new state after engaging.
 */

/**
 * @fn virtual State* disengage() = 0
 * @brief Disengages the state.
 * @return A pointer to the new state after disengaging.
 */

/**
 * @fn virtual std::string display() = 0
 * @brief Displays the current state as a string.
 * @return A string representation of the current state.
 */
class State {

public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
