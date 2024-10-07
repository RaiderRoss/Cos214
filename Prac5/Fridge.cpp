#include "Fridge.h"

Fridge::Fridge(std::string name) : device(name) {
	state = new Off();
}

void Fridge::getStatus(int level = 0) {
	std::cout << std::string(level * 4, ' ');
	std::cout << colours::LIGHT_BLUE << "⤿ "
			  << colours::LIGHT_GREEN << "Device : "
			  << getName() << " | " << getId()
			  << " | " << state->display() << colours::RESET << std::endl;	
}

void Fridge::toggleAction() {
	setState(state->toggle());
}

void Fridge::turnOnAction() {
	setState(state->engage());
}

void Fridge::turnOffAction() {
	setState(state->disengage());
}

string Fridge::getDeviceType() {
	return "Fridge";
}

Fridge::~Fridge() {

}
