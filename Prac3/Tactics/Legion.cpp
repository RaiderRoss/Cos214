#include "Legion.h"

Legion::Legion() {
}

Legion::~Legion() {
    for (UnitComponent* unit : components) {
        remove(unit);
	}
}

void Legion::move() {
	for (UnitComponent* unit : components) {
        unit->move();
	}
}

void Legion::attack() {
    for (UnitComponent* unit : components) {
        unit->attack();
	}
}

void Legion::add(UnitComponent* unit) {
    components.push_back(unit);
}

void Legion::remove(UnitComponent* unit) {
    components.remove(unit);
    delete unit;
    unit = NULL;
}
