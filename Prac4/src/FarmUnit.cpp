#include "FarmUnit.h"

FarmUnit::FarmUnit(int capacity) {
	this->capacity = capacity;
}

FarmUnit ::~FarmUnit() {
}

std::string FarmUnit::getCropType() {
	return std::string();
}

void FarmUnit ::storeCrops(int store) {
	return;
}

bool FarmUnit ::add(FarmUnit* add) {
	return false;
}

bool FarmUnit ::remove(FarmUnit* remove) {
	return false;
}

int FarmUnit ::getTotalCapacity() {
	return this->capacity;
}

void FarmUnit::buyTruck() {
}

void FarmUnit::update() {
}

void FarmUnit::sellTruck() {
}

void FarmUnit::callTruck() {
}

void FarmUnit::startEngine() {
}

void FarmUnit::assignTrucker(TruckerMan* truck) {
}

void FarmUnit::removeTruck(TruckerMan * truck)
{
}


void FarmUnit::harvestField(FarmUnit* storage) {
}

std::vector<FarmUnit*> FarmUnit::childern() {
	return std::vector<FarmUnit*>();
}
