#include "DrySoil.h"

DrySoil :: DrySoil () {
    this->productivityMultiplier = 0.5;
}

DrySoil ::~ DrySoil () {

}


void DrySoil::rain() {
    Soil* fruitful = new FruitfulSoil();
    this->setState(fruitful);
}

std::string DrySoil::getName() {
    return "Dry soil";
}

void DrySoil::harvestCrops(int harvested, FarmUnit* storage) {
    harvested *= this->productivityMultiplier;
    storage->storeCrops(harvested);
}