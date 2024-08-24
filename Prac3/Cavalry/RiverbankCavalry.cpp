//
// Created by 2MGOU on 2024/08/20.
//

#include "Infantry.h"
#include "RiverbankCavalry.h"

void RiverbankCavalry::move() {
    std::cout << "Soldiers struggle to get their horses to walk on grainy sand" << std::endl;
    std::cout << "\033[1;31m I don't like sand. It's coarse and rough and irritating and it gets everywhere.\n" <<
    "Not like here. Here everything is soft and smooth \033[0m" << std::endl;
}

void RiverbankCavalry::attack() {
    std::cout << "The horses fling soldiers off onto the ground and gallop off into the sunset" << std::endl;
}

RiverbankCavalry::RiverbankCavalry() {
}
