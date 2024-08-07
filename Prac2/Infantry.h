//
// Created by 2MGOU on 2024/07/30.
//

#ifndef INFANTRY_H
#define INFANTRY_H
#include <string>

#include "Soldiers.h"

class Infantry : public Soldiers {
 private:
 int healthPerSoldier = 40;
 int damagePerSoldier = 50;
 int defencePerSoldifer = 30;
 int amountOfSoldiersPerUnit = 15;
 std::string unitName = "Infantry";
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

#endif  // INFANTRY_H
