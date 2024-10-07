#ifndef UNLOCKED_H
#define UNLOCKED_H
#include "LockState.h"
#include "Locked.h"
/**
 * @file Unlocked.h
 * 
 * This file contains the definition of the Unlocked class, which represents
 * the state of a lock when it is unlocked. The class provides methods to 
 * toggle, engage, disengage, and display the state.
 */

/**
 * @fn State* toggle()
 * @brief Toggles the state of the lock.
 * 
 * This method changes the state of the lock from unlocked to locked or vice versa.
 * 
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual State* engage()
 * @brief Engages the lock.
 * 
 * This method engages the lock, transitioning it to a locked state.
 * 
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual State* disengage()
 * @brief Disengages the lock.
 * 
 * This method disengages the lock, transitioning it to an unlocked state.
 * 
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual std::string display()
 * @brief Displays the current state of the lock.
 * 
 * This method returns a string representation of the current state of the lock.
 * 
 * @return A string representing the current state of the lock.
 */
class Unlocked : public LockState {
   public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
