#include "FloodedSoil.h"

FloodedSoil::FloodedSoil() {
	this->productivityMultiplier = 0;
}

FloodedSoil::~FloodedSoil() {
	delete this;
}

void FloodedSoil::rain() {
	return;
}

std::string FloodedSoil::getName() {
	return "Flooded soil";
}

void FloodedSoil::harvestCrops(int harvested, FarmUnit* storage) {
	Soil* fruitful = new FruitfulSoil();
	this->setState(fruitful);
	harvested *= this->productivityMultiplier;
    storage->storeCrops(harvested);
}