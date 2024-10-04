#include "Group.h"

Group::Group() {
}

Group::~Group() {
}

bool Group::addGroup(Group* gr) {
	return false;
}

bool Group::destroyGroup() {
	// TODO - implement Group::destroyGroup
	throw "Not yet implemented";
}

std::vector<Group*> Group::getChildren() {
	return std::vector<Group*>();
}

void Group::setState(State* s) {
	
}
