//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearer.h"

void ShieldBearer::prepare() {
  cout << "A shield bearer tries to pick up a lead shield but it is too heavy "
          "and uses a wooden one instead."
       << endl;
}

void ShieldBearer::execute() {
  cout << "Raises their shiel in an epic scened moment and runs into battle "
          "picking up all the arrows that would\n"
       << "have struck down the infantary." << endl;
}

void ShieldBearer::retreat() {
  cout << "Gets wacked on the head with a chain axe and raises the shield to "
          "protect\n"
       << "themself/himself/herself/theyself/itself/boxself/apacheself/.../"
          "inclusiveself/monkeyself/boiself\n"
       << "from a fatal blow to the croch/chets/noggin/something important by "
          "a sword\n"
       << "and runs away with their head half open with the axe like nearly "
          "headless Neck.\n"
       << endl;
}

void ShieldBearer::rest() {
  cout << "Chucks their shield down in frustration and exhuastion. While doing "
          "so all the arrows shoot out of the shield like a porcupine. And hits random bystanders."
       << endl;
}

void ShieldBearer::engage() {
  prepare();
  execute();
}

void ShieldBearer::disengage() {
  retreat();
  rest();
}


int ShieldBearer::getDamagePerSoldier() {
    return this->damagePerSoldier;
}

int ShieldBearer::getDefencePerSoldier() {
    return this->defencePerSoldier;
}

int ShieldBearer::getHealthPerSoldier() {
    return this->healthPerSoldier;
}

int ShieldBearer::getAmountOfSoldiersPerUnit() {
    return this->amountOfSoldiersPerUnit;
}
