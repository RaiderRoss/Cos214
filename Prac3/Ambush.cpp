//
// Created by 2MGOU on 2024/08/20.
//

#include "Ambush.h"

void Ambush::engage(UnitComponent* component) {
	LegionFactory* woodland = new WoodlandFactory();
	component->add(woodland->createInfantry());
	component->add(woodland->createInfantry());
	component->add(woodland->createInfantry());
	component->add(woodland->createCavalry());
	component->add(woodland->createCavalry());
	delete woodland;
}
