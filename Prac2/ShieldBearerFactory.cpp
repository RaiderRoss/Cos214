//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerFactory::createUnit() {
    return new ShieldBearer();
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

