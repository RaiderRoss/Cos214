//
// Created by 2MGOU on 2024/07/30.
//

#ifndef SOLDIERS_H
#define SOLDIERS_H
#include <string>
#include <iostream>
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
  virtual void engage() = 0;
  virtual void disengage() = 0;
  Memento* militusMemento();
  void vivificaMemento( Memento* mem);
};

#endif  // SOLDIERS_H
