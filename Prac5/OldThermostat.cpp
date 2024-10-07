#include "OldThermostat.h"

OldThermostat::OldThermostat(std::string name) {
	this->name = name;
	this->state = new Off();
}
OldThermostat::~OldThermostat() {
    delete this->state;
}
void OldThermostat::identifyStatus() {
	std::cout << "Old Thermostat is currently : " << state->display() << std::endl;
}

void OldThermostat::off() {
	cout << "Old | ";
	setState(state->disengage());
}

void OldThermostat::on() {
	cout << "Old | ";
	setState(state->engage());
}

void OldThermostat::toggle() {
	cout << "Old | ";
	setState(state->toggle());
}

void OldThermostat::setState(State* s) {
	delete state;
	state = s;
}
