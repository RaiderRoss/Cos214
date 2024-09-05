#include "FloodedSoil.h"

FloodedSoil::FloodedSoil() {
	this->productivityMultiplier = 0.3;
}

FloodedSoil::~FloodedSoil() {
	delete this;
}

void FloodedSoil::rain(Soil* soil) {
}

std::string FloodedSoil::getName() {
	return "Flooded soil";
}

void FloodedSoil::harvestCrops(Soil* soil) {
	soil = new FruitfulSoil();
}