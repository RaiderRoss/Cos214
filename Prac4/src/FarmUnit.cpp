#include "FarmUnit.h"

FarmUnit::FarmUnit(int capacity) {
	this->capacity = capacity;
}

FarmUnit ::~FarmUnit() {
}

std::string FarmUnit::getCropType() {
	return std::string();
}

bool FarmUnit::add(FarmUnit* add) {
	return false;
}

bool FarmUnit::remove(FarmUnit* remove) {
	return false;
}


void FarmUnit::harvestField(FarmUnit* storage) {
}

std::vector<FarmUnit*> FarmUnit::childern() {
	return std::vector<FarmUnit*>();
}
