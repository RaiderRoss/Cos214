#ifndef LOCKSTATE_H
#define LOCKSTATE_H
#include "State.h"
class LockState : public State {
   public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
