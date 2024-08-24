//
// Created by 2MGOU on 2024/08/20.
//

#include "RiverbankInfantry.h"

#include "Infantry.h"

void RiverbankInfantry::move() {
	std::cout << "Moving the infantry forces onto a river bank" << std::endl;
}

void RiverbankInfantry::attack() {
	std::cout << "They refuse " << std::endl;
	std::cout << "\033[1;31m I don't like sand. It's coarse and rough and irritating and it gets everywhere.\n"
			  << "Not like here. Here everything is soft and smooth \033[0m" << std::endl;
}

RiverbankInfantry::RiverbankInfantry() {
}
