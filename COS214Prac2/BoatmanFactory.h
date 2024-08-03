//
// Created by 2MGOU on 2024/07/30.
//

#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "Soldiers.h"
#include "SoldierFactory.h"

class BoatmanFactory: public SoldierFactory{
public:
    Soldiers* createUnit() override;
    int calculateTotalHealthPerUnit() override;
    int calcualteTotalDamagePerUnit() override;
    int TotalDefencePerUnit() override;
};



#endif //BOATMANFACTORY_H
