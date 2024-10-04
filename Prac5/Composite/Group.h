#ifndef GROUP_H
#define GROUP_H
#include "State.h"
#include <string>
using namespace std;
class Group {


public:
	bool addGroup(Group* gr);

	bool destroyGroup();

	Group* getChildren();

	virtual void getStatus() = 0;

	virtual void performAction() = 0;

	virtual string getDeviceType() = 0;

	void setState(State* s);
};

#endif
