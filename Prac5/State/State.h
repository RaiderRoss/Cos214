#ifndef STATE_H
#define STATE_H
#include "device.h"
class State {

protected:
	bool isEngaged;
	Device* dev;

public:
	virtual void toggle() = 0;

	virtual void engage() = 0;

	virtual void disengage() = 0;
};

#endif
