#include "SensorLight.h"
#include "Group.h"
SensorLight::SensorLight(Group* g) : Sensor(g) {
}

SensorLight::~SensorLight() {
}

void SensorLight::detect() {
    group->toggleAction();
}

std::string SensorLight::getSensorType() {
    return "Light";
}
