//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerFactory::createUnit(int health, int damage, int defence, int amount, std::string name) {
    return new ShieldBearer(health, damage, defence, amount, name);
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(Soldiers* shieldbearer) {
    return shieldbearer->getDamagePerSoldier() * shieldbearer->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(Soldiers* shieldbearer) {
    return shieldbearer->getHealthPerSoldier() * shieldbearer->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(Soldiers* shieldbearer) {
    return shieldbearer->getDefencePerSoldier() * shieldbearer->getAmountOfSoldiersPerUnit();
}

