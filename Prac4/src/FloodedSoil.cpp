#include "FloodedSoil.h"

FloodedSoil::FloodedSoil() {
	this->productivityMultiplier = 0;
}

FloodedSoil::~FloodedSoil() {

}

void FloodedSoil::rain() {
	return;
}

std::string FloodedSoil::getName() {
	return "Flooded soil";
}

void FloodedSoil::harvestCrops(int harvested, FarmUnit* storage) {
	harvested *= this->productivityMultiplier;
	Soil* fruitful = new FruitfulSoil();
	this->setState(fruitful);
    storage->storeCrops(harvested);
}