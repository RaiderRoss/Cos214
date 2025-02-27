//
// Created by 2MGOU on 2024/07/30.
//

#ifndef MEMENTO_H
#define MEMENTO_H
#include <string>

class Memento {
  friend class Soldiers;
  int getHealth();
  int getDamage();
  int getDefence();
  int getAmount();
  std::string getName();
 private:
  int healthPerSoldier;
  int damagePerSoldier;
  int defencePerSoldifer;
  int amountOfSoldiersPerUnit;
  std::string unitName;
  Memento(int value1, int value2, int value3, int value4, std::string value5);
};

#endif  // MEMENTO_H
