#ifndef LOCKSTATE_H
#define LOCKSTATE_H

class LockState : State {


public:
	virtual State* toggle() = 0;
};

#endif
