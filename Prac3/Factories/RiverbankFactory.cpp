//
// Created by 2MGOU on 2024/08/20.
//

#include "RiverbankFactory.h"

Infantry* RiverbankFactory::createInfantry() {
	return new RiverbankInfantry();
}

Cavalry* RiverbankFactory::createCavalry() {
	return new RiverbankCavalry();
}

Artillery* RiverbankFactory::createArtillery() {
	return new RiverbankArtillery();
}

void RiverbankFactory::deployArtillery() {
}
