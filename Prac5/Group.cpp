#include "Group.h"

#include "DeviceTraversal.h"
Group::Group(std::string name) {
	this->name = name;
	this->id = abs(custom_hash(name, name.length()));
	env = new Environment();
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
	delete env;
	env = nullptr;
}

void Group::addSensor(Sensor* sensor) {
	env->add(sensor);
}

Environment* Group::getEnvirontment() {
	return env;
}

void Group::movement() {
	if(env->getMotions().empty()) {
		std::cout << "No sensors in the environment" << std::endl;
		return;
	}
	std::cout << "Detecting motion in group " << getName() << std::endl;	
	env->notifyMotions();
	std::cout << "No more movement" << std::endl;
}


void Group::light() {
	if(env->getLights().empty()) {
		std::cout << "No sensors in the environment" << std::endl;
		return;
	}
	std::cout << "Detecting light in group " << getName() << std::endl;
	env->notifyLights();
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
