#include "Legion.h"

Legion::Legion() {
    components = new std::list<UnitComponent*>();
}

Legion::~Legion() {
    clear();
    delete components;
    components = nullptr;
}

void Legion::move() {
    for (UnitComponent* unit : *components) {
        unit->move();
    }
}

void Legion::attack() {
    for (UnitComponent* unit : *components) {
        unit->attack();
    }
}

void Legion::add(UnitComponent* unit) {
    components->push_back(unit);
}

void Legion::remove(UnitComponent* unit) {
    if (unit != nullptr) {
        components->remove(unit);  
        delete unit;               
        unit = nullptr;           
    }
}

void Legion::clear() {
    for (UnitComponent* unit : *components) {
        delete unit; 
    }
    components->clear(); 
}