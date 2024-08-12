#include <iostream>
#include <typeinfo>

#include "BoatmanFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"

int main() {
	std::cout << "==========================Boatman Testing==========================" << std::endl;
	BoatmanFactory* boatFact = new BoatmanFactory();
	std::cout << "==========================Shield Testing==========================" << std::endl;
	ShieldBearerFactory* shieldFact = new ShieldBearerFactory();
	std::cout << "==========================Infantry Testing==========================" << std::endl;
	InfantryFactory* infFact = new InfantryFactory();
	Soldiers* shieldRunner = infFact->createUnit(12, 13, 14, 2, "Infant");
	Soldiers* gunnerPerson = infFact->createUnit(10, 9, 12, 5, "Infant");
	Soldiers* rowwer = infFact->createUnit(17, 13, 123, 23, "Infant");
	shieldRunner->printStats();
	gunnerPerson->printStats();
	rowwer->printStats();
	std::cout << "Modifying\n";
	Memento* saver = rowwer->militusMemento();
	delete rowwer;
   rowwer = NULL;
	rowwer = infFact->createUnit(10, 10, 10, 2, "Infant");
	rowwer->printStats();
	// rowwer->vivificaMemento(saver);
   // rowwer->printStats();
	delete infFact;
	delete shieldRunner;
   delete gunnerPerson;
	delete rowwer;
	delete saver;
	delete shieldFact;
	delete boatFact;
}
