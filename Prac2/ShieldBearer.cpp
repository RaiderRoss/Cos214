//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearer.h"

ShieldBearer::ShieldBearer(int health, int damage, int defence, int amount,
                           std::string name)
    : Soldiers(health, damage, defence, amount, name) {}

void ShieldBearer::prepare() {
  cout << "A shield bearer tries to pick up a lead shield but it is too heavy "
          "and uses a wooden one instead."
       << endl;
}

void ShieldBearer::execute() {
  cout << "Raises their shield in an epic scened moment and runs into battle "
          "picking up all the arrows that would\n"
       << "have struck down the infantry." << endl;
}

void ShieldBearer::retreat() {
  cout << "Gets wacked on the head with a chain-axe and raises the shield to "
          "protect,\n"
       << "themself/himself/herself/theyself/itself/boxself/apacheself/.../"
          "inclusiveself/monkeyself/boiself\n"
       << "from a fatal blow to the croch/chest/noggin/something important by "
          "a sword\n"
       << "and runs away with their head half open with the axe like nearly "
          "headless Neck.\n"
       << endl;
}

void ShieldBearer::rest() {
  cout << "Chucks their shield down in frustration and exhuastion. While doing "
          "so all the arrows shoot out of the shield like a porcupine. And "
          "hits random bystanders."
       << endl;
  healthPerSoldier * 2.1;
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
std::string ShieldBearer::getUnitName() {
  return this->unitName;
}
void ShieldBearer::printStats() {
   std::cout << "Health: " << getHealthPerSoldier() << " Damage "
            << getDamagePerSoldier() << " Defence " << getDefencePerSoldier()
            << "\n";
}
Soldiers* ShieldBearer::clonis() {
  Soldiers* clone = new ShieldBearer(*this);
  return clone;
}
