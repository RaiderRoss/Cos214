//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SOLDIERS_H
#define SOLDIERS_H
#include <iostream>
#include <string>
using namespace std;
#include "Memento.h"
class Soldiers {
 private:
  int healthPerSoldier;
  int damagePerSoldier;
  int defencePerSoldifer;
  int amountOfSoldiersPerUnit;
  std::string unitName;
  virtual void prepare() = 0;
  virtual void execute() = 0;
  virtual void retreat() = 0;
  virtual void rest() = 0;

 public:
  void engage();
  void disengage();
  Memento* militusMemento();
  void vivificaMemento(Memento* mem);
  virtual int getHealthPerSoldier() = 0;
  virtual int getDamagePerSoldier() = 0;
  virtual int getDefencePerSoldier() = 0;
  virtual int getAmountOfSoldiersPerUnit() = 0;
  virtual Soldiers* clonis() = 0;
};

#endif  // SOLDIERS_H
