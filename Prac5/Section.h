#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include "Group.h"
#include <vector>
class Section : public Group {
   protected:
	std::vector<unique_ptr<Group>> children;
   public:
	Section(std::string name);
	~Section();
	bool addGroup(Group* gr);

	bool destroyGroup();

	virtual std::vector<unique_ptr<Group>>& getChildren();

	virtual void performAction();

	virtual string getDeviceType();
	virtual void getStatus();
};

#endif
