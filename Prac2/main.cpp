#include <iostream>
#include <typeinfo>
#include "BoatmanFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"

int main() {

   InfantryFactory* infantryfactory = new InfantryFactory();
   ShieldBearerFactory* shieldbearerfactory = new ShieldBearerFactory;
   BoatmanFactory* boatmanfactory = new BoatmanFactory;

   Soldiers* rifleman = infantryfactory->createUnit(30, 50, 20, 5, "Rifleman");
   Soldiers* shieldman = shieldbearerfactory->createUnit(60, 20, 100, 10, "Shieldman");
   Soldiers* boatman  = boatmanfactory->createUnit(20, 20, 10, 5, "Boatman");
   Soldiers* clonerifle = rifleman->clonis();
   Soldiers* cloneshieldman = shieldman->clonis();
   Soldiers* cloneboatman = boatman->clonis();

   std::cout << rifleman->getDamagePerSoldier() << std::endl;

   clonerifle->engage();
   cloneshieldman->engage();
   cloneboatman->engage();
   clonerifle->disengage();
   cloneshieldman->disengage();
   cloneboatman->disengage();


   std::cout << "Infantry : " << typeid(*rifleman).name() << std::endl;
   std::cout << "Shieldman : " << typeid(*shieldman).name() << std::endl;
   std::cout << "Boatman : " << typeid(*boatman).name() << std::endl;
<<<<<<< HEAD
=======

   Memento* goodRifleman = rifleman->militusMemento();
   rifleman = new Infantry(10, 10, 10, 10, "Not rifleman");

   std::cout << rifleman->getDamagePerSoldier() << std::endl;

   rifleman->vivificaMemento(goodRifleman);

   std::cout << rifleman->getDamagePerSoldier() << std::endl;


>>>>>>> 847e47897ec897e5e37004ee1245c0cd02d7da1d
}
