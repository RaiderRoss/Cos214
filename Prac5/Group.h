#ifndef GROUP_H
#define GROUP_H
#include <string>
#include <vector>

#include "State.h"
using namespace std;
class Group {
   public:
	Group();
	virtual ~Group();

	bool addGroup(Group* gr);

	bool destroyGroup();

	virtual std::vector<Group*> getChildren();

	virtual void getStatus() = 0;

	virtual void performAction() = 0;

	virtual string getDeviceType() = 0;

	void setState(State* s);
};

#endif
