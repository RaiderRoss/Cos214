//
// Created by 2MGOU on 2024/07/30.
//

#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Boatman.h"

class BoatmanFactory: public SoldierFactory{
public:
    Soldiers* createUnit(int health, int damage, int defence, int amount, std::string name) override;
    int calculateTotalHealthPerUnit(Soldiers* soldier) override;
    int calculateTotalDamagePerUnit(Soldiers* soldier) override;
    int calculateTotalDefencePerUnit(Soldiers* soldier) override;
};



#endif //BOATMANFACTORY_H
