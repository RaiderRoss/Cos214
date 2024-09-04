#include "CropField.h"

CropField :: CropField (std::string crop, int capacity, Soil* soil) {
    this->cropType = crop;
    this->capacity = capacity;
    this->soil = soil;
    this->planted = 0;
}

CropField ::~ CropField () {
    delete this;
}

int CropField::getTotalCapacity() {
    return this->capacity;
}

void CropField::plantCrops(int planted) {
    if(this->planted + planted < this->capacity ) {
        this->planted += planted;
    }
    return;
}

std::string CropField::getCropType() {
    return this->cropType;
}

std::string CropField::getSoilState() {
    return this->soil->getName();
}