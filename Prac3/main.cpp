#include "LegionUnit.h"
#include "includes.h"
int main()
{
    LegionFactory* factory = new RiverbankFactory();
    LegionUnit * riverShooters1 = factory->createCavalry();
    LegionUnit * riverSwords1 = factory->createInfantry();
    return 0;
}
