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
	ostringstream os;
	streambuf* oldCoutStreamBuf = cout.rdbuf();
	cout.rdbuf(os.rdbuf());
	group->turnOnAction();
    cout.rdbuf(oldCoutStreamBuf);
    cout << os.str();
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    if(os.str() == "The device is already on\n" || os.str() == "The device is already locked\n") {
        return;
    }
	group->turnOffAction();
}

std::string SensorMotion::getSensorType() {
	return "Motion";
}
