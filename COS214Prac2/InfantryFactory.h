//
// Created by 2MGOU on 2024/07/30.
//

#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "SoldierFactory.h"
#include "Soldiers.h"

class InfantryFactory : public SoldierFactory{
public:
    Soldiers* createUnit();
    int calculateTotalHealthPerUnit();
    int calcualteTotalDamagePerUnit();
    int TotalDefencePerUnit();
};



#endif //INFANTRYFACTORY_H
