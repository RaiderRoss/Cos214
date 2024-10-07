#include "AlarmIntegrator.h"

AlarmIntegrator::AlarmIntegrator(std::string stringyString) : device(stringyString) {
    state = new Off();
    OldAlarm* alarm = new OldAlarm(state);
    this->alarm = alarm;
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

string AlarmIntegrator::getDeviceType() {
	return string();
}
