//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "Soldiers.h"

class ShieldBearerFactory : public SoldierFactory {
public:
    Soldiers* createUnit();
    int calculateTotalHealthPerUnit();
    int calcualteTotalDamagePerUnit();
    int TotalDefencePerUnit();
};



#endif //SHIELDBEARERFACTORY_H
