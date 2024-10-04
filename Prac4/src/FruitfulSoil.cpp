#include "FruitfulSoil.h"

FruitfulSoil ::FruitfulSoil() {
	this->productivityMultiplier = 2;
}

FruitfulSoil ::~FruitfulSoil() {
}

std::string FruitfulSoil::getName() {
	return "Fruitful soil";
}

void FruitfulSoil::rain() {
	Soil* wet = new FloodedSoil();
	this->setState(wet);
}

void FruitfulSoil::harvestCrops(int harvested, FarmUnit* storage) {
	Soil* dry = new DrySoil();
	this->setState(dry);
	harvested *= this->productivityMultiplier;
	std::cout << "Storing " << harvested << " * multiplier : " << productivityMultiplier << std::endl;
	storage->storeCrops(harvested);
}

Soil* changeState() {
	Soil* dry = new DrySoil();
	return dry;
}