#include "Thermostat.h"

Thermostat::Thermostat(std::string name) : device(name) {
	// Do nothing
}

void Thermostat::getStatus() {
	// Do nothing
}

void Thermostat::performAction() {
	// Do nothing
}

string Thermostat::getDeviceType() {
	return "Thermostat";
}

Thermostat::~Thermostat() {
	
}
