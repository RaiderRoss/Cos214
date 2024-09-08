#include "FruitfulSoil.h"

FruitfulSoil :: FruitfulSoil () {
    this->productivityMultiplier = 2;
}

FruitfulSoil ::~ FruitfulSoil () {
    delete this;
}


std::string FruitfulSoil::getName() {
    return "Fruitful soil";
}

void FruitfulSoil::rain(Soil* soil) {
    Soil* wet = new FloodedSoil();
    this->setState(wet);
}

void FruitfulSoil::harvestCrops() {
    Soil* dry = new DrySoil();
    this->setState(dry);
}