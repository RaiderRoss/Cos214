#include <iostream>
#include <typeinfo>

#include "BoatmanFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
void boatTest() {
	std::cout << "==========================Boatman Testing==========================" << std::endl;
	BoatmanFactory* factory = new BoatmanFactory();
	Soldiers* unit1 = factory->createUnit(12, 13, 14, 2, "Infant");
	Soldiers* unit2 = factory->createUnit(10, 9, 12, 5, "Infant");
	Soldiers* unit3 = factory->createUnit(17, 13, 123, 23, "Infant");
	unit1->printStats();
	unit2->printStats();
	unit3->printStats();
	std::cout << "Cloning\n";
	Soldiers* clone = unit2->clonis();
	clone->printStats();
	std::cout << "Engaging\n";
	clone->engage();
	std::cout << "Disengaging\n";
	clone->disengage();
	std::cout << "Modifying\n";
	Memento* saver = unit1->militusMemento();
	delete unit1;
	unit1 = NULL;
	unit1 = factory->createUnit(10, 10, 10, 2, "Infant");
	unit1->printStats();
	unit1->vivificaMemento(saver);
	unit1->printStats();
	delete clone;
	clone = NULL;
	delete factory;
	factory = NULL;
	delete unit1;
	unit1 = NULL;
	delete unit2;
	unit2 = NULL;
	delete unit3;
	unit3 = NULL;
	delete saver;
	saver = NULL;
}
void shieldTest() {
	std::cout << "==========================Shield Testing==========================" << std::endl;
	ShieldBearerFactory* factory = new ShieldBearerFactory();
	Soldiers* unit1 = factory->createUnit(12, 13, 14, 2, "Infant");
	Soldiers* unit2 = factory->createUnit(10, 9, 12, 5, "Infant");
	Soldiers* unit3 = factory->createUnit(17, 13, 123, 23, "Infant");
	unit1->printStats();
	unit2->printStats();
	unit3->printStats();
	std::cout << "Cloning\n";
	Soldiers* clone = unit2->clonis();
	clone->printStats();
	std::cout << "Engaging\n";
	clone->engage();
	std::cout << "Disengaging\n";
	clone->disengage();
	std::cout << "Modifying\n";
	Memento* saver = unit1->militusMemento();
	delete unit1;
	unit1 = NULL;
	unit1 = factory->createUnit(10, 10, 10, 2, "Infant");
	unit1->printStats();
	unit1->vivificaMemento(saver);
	unit1->printStats();
	delete clone;
	clone = NULL;
	delete factory;
	factory = NULL;
	delete unit1;
	unit1 = NULL;
	delete unit2;
	unit2 = NULL;
	delete unit3;
	unit3 = NULL;
	delete saver;
	saver = NULL;
}
void infantTest() {
	std::cout << "==========================Infantry Testing==========================" << std::endl;
	InfantryFactory* factory = new InfantryFactory();
	Soldiers* unit1 = factory->createUnit(12, 13, 14, 2, "Infant");
	Soldiers* unit2 = factory->createUnit(10, 9, 12, 5, "Infant");
	Soldiers* unit3 = factory->createUnit(17, 13, 123, 23, "Infant");
	unit1->printStats();
	unit2->printStats();
	unit3->printStats();
	std::cout << "Cloning\n";
	Soldiers* clone = unit2->clonis();
	clone->printStats();
	std::cout << "Engaging\n";
	clone->engage();
	std::cout << "Disengaging\n";
	clone->disengage();
	std::cout << "Modifying\n";
	Memento* saver = unit1->militusMemento();
	delete unit1;
	unit1 = NULL;
	unit1 = factory->createUnit(10, 10, 10, 2, "Infant");
	unit1->printStats();
	unit1->vivificaMemento(saver);
	unit1->printStats();
	delete clone;
	clone = NULL;
	delete factory;
	factory = NULL;
	delete unit1;
	unit1 = NULL;
	delete unit2;
	unit2 = NULL;
	delete unit3;
	unit3 = NULL;
	delete saver;
	saver = NULL;
}
int main() {
	//boatTest();
	//infantTest();
	Soldiers * defaulDt = new Infantry(2,3,4,5,"Test");
	defaulDt->printStats();
	//shieldTest();
}
