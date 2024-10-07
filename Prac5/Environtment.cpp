#include "Environtment.h"

Environment::Environment() {
}

Environment::~Environment() {
}

void Environment::add(Sensor* light) {
    if(light->getSensorType() == "Light") {
        lightSensor.push_back(std::unique_ptr<SensorLight>(dynamic_cast<SensorLight*>(light)));
    } else {
        motionSensor.push_back(std::unique_ptr<SensorMotion>(dynamic_cast<SensorMotion*>(light)));
    }
}

std::vector<std::unique_ptr<SensorLight>>& Environment::getLights() {
	return lightSensor;
}

std::vector<std::unique_ptr<SensorMotion>>& Environment::getMotions() {
	return motionSensor;
}



void Environment::remove(Sensor* sen) {
}

void Environment::notifyLights() {
    for (std::unique_ptr<SensorLight>& sensor : lightSensor) {
        sensor->detect();
    }
    
}

void Environment::notifyMotions() {
    for (std::unique_ptr<SensorMotion>& sensor : motionSensor) {
        sensor->detect();
    }
}

void Environment::listLights() {
    
}

void Environment::listMotions() {
}
