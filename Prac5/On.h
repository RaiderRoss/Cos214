#ifndef ON_H
#define ON_H
#include "State.h"
class On : public State {


public:
	void toggle();

	void engage();

	void disengage();
};

#endif
