#ifndef SWITCHSTATE_H
#define SWITCHSTATE_H
#include "State.h"
class SwitchState : public State {
   public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
