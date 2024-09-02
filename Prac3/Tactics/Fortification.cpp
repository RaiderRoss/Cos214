//
// Created by 2MGOU on 2024/08/20.
//

#include "Fortification.h"

void Fortification::engage(UnitComponent* component) {
	LegionFactory* woodland = new WoodlandFactory();
	LegionFactory* open = new OpenFieldFactory();
	LegionFactory* river = new RiverbankFactory();
	component->add(woodland->createArtillery());
	component->add(open->createArtillery());
	component->add(river->createArtillery());
	component->add(woodland->createInfantry());
	component->add(open->createInfantry());
	component->add(river->createInfantry());
	delete woodland;
	delete open;
	delete river;
}
