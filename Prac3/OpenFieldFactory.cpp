//
// Created by 2MGOU on 2024/08/20.
//

#include "OpenFieldFactory.h"

Infantry* OpenFieldFactory::createInfantry() {
	return new OpenfieldInfantry();
}

Cavalry* OpenFieldFactory::createCavalry() {
	return new OpenfieldCavalry();
}

Artillery* OpenFieldFactory::createArtillery() {
	return new OpenFieldArtillery();
}

void OpenFieldFactory::deployArtillery() {
	std::cout << "LOOOOOK A DAISy wait the artillery got distracted" << std::endl;
}
