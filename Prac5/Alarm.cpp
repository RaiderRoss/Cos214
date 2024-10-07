#include "Alarm.h"

Alarm::Alarm(std::string name) : device(name) {
	state = new Locked();
}

void Alarm::getStatus(int level = 0) {
		std::cout << std::string(level * 4, ' ');
	std::cout << colours::LIGHT_BLUE << "⤿ "
			  << colours::LIGHT_GREEN << "Device : "
			  << getName() << " | " << getId()
			  << " | " << state->display() << colours::RESET << std::endl;
}

string Alarm::getDeviceType() {
	return "Alarm";
}

void Alarm::toggleAction() {
	setState(state->toggle());
}

void Alarm::turnOnAction() {
	setState(state->engage());
}

void Alarm::turnOffAction() {
	setState(state->disengage());
}

Alarm::~Alarm() {
	
}
