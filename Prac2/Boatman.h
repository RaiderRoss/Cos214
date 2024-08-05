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
  int defencePerSoldifer;
  int amountOfSoldiersPerUnit;
  std::string unitName;
  virtual void prepare();
  virtual void execute();
    virtual void retreat();
  virtual void rest();

 public:
  virtual void engage();
  virtual void disengage();
};

#endif  // BOATMAN_H
