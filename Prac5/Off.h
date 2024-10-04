#ifndef OFF_H
#define OFF_H
#include "State.h"
class Off : public State {


public:
	void toggle();

	void engage();

	void disengage();
};

#endif
