#include "CropField.h"

CropField ::CropField(std::string crop, int capacity, Soil* soil) {
	this->cropType = crop;
	this->capacity = capacity;
	this->soil = soil;
	this->planted = 0;
}

CropField ::~CropField() {
	delete this;
}

void CropField::plantCrops(int planted) {
	if (this->planted + planted < this->capacity) {
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

void CropField::buyTruck() {
	TruckerMan* fent = new FertilizerTruck();
	assignTrucker(fent);
}

void CropField::sellTruck() {
}

void CropField::callTruck() {
    truckWatch.back()->update(this);
}

void CropField::startEngine() {
}

void CropField::update() {
    soil->rain(soil);
	
}

void CropField::assignTrucker(TruckerMan* truck) {
	truckWatch.push_back(truck);
}

void CropField::removeTruck(TruckerMan* truck) {
}

void CropField::storeCrops(int store) {
    if(store < planted){
        planted - store;
        return;
    }
    std::cout << "" << std::endl;
}
