#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include "Group.h"
#include <vector>
class Section : public Group {
   protected:
	std::vector<Group*> children;
	string name;

   public:
	Section();
	~Section();
	bool addGroup(Group* gr);

	bool destroyGroup();

	virtual std::vector<Group*> getChildren();

	virtual void performAction();

	virtual string getDeviceType();
	virtual void getStatus();
};

#endif
