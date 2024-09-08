#include "DrySoil.h"

DrySoil :: DrySoil () {
    this->productivityMultiplier = 0.5;
}

DrySoil ::~ DrySoil () {
    delete this;
}

void DrySoil::rain() {
    Soil* fruitful = new FruitfulSoil();
    this->setState(fruitful);
}

std::string DrySoil::getName() {
    return "Dry soil";
}

void DrySoil::harvestCrops() {
    return;
}