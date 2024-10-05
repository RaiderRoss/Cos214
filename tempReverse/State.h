#ifndef STATE_H
#define STATE_H

class State {

protected:
	bool isEngaged;

public:
	virtual State* toggle() = 0;
};

#endif
