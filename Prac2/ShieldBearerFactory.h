//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "Soldiers.h"
#include "ShieldBearer.h"

class ShieldBearerFactory : public SoldierFactory {
public:
    Soldiers* createUnit() override;
    int calculateTotalHealthPerUnit(Soldiers* soldier) override;
    int calculateTotalDamagePerUnit(Soldiers* soldier) override;
    int calculateTotalDefencePerUnit(Soldiers* soldier) override;
};



#endif //SHIELDBEARERFACTORY_H
