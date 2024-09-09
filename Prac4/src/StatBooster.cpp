#include "StatBooster.h"

StatBooster::StatBooster(FarmUnit * unit) {
    this->unit = unit;
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

void StatBooster::update() {
    unit->update();
}

void StatBooster::storeCrops(int store) {
    unit->storeCrops(store);
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
    return "";
}

int StatBooster::getTotalCapacity() {
	return unit->getTotalCapacity();
}
