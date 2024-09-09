#include "FireHazard.h"

FireHazard::FireHazard(FarmUnit * field) : StatBooster(field) {
}

FireHazard::~FireHazard() {
}

void FireHazard::amplifications() {
    construct();
}

void FireHazard::construct() {
    std::cout << "Construction new barn of crop type : " << unit->getCropType() << " with capacity : " << 30 << std::endl;
    unit->add(new Barn(unit->getCropType(), 0, 30));
}

int FireHazard::getLeftOverCapacity() {
	return 7;
}
