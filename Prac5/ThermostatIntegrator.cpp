#include "ThermostatIntegrator.h"

ThermostatIntegrator::ThermostatIntegrator(std::string name) : device(name) {
    state = new Off();
    OldThermostat* thermostat = new OldThermostat(state);
} 

void ThermostatIntegrator::getStatus(int BigScaryInteger) {
    return oldThermostat->identifyStatus();
}

void ThermostatIntegrator::toggleAction() {
    this->oldThermostat->toggle();
}

void ThermostatIntegrator::turnOnAction() {
    this->oldThermostat->on();
}

void ThermostatIntegrator::turnOffAction() {
    this->oldThermostat->off();
}

std::string ThermostatIntegrator::getDeviceType() {
    return this->getName();
}
