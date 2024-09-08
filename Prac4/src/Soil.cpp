#include "Soil.h"
#include "FloodedSoil.h"
Soil::Soil (){
    this->productivityMultiplier = 1;
}

Soil ::~ Soil () {
    delete this;
}

void Soil::rain(Soil* soil) {
    soil = new FloodedSoil();
}

void Soil::harvestCrops(Soil* soil) {
    soil = new DrySoil();
}

std::string Soil::getName() {
    return "Normal soil";
}

void Soil::setState(Soil* newState) {
    delete currentSoilState;
    currentSoilState = newState;
}
