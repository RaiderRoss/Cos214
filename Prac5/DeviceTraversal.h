#ifndef DEVICETRAVERSAL_H
#define DEVICETRAVERSAL_H
class Group;
class DeviceTraversal {

private:
	Group* curr;
	Group* next;
	Group* root;
	Group* findNext(Group* group);
	Group* findSibling(Group* group);
	Group* findParent(Group* root, Group* group);
public:
	DeviceTraversal(Group* root);
	bool isDone();
	Group* nextGroup();
	Group* begin();
	Group* current();
	void resetTraversal();
};

#endif
