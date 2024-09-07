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
    if(amountStored*100/capacity > 80){
        callTruck(*this);
    }
}

void Barn::clear() {
    amountStored = 0;
}

void Barn::buyTruck() {
}

void Barn::sellTruck() {
}

void Barn::callTruck(Barn* barn) {
}

void Barn::startEngine() {
}

void Barn::assignTrucker(TruckerMan* truck) {
}

void Barn::removeTruck(TruckerMan* truck) {
}
