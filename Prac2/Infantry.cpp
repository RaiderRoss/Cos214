//
// Created by 2MGOU on 2024/07/30.
//

#include "Infantry.h"

void Infantry::prepare() {
  cout << "Drinks a nice cold beer in preperation for the short lived battle "
          "ahead."
       << endl;
}

void Infantry::execute() {
  cout << "Plot twist the infantary are modern day soldiers with guns and "
          "obliterate anything in their way."
       << endl;
}

void Infantry::retreat() {
    cout << "All infantary died heroically in battle and there are none to "
          "retreat."
       << endl;
}

void Infantry::rest() {
  cout << "Drinks another well deserved beer before passing away." << endl;

  delete this;
}

void Infantry::engage() {
  prepare();
  execute();
}

void Infantry::disengage() {
  retreat();
  rest();
}

int Infantry::getDamagePerSoldier() {
  return this->damagePerSoldier;
}

int Infantry::getDefencePerSoldier() {
  return this->defencePerSoldifer;
}

int Infantry::getHealthPerSoldier() {
  return this->healthPerSoldier;
}

int Infantry::getAmountOfSoldiersPerUnit() {
  return this->amountOfSoldiersPerUnit;
}

Soldiers *Infantry::clonis() {
    Infantry* clone = new Infantry(*this);
    return clone;
}



