#include "FarmLand.h"

FarmLand ::FarmLand(int capacity)  : FarmUnit (capacity) {
	this->farmUnit = std::vector<FarmUnit*>(capacity, nullptr);
}

FarmLand ::~FarmLand() {
	for (FarmUnit* unit : farmUnit) {
		delete unit;
	}
}

bool FarmLand ::add(FarmUnit* add) {
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

void FarmLand :: harvestField(FarmUnit* storage) {}
