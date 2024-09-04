#include "DrySoil.h"

DrySoil :: DrySoil () {
    this->productivityMultiplier = 0.5;
}

DrySoil ::~ DrySoil () {
    delete this;
}

std::string DrySoil::getName() {
    return "Dry soil";
}

void DrySoil::harvestCrops(Soil* soil) {
    return;
}