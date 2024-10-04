#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include <string>
#include <vector>

#include "Group.h"
class Section : Group {
   protected:
	std::vector<Group*> children;

   public:
	bool addGroup(Group* gr);

	bool destroyGroup();

	std::vector<Group*> getChildren();

	void performAction();

	string getDeviceType();
};

#endif
