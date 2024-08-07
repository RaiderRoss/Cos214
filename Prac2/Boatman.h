//
// Created by 2MGOU on 2024/07/30.
//

#ifndef BOATMAN_H
#define BOATMAN_H
#include <string>

#include "Soldiers.h"

class Boatman : public Soldiers {
private:
    int healthPerSoldier = 30;
    int damagePerSoldier = 20;
    int defencePerSoldier = 20;
    int amountOfSoldiersPerUnit = 4;
    std::string unitName = "Boatman";
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();

public:
    virtual void engage();
    virtual void disengage();
    int getHealthPerSoldier() override;
    int getDamagePerSoldier() override;
    int getDefencePerSoldier() override;
    int getAmountOfSoldiersPerUnit() override;
};

#endif  // BOATMAN_H
