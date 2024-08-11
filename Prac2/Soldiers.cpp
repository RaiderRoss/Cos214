#include "Soldiers.h"
Caretaker Soldiers::caretaker;

Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldifer, amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
    this->unitName = mem->getName();
    this->healthPerSoldier = mem->getHealth();
    this->damagePerSoldier = mem->getDamage();
    this->defencePerSoldifer = mem->getDefence();
    this->amountOfSoldiersPerUnit = mem->getAmount();
}

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}
