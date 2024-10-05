#ifndef LOCKED_H
#define LOCKED_H
#include "LockState.h"
#include "Unlocked.h"
class Locked : public LockState {


public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
