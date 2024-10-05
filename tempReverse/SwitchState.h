#ifndef SWITCHSTATE_H
#define SWITCHSTATE_H

class SwitchState : State {


public:
	virtual State* toggle() = 0;
};

#endif
