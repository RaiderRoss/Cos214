//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SOLIDERFACTORY_H
#define SOLIDERFACTORY_H
#include "Soldiers.h"


class SoldierFactory {
private:
    Soldiers* soldiers;
protected:
    virtual Soldiers* createUnit();
    virtual int calculateTotalHealthPerUnit();
    virtual int calcualteTotalDamagePerUnit();
    virtual int TotalDefencePerUnit();
};



#endif //SOLIDERFACTORY_H
