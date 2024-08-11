//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include <string>

#include "Soldiers.h"

class ShieldBearer : public Soldiers {
 private:
    int healthPerSoldier = 50;
    int damagePerSoldier = 20;
    int defencePerSoldier = 50;
    int amountOfSoldiersPerUnit = 10;
    std::string unitName = "ShieldBearer";
  virtual void prepare();
  virtual void execute();
  virtual void retreat();
  virtual void rest();

 public:
    int getHealthPerSoldier() override;
    int getDamagePerSoldier() override;
    int getDefencePerSoldier() override;
    int getAmountOfSoldiersPerUnit() override;
    Soldiers* clonis() override;
};

#endif  // SHIELDBEARER_H
