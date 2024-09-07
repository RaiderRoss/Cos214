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
	TruckerMan* fert = new FertilizerTruck();
	assignTrucker(fert);
}

void CropField::sellTruck() {
}

void CropField::callTruck() {
    truckWatch.back()->update();
}

void CropField::startEngine() {
}

void CropField::assignTrucker(TruckerMan* truck) {
	truckWatch.push_back(truck);
}

void CropField::removeTruck(TruckerMan* truck) {
}
