#include "Light.h"

Light::Light(std::string name) : device(name) {
	state = new Off();	
}

void Light::getStatus(int level = 0) {
	std::cout << std::string(level * 4, ' ');
	std::cout << colours::LIGHT_BLUE << "⤿ "
			  << colours::LIGHT_GREEN << "Device : "
			  << getName() << " | " << getId()
			  << " | " << state->display() << colours::RESET << std::endl;
}

void Light::toggleAction() {
	setState(state->toggle());
}

void Light::turnOnAction() {
	setState(state->engage());
}

void Light::turnOffAction() {
	setState(state->disengage());
}


string Light::getDeviceType() {
	return "Light";
}

Light::~Light() {

}
