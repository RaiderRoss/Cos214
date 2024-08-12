//
// Created by 2MGOU on 2024/07/30.
//

#include "InfantryFactory.h"


Soldiers *InfantryFactory::createUnit(int health, int damage, int defence, int amount, std::string name) {
    std::cout << "Here" << health << std::endl;
    return new Infantry(health, damage, defence, amount, name);
}

int InfantryFactory::calculateTotalDamagePerUnit(Soldiers* infantry) {
    return infantry->getDamagePerSoldier() * infantry->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDefencePerUnit(Soldiers* infantry) {
    return infantry->getDefencePerSoldier() * infantry->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalHealthPerUnit(Soldiers* infantry) {
    return infantry->getHealthPerSoldier() * infantry->getAmountOfSoldiersPerUnit();
}


