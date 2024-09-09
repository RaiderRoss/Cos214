#include "FarmLand.h"

FarmLand::FarmLand(int capacity)
	: FarmUnit(capacity) {
	this->farmUnit.reserve(capacity);
}

FarmLand::~FarmLand() {
	for (FarmUnit* unit : farmUnit) {
		delete unit;
	}
}

bool FarmLand::add(FarmUnit* add) {
	if (farmUnit.size() < capacity) {
		farmUnit.push_back(add);
		return true;
	}
	return false;
}

bool FarmLand::remove(FarmUnit* unit) {
	auto it = std::find(farmUnit.begin(), farmUnit.end(), unit);

	if (it != farmUnit.end()) {
		delete *it;
		farmUnit.erase(it);
		return true;
	}
	return false;
}

void FarmLand::storeCrops(int store) {
	return;
}

int FarmLand::getTotalCapacity() {
	return capacity;
}

void FarmLand::buyTruck() {
	buyTruck();
}

void FarmLand::update() {
}

void FarmLand::sellTruck() {
}

void FarmLand::callTruck() {
}

void FarmLand::startEngine() {
}

void FarmLand::assignTrucker(TruckerMan* truck) {
}

void FarmLand::removeTruck(TruckerMan* truck) {
}

std::string FarmLand::getCropType() {
	return std::string();
}

void FarmLand::harvestField(FarmUnit* storage) {
}

void FarmLand::print() {
	std::cout << "========Farm Land========" << std::endl;
	for (FarmUnit* unit : farmUnit) {
        
		unit->print();
	}
}

void FarmLand::plantCrops(int planted) {
}
