#include "StatBooster.h"

StatBooster::StatBooster(FarmUnit * unit) : FarmUnit(unit->getTotalCapacity()) {
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
    return unit->getCropType();
}

int StatBooster::getTotalCapacity() {
	return unit->getTotalCapacity();
}

void StatBooster::harvestField(FarmUnit* storage) {
    unit->harvestField(storage);
}

void StatBooster::plantCrops(int planted) {
    unit->plantCrops(planted);
}

void StatBooster::print() {
    unit->print();
}
