#include "device.h"


device::device(std::string name) : Group(name) {
    std::cout << "Device " << name << " created with id " << getId() << std::endl;
}

device::~device() {
    delete state;
}

std::vector<unique_ptr<Group>>& device::getChildren() {
	static std::vector<unique_ptr<Group>> children;
	return children;
}

void device::setState(State* s) {
    delete state;
    state = s;
}
