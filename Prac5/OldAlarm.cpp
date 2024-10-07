#include "OldAlarm.h"

OldAlarm::OldAlarm(std::string name) {
	this->name = name;
	this->state = new Locked();
}

OldAlarm::~OldAlarm() {
    delete this->state;
}

void OldAlarm::identifyAlarmStatus() {
	std::cout << "Old Alarm is currently : " << state->display() << std::endl;
}

void OldAlarm::toggle() {
	cout << "Old | ";
	OldAlarm::setState(state->toggle());
}

void OldAlarm::off() {
	cout << "Old | ";
	OldAlarm::setState(state->disengage());
}

void OldAlarm::on() {
	cout << "Old | ";
	OldAlarm::setState(state->engage());
}

void OldAlarm::setState(State* s) {
	delete state;
	state = s;
}