#include "SensorMotion.h"

#include <chrono>
#include <thread>

#include "Group.h"

SensorMotion::SensorMotion(Group* g)
	: Sensor(g) {
}

SensorMotion::~SensorMotion() {
}
void SensorMotion::detect() {
	group->turnOnAction();
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	group->turnOffAction();
}

std::string SensorMotion::getSensorType() {
	return "Motion";
}
