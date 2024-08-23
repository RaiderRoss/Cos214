//
// Created by 2MGOU on 2024/08/20.
//

#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"
class RiverbankFactory {
   public:
	virtual Infantry* createInfantry();
	virtual Cavalry* createCavalry();
	virtual Artillery* createArtillery();
	void deployArtillery();
};

#endif	// RIVERBANKFACTORY_H
