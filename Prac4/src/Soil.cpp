#include "Soil.h"
#include "FloodedSoil.h"
Soil::Soil (){
    this->productivityMultiplier = 1;
}

Soil ::~ Soil () {
    
}

void Soil::rain() {
    
}

void Soil::harvestCrops(int harvested, FarmUnit* storage) {}

std::string Soil::getName() {
    return "Normal soil";
}

void Soil::setState(Soil* newState) {
    delete currentSoilState;
    currentSoilState = newState;
}
