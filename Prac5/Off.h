#ifndef OFF_H
#define OFF_H
#include "SwitchState.h"
#include "On.h"
class Off : public SwitchState {

public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
