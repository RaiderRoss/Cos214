#include "AlarmIntegrator.h"

AlarmIntegrator::AlarmIntegrator(std::string stringyString)
	: device(stringyString) {
	this->alarm = new OldAlarm(stringyString);
    state = new Off();
}

void AlarmIntegrator::getStatus(int statusNumber) {
	this->alarm->identifyAlarmStatus();
}

void AlarmIntegrator::toggleAction() {
	this->alarm->toggle();
}

void AlarmIntegrator::turnOnAction() {
	this->alarm->on();
}

void AlarmIntegrator::turnOffAction() {
	this->alarm->off();
}

AlarmIntegrator::~AlarmIntegrator() {
	delete alarm;
}

string AlarmIntegrator::getDeviceType() {
	return "Alarm Integrator";
}
