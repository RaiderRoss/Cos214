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

void StatBooster::callTruck(TruckerMan* truck) {
    unit->callTruck(truck);
}

void StatBooster::startEngine() {
    unit->startEngine();
}

void StatBooster::assignTrucker(TruckerMan * trucker) {
    unit->assignTrucker(trucker);
}

void StatBooster::removeTruck(TruckerMan* truck) {
    unit->removeTruck(truck);
}

std::string StatBooster::getCropType()
{

}

int StatBooster::getTotalCapacity() {
	return unit->getTotalCapacity();
}
