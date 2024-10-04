#include "Group.h"

Group::Group(std::string name) {
	this->name = name;
	this->id = abs(custom_hash(name, name.length()));
}
int Group::custom_hash(const std::string& s, int off) {
	long hash = 5381;
	int c;

	for (char ch : s) {
		c = static_cast<int>(ch);
		hash = ((hash << 5) + hash) + c;
	}

	return hash ^ (off * 31);
}
Group::~Group() {
}

bool Group::addGroup(Group* gr) {
	return false;
}

bool Group::destroyGroup() {
	return false;
}

std::vector<unique_ptr<Group>>& Group::getChildren() {
	static std::vector<unique_ptr<Group>> children;
	return children;
}

string Group::getName() {
	return name;
}

int Group::getId() {
	return id;
}

void Group::setState(State* s) {
}
