#include "Thermostat.h"

Thermostat::Thermostat(std::string name) : device(name) {
	state = new Off();
}

void Thermostat::getStatus(int level = 0) {
	std::cout << std::string(level * 4, ' ');
	std::cout << colours::LIGHT_BLUE << "⤿ "
			  << colours::LIGHT_GREEN << "Device : "
			  << getName() << " | " << getId()
			  << " | " << state->display() << colours::RESET << std::endl;
}

void Thermostat::toggleAction() {
	setState(state->toggle());
}

void Thermostat::turnOnAction() {
	setState(state->engage());
}

void Thermostat::turnOffAction() {
	setState(state->disengage());
}

string Thermostat::getDeviceType() {
	return "Thermostat";
}

Thermostat::~Thermostat() {
	
}
