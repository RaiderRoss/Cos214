#include "FertilizerTruck.h"

FertilizerTruck::FertilizerTruck() {
}

FertilizerTruck::~FertilizerTruck()
{
}


void FertilizerTruck::update(FarmUnit * field) {
    field->update();
}
