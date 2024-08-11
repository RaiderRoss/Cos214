//
// Created by 2MGOU on 2024/07/30.
//

#include "InfantryFactory.h"


Soldiers *InfantryFactory::createUnit() {
    return new Infantry();
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


