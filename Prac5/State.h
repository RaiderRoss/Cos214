#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;
class State {

public:
	virtual State* toggle() = 0;
	virtual State* engage() = 0;
	virtual State* disengage() = 0;
	virtual std::string display() = 0;
};

#endif
