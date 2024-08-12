#include "Soldiers.h"
Caretaker Soldiers::caretaker;

Memento* Soldiers::militusMemento() {
	return new Memento(getHealthPerSoldier(), getDamagePerSoldier(),
					   getDamagePerSoldier(), getAmountOfSoldiersPerUnit(),
					   unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
	this->unitName = mem->getName();
	this->healthPerSoldier = mem->getHealth();
	this->damagePerSoldier = mem->getDamage();
	this->defencePerSoldier = mem->getDefence();
	this->amountOfSoldiersPerUnit = mem->getAmount();
}

Soldiers::Soldiers(int health, int damage, int defence, int amount,
				   std::string name) {
	std::cout << " here creating with health: " + health << std::endl;
	healthPerSoldier = health;
	damagePerSoldier = damage;
	defencePerSoldier = defence;
	amountOfSoldiersPerUnit = amount;
	unitName = name;
}

void Soldiers::engage() {
	prepare();
	execute();
}

void Soldiers::disengage() {
	retreat();
	rest();
}
