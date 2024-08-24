//
// Created by 2MGOU on 2024/08/20.
//

#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"
class WoodlandFactory : public LegionFactory {
   public:
	virtual Infantry* createInfantry();
	virtual Cavalry* createCavalry();
	virtual Artillery* createArtillery();
	void deployArtillery();
};

#endif	// WOODLANDFACTORY_H
