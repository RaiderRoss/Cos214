#include "Memento.h"

int Memento::getHealth() {
  return healthPerSoldier;
}

int Memento::getDamage()
{
return damagePerSoldier;
}

int Memento::getDefence() {
  return defencePerSoldifer;
}

int Memento::getAmount() {
  return amountOfSoldiersPerUnit;
}

std::string Memento::getName()
{
return unitName;
}

Memento::Memento(int value1, int value2, int value3, int value4,
                 std::string value5) {
  healthPerSoldier = value1;
  damagePerSoldier = value2;
  defencePerSoldifer = value3;
  amountOfSoldiersPerUnit = value4;
  unitName = value5;
}