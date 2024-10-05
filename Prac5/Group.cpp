#include "Group.h"

#include "DeviceTraversal.h"
Group::Group(std::string name) {
	this->name = name;
	this->id = abs(custom_hash(name, name.length()));
}
int Group::custom_hash(const std::string& s, int off) {
    long hash = 531;
    for (char c : s) {
        hash = ((hash << 5) + hash) + c;
    }

    hash ^= (off * 3);
    return (hash % 4000 + 4000) % 4000;
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

unique_ptr<DeviceTraversal> Group::createTraversal() {
	return std::make_unique<DeviceTraversal>(this);
}
