#ifndef UNLOCKED_H
#define UNLOCKED_H
#include "LockState.h"
#include "Locked.h"
class Unlocked : public LockState {
   public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
