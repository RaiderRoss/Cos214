//
// Created by 2MGOU on 2024/07/30.
//

#ifndef BOATMAN_H
#define BOATMAN_H
#include <string>

#include "Soldiers.h"

class Boatman : public Soldiers {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();

public:
    Boatman(int health, int damage, int defence, int amount, std::string name);
    int getHealthPerSoldier() override;
    int getDamagePerSoldier() override;
    int getDefencePerSoldier() override;
    int getAmountOfSoldiersPerUnit() override;
    Soldiers* clonis() override;
};

#endif  // BOATMAN_H
