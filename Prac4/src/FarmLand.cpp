#include "FarmLand.h"

FarmLand::FarmLand(int capacity, std::string name)
	: FarmUnit(capacity) {
	this->farmUnit.reserve(capacity);
	this->name = name;
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
	std::cout << "Capacity: " << capacity << std::endl;
	std::cout << "Name: " << name << std::endl;
	for (FarmUnit* unit : farmUnit) {
		unit->print();
	}
}

void FarmLand::plantCrops(int planted) {
}

Iterator* FarmLand::createIteratorDfs() {
	return new DepthFirst(this);
}

Iterator* FarmLand::createIteratorBfs() {
	return new BreadthFirst(this);
}

std::vector<FarmUnit*> FarmLand::childern() {
	return farmUnit;
}
