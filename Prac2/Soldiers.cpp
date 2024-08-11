//
// Created by 2MGOU on 2024/07/30.
//

#include "Soldiers.h"

Memento* Soldiers::militusMemento() {
  return new Memento(healthPerSoldier,damagePerSoldier,defencePerSoldifer,amountOfSoldiersPerUnit,unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
  this->unitName = mem->getName();
  this->healthPerSoldier = mem->getHealth();
  this->damagePerSoldier = mem->getDamage();
  this->defencePerSoldifer = mem->getDefence();
  this->amountOfSoldiersPerUnit = mem->getAmount();
}

Soldiers::get