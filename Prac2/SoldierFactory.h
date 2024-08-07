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
    virtual Soldiers* createUnit() = 0;
    virtual int calculateTotalHealthPerUnit(Soldiers* soldier) = 0;
    virtual int calculateTotalDamagePerUnit(Soldiers* soldier) = 0;
    virtual int calculateTotalDefencePerUnit(Soldiers* soldier) = 0;
};



#endif //SOLIDERFACTORY_H
