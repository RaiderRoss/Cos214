#include "FarmUnit.h"

FarmUnit :: FarmUnit() {
    this->capacity = 0;
}

FarmUnit ::~ FarmUnit () {
    delete this;
}

void FarmUnit :: storeCrops(int store) {
    return;
}

bool FarmUnit :: add(FarmUnit* add) {
    return false;
} 

bool FarmUnit :: remove(FarmUnit* remove) {
    return false;
}

int FarmUnit :: getTotalCapacity() {
    return this->capacity;
}

void FarmUnit::buyTruck() {
}
