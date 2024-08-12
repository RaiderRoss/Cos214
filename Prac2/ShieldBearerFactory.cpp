//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerFactory::createUnit(int health, int damage, int defence, int amount, std::string name) {
    ShieldBearer* shieldbearer = new ShieldBearer(health, damage, defence, amount, name);
    return shieldbearer;
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

