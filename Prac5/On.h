#ifndef ON_H
#define ON_H
#include "SwitchState.h"
#include "Off.h"
class On : public SwitchState {
   public:
	State* toggle();
	virtual State* engage();
	virtual State* disengage();
	virtual std::string display();
};

#endif
