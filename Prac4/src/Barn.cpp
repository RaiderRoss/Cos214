#include "Barn.h"

Barn ::Barn(std::string crop, int stored, int capacity)
	: FarmUnit(capacity) {
	this->cropType = crop;
	this->amountStored = stored;
	this->capacity = capacity;
}

Barn ::~Barn() {
}

std::string Barn::getCropType() {
	return this->cropType;
}

int Barn::getAmountStored() {
	return this->amountStored;
}

void Barn::storeCrops(int store) {
	std::cout << "Storing : " << store << " crops" << std::endl;
	this->amountStored += store;
	if (amountStored * 100 / capacity > 80) {
		std::cout << "Reached max capacity and calling truck : " << std::endl;
		callTruck();
	}
}

void Barn::update() {
	amountStored = 0;
}

void Barn::buyTruck() {
	TruckerMan* fert = new DeliveryTruck();
	assignTrucker(fert);
}

void Barn::sellTruck() {
	TruckerMan* last = truckWatch.back();
	truckWatch.pop_back();
	if (last != NULL) {
		removeTruck(last);
	}
}

void Barn::callTruck() {
	if (!truckWatch.empty() && truckWatch.back() != NULL) {
		truckWatch.back()->update(this);
		return;
	}
	std::cout << "Capacity is full and there are no trucks to call so deleted everything " << std ::endl;
	amountStored = 0;
}

void Barn::startEngine() {
}

void Barn::assignTrucker(TruckerMan* truck) {
	truckWatch.push_back(truck);
}

void Barn::removeTruck(TruckerMan* truck) {
	delete truck;
	truck = NULL;
}

void Barn::harvestField(FarmUnit* barn) {
	int moved = this->amountStored;
	barn->storeCrops(amountStored);
	this->amountStored = 0;
}

void Barn::print() {
	std::cout << "========Barn Field========" << std::endl;
	std::cout << "Crop type: " << cropType << std::endl;
	std::cout << "Amount stored: " << amountStored << "/" << capacity << std::endl;
}

void Barn::plantCrops(int planted) {
}
