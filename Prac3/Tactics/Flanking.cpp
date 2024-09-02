//
// Created by 2MGOU on 2024/08/20.
//

#include "Flanking.h"

void Flanking::engage(UnitComponent * component)
{
	LegionFactory* woodland = new WoodlandFactory();
	LegionFactory* open = new OpenFieldFactory();
	LegionFactory* river = new RiverbankFactory();
	component->add(woodland->createCavalry());
    component->add(open->createCavalry());
    component->add(river->createCavalry());
	delete woodland;
	delete open;
	delete river;
}

