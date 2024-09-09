#include "DemolishEcosystem.h"

#include "FarmUnit.h"
DemolishEcosystem::DemolishEcosystem(FarmUnit* unit)
	: StatBooster(unit) {
}

DemolishEcosystem::~DemolishEcosystem() {
}

void DemolishEcosystem::amplifications() {
	increaseProducion();
}

void DemolishEcosystem::increaseProducion() {
	std::cout << "Increased production by applying fertilizer " << std::endl;
}

void DemolishEcosystem::harvest(FarmUnit* storage) {
	unit->harvestField(storage);
}
