#ifndef LOCKSTATE_H
#define LOCKSTATE_H
#include "State.h"
/** 
 * @file LockState.h
 * @class LockState
 * @brief Abstract base class representing the state of a lock.
 *
 * This class defines the interface for different states of a lock.
 */

/**
 * @fn virtual State* LockState::toggle() = 0
 * @brief Toggles the state of the lock.
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual State* LockState::engage() = 0
 * @brief Engages the lock.
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual State* LockState::disengage() = 0
 * @brief Disengages the lock.
 * @return A pointer to the new state of the lock.
 */

/**
 * @fn virtual std::string LockState::display() = 0
 * @brief Displays the current state of the lock.
 * @return A string representing the current state of the lock.
 */
class LockState : public State {
   public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
