#include "FireHazard.h"
#include "FarmUnit.h"
FireHazard::FireHazard(FarmUnit * unit) : StatBooster(unit) {
}

FireHazard::~FireHazard() {
}

void FireHazard::amplifications() {
}

int FireHazard::getLeftOverCapacity() {
	return 0;
}

void FireHazard::harvest() {
}
