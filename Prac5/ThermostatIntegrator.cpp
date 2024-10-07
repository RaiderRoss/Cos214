#include "ThermostatIntegrator.h"

ThermostatIntegrator::ThermostatIntegrator(std::string name) : device(name) {
    state = new Off();
    OldThermostat* thermostat = new OldThermostat(name);
    this->oldThermostat = thermostat;
}
ThermostatIntegrator::~ThermostatIntegrator() {
    delete oldThermostat;
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
    return "Thermostat Integrator";
}
