#include "Door.h"

Door::Door(std::string name)
	: device(name) {
	state = new Locked();
}

void Door::getStatus(int level = 0) {
	std::cout << std::string(level * 4, ' ');
	std::cout << colours::LIGHT_BLUE << "⤿ "
			  << colours::LIGHT_GREEN << "Device : "
			  << getName() << " | " << getId()
			  << " | " << state->display() << colours::RESET << std::endl;
}

void Door::toggleAction() {
	setState(state->toggle());
}

void Door::turnOnAction() {
	setState(state->engage());
}

void Door::turnOffAction() {
	setState(state->disengage());
}

string Door::getDeviceType() {
	return "Door";
}

Door::~Door() {
}
