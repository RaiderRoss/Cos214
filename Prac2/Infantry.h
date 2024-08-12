//
// Created by 2MGOU on 2024/07/30.
//

#ifndef INFANTRY_H
#define INFANTRY_H
#include <string>

#include "Soldiers.h"

class Infantry : public Soldiers {
 private:
  int healthPerSoldier;
  int damagePerSoldier;
  int defencePerSoldier;
  int amountOfSoldiersPerUnit;
  std::string unitName = "Infantry";
  virtual void prepare();
  virtual void execute();
  virtual void retreat();
  virtual void rest();

 public:
  Infantry(int health, int damage, int defence, int amount, std::string name);
  int getHealthPerSoldier() override;
  int getDamagePerSoldier() override;
  int getDefencePerSoldier() override;
  int getAmountOfSoldiersPerUnit() override;
  std::string getUnitName() override;
  Soldiers* clonis() override;
};

#endif  // INFANTRY_H
