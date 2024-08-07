//
// Created by 2MGOU on 2024/07/30.
//

#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit() {
    return new Boatman();
}


int BoatmanFactory::calculateTotalDamagePerUnit(Soldiers* boatman) {
    return boatman->getDamagePerSoldier() * boatman->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalHealthPerUnit(Soldiers* boatman) {
    return boatman->getHealthPerSoldier() * boatman->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit(Soldiers* boatman) {
    return boatman->getDefencePerSoldier() * boatman->getAmountOfSoldiersPerUnit();
}


