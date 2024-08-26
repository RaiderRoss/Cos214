#include "Legion.h"

Legion::Legion() {
}

Legion::~Legion() {
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
}

void Legion::remove(UnitComponent* unit) {
}
