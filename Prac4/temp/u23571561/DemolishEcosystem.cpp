#include "DemolishEcosystem.h"

DemolishEcosystem::DemolishEcosystem(FarmUnit * field) : StatBooster(field) {
}

DemolishEcosystem::~DemolishEcosystem() {
}

void DemolishEcosystem::amplifications() {
    construct();
}

void DemolishEcosystem::construct() {
    unit->add(new Barn(unit->getCropType(), 0, 30));
}
