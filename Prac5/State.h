#ifndef STATE_H
#define STATE_H
class State {

protected:
	bool isEngaged;

public:
	virtual void toggle() = 0;

	virtual void engage() = 0;

	virtual void disengage() = 0;
};

#endif
