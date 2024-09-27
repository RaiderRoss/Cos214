#ifndef SECTION_H
#define SECTION_H

class Section : Group {

public:
	Group* children;

	bool addGroup(Group* gr);

	bool destroyGroup();

	Group* getChildren();

	void performAction();

	string getDeviceType();
};

#endif
