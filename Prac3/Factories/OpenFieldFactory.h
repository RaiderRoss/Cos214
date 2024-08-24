//
// Created by 2MGOU on 2024/08/20.
//

#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"
class OpenFieldFactory : public LegionFactory {
    public:
	virtual Infantry* createInfantry();
	virtual Cavalry* createCavalry();
	virtual Artillery* createArtillery();
	void deployArtillery();
};

#endif	// OPENFIELDFACTORY_H
