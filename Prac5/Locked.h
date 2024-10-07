#ifndef LOCKED_H
#define LOCKED_H
#include "LockState.h"
#include "Unlocked.h"
/** 
 * @file Locked.h
 * @class Locked
 * @brief Represents the locked state in a state pattern for a lock mechanism.
 * 
 * The Locked class inherits from the LockState class and provides specific 
 * implementations for the locked state of a lock mechanism.
 */

/**
 * @fn State* toggle()
 * @brief Toggles the state of the lock.
 * 
 * This function changes the state of the lock from locked to another state.
 * 
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual State* engage()
 * @brief Engages the lock.
 * 
 * This function engages the lock, ensuring it is in the locked state.
 * 
 * @return A pointer to the locked state.
 */

/**
 * @fn virtual State* disengage()
 * @brief Disengages the lock.
 * 
 * This function disengages the lock, transitioning it to an unlocked state.
 * 
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual std::string display()
 * @brief Displays the current state of the lock.
 * 
 * This function returns a string representation of the locked state.
 * 
 * @return A string indicating the lock is in the locked state.
 */
class Locked : public LockState {


public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
