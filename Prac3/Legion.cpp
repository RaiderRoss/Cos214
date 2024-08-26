#include "Legion.h"

Legion::Legion() {
    components = new std::list<LegionUnit*>();
}

Legion::~Legion() {
    clear();
    delete components;
    components = nullptr;
}

void Legion::move() {
    for (LegionUnit* unit : *components) {
        unit->move();
    }
}

void Legion::attack() {
    for (LegionUnit* unit : *components) {
        unit->attack();
    }
}

void Legion::add(LegionUnit* unit) {
    components->push_back(unit);
}

void Legion::remove(LegionUnit* unit) {
    if (unit != nullptr) {
        components->remove(unit);  
        delete unit;               
        unit = nullptr;           
    }
}

void Legion::clear() {
    for (LegionUnit* unit : *components) {
        delete unit; 
    }
    components->clear(); 
}