//
// Created by 2MGOU on 2024/08/20.
//

#include "WoodlandFactory.h"
#include "WoodlandInfantry.h" 

Infantry* WoodlandFactory::createInfantry() {
	return new WoodlandInfatry();
}

Cavalry* WoodlandFactory::createCavalry() {
	return new WoodlandCavalry();
}

Artillery* WoodlandFactory::createArtillery() {
	return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery() {
	std::cout << "No idea what this does but bet bro in the woodland btw" << std::endl;
}
