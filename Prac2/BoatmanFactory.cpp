//
// Created by 2MGOU on 2024/07/30.
//

#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit(int health, int damage, int defence, int amount, std::string name) {
    return new Boatman(health, damage, defence, amount, name);
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


