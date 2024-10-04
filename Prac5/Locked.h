#ifndef LOCKED_H
#define LOCKED_H
#include "State.h"
class Locked : public State {


public:
	void toggle();

	void engage();

	void disengage();
};

#endif
