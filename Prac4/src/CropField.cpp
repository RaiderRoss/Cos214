#include "CropField.h"

CropField ::CropField(std::string crop, int capacity, Soil* soil)
	: FarmUnit(capacity) {
	this->cropType = crop;
	this->capacity = capacity;
	this->soil = soil;
	this->planted = 0;
}

CropField ::~CropField() {
	delete soil;
}

void CropField::plantCrops(int planted) {
	if (this->planted + planted <= this->capacity) {
		this->planted += planted;
		return;
	}
	std::cout << "Capacity is too much and harvesting" << std::endl;
	harvestField();
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
	if (!truckWatch.empty() && truckWatch.back() != NULL) {
		truckWatch.back()->update(this);
		return;
	}
}

void CropField::startEngine() {
}

void CropField::update() {
	soil->rain();
}

void CropField::assignTrucker(TruckerMan* truck) {
	truckWatch.push_back(truck);
}

void CropField::removeTruck(TruckerMan* truck) {
	TruckerMan* last = truckWatch.back();
	truckWatch.pop_back();
	if (last != NULL) {
		delete last;
		last = NULL;
	}
}

void CropField::harvestField(FarmUnit* storage) {
	int harvested = this->planted;
	this->soil->harvestCrops(harvested, storage);
	planted = 0;
}

void CropField::harvestField() {
	planted = 0;
}

void CropField::print() {
	std::cout << "========Crop Field========" << std::endl;
	std::cout << "Crop type: " << cropType << std::endl;
	std::cout << "Soil type: " << soil->getName() << std::endl;
	std::cout << "Planted: " << planted << "/" << capacity << std::endl;
}
