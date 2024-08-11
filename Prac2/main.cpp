#include <iostream>
#include <typeinfo>
#include "BoatmanFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"

int main() {

   InfantryFactory* infantryfactory = new InfantryFactory();
   ShieldBearerFactory* shieldbearerfactory = new ShieldBearerFactory;
   BoatmanFactory* boatmanfactory = new BoatmanFactory;

   Soldiers* rifleman = infantryfactory->createUnit();
   Soldiers* shieldman = shieldbearerfactory->createUnit();
   Soldiers* boatman  = boatmanfactory->createUnit();

   Soldiers* clonerifle = rifleman->clonis();
   Soldiers* cloneshieldman = shieldman->clonis();
   Soldiers* cloneboatman = boatman->clonis();

   clonerifle->engage();
   cloneshieldman->engage();
   cloneboatman->engage();
   clonerifle->disengage();
   cloneshieldman->disengage();
   cloneboatman->disengage();


   std::cout << "Infantry : " << typeid(*rifleman).name() << std::endl;
   std::cout << "Shieldman : " << typeid(*shieldman).name() << std::endl;
   std::cout << "Boatman : " << typeid(*boatman).name() << std::endl;






}
