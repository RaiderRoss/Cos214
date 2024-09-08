#include "DrySoil.h"

DrySoil :: DrySoil () {
    this->productivityMultiplier = 0.5;
}

DrySoil ::~ DrySoil () {
    delete this;
}

void DrySoil::rain(Soil* soil) {
}

std::string DrySoil::getName() {
    return "Dry soil";
}

void DrySoil::harvestCrops() {
    return;
}