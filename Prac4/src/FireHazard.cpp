#include "FireHazard.h"

FireHazard::FireHazard(FarmUnit * field) : StatBooster(field) {
}

FireHazard::~FireHazard() {
}

void FireHazard::amplifications() {
    construct();
}

void FireHazard::construct() {
    unit->add(new Barn(unit->getCropType(), 0, 30));
}

int FireHazard::getLeftOverCapacity() {
	return 7;
}
