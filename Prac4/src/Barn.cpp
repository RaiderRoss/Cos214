#include "Barn.h"

Barn :: Barn (std::string crop, int stored, int capacity) {
    this->cropType = crop;
    this->amountStored = stored;
    this->capacity = capacity;
}

Barn ::~ Barn () {
    delete this;
}

std::string Barn::getCropType() {
    return this->cropType;
}

int Barn::getAmountStored() {
    return this->amountStored;
}

void Barn::storeCrops(int store) {
    if(this->amountStored+store < this->capacity) {
        this->amountStored += store;
    } 
}
