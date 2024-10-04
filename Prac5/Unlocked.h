#ifndef UNLOCKED_H
#define UNLOCKED_H
#include "State.h"
class Unlocked : public State {


public:
	void toggle();

	void engage();

	void disengage();
};

#endif
