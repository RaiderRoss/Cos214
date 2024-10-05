#include "device.h"


device::device(std::string name) : Group(name) {
    std::cout << "Device " << name << " created with id " << getId() << std::endl;
}

device::~device() {
}

void device::setState(State* s) {
    delete state;
    state = s;
}
