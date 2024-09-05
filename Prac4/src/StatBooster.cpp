#include "StatBooster.h"

StatBooster::StatBooster() {
}

StatBooster::~StatBooster() {
}

void StatBooster::buyTruck() {
    unit->buyTruck();
}

void StatBooster::sellTruck() {
    unit->sellTruck();
}

void StatBooster::callTruck() {
    unit->callTruck();
}

void StatBooster::startEngine() {
    unit->startEngine();
}

void StatBooster::assignTrucker() {
    unit->assignTrucker();
}

std::string StatBooster::getCropType()
{

}

int StatBooster::getTotalCapacity() {
	return unit->getTotalCapacity();
}
