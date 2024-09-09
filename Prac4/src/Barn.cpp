#include "Barn.h"

Barn ::Barn(std::string crop, int stored, int capacity) : FarmUnit(capacity) {
	this->cropType = crop;
	this->amountStored = stored;
	this->capacity = capacity;
}

Barn ::~Barn() {
	delete this;
}

std::string Barn::getCropType() {
	return this->cropType;
}

int Barn::getAmountStored() {
	return this->amountStored;
}

void Barn::storeCrops(int store) {
	if (this->amountStored + store < this->capacity) {
		this->amountStored += store;
	}
	if (amountStored * 100 / capacity > 80) {
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
	truckWatch.back()->update(this);
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
