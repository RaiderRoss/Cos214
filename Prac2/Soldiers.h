#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>
#include "Memento.h"
#include "Caretaker.h"
using namespace std;
class Soldiers {
 private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() = 0;
    virtual void rest() = 0;
    static Caretaker caretaker;  

 public:
    void engage();
    void disengage();
    Memento* militusMemento();
    void vivificaMemento(Memento* mem);
    virtual int getHealthPerSoldier();
    virtual int getDamagePerSoldier();
    virtual int getDefencePerSoldier();
    virtual int getAmountOfSoldiersPerUnit();
    virtual Soldiers* clonis() = 0;
    virtual void printStats() = 0;
    protected:
     Soldiers(int health, int damage, int defence, int amount, std::string name);
};

#endif  // SOLDIERS_H
