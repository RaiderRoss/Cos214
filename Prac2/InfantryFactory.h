//
// Created by 2MGOU on 2024/07/30.
//

#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "SoldierFactory.h"
#include "Soldiers.h"
#include "Infantry.h"

class InfantryFactory : public SoldierFactory{
public:
    Soldiers* createUnit(int health, int damage, int defence, int amount, std::string name) override;
    int calculateTotalHealthPerUnit(Soldiers* soldier) override;
    int calculateTotalDamagePerUnit(Soldiers* soldier) override;
    int calculateTotalDefencePerUnit(Soldiers* soldier) override;
};



#endif //INFANTRYFACTORY_H
