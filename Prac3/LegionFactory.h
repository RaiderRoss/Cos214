//
// Created by 2MGOU on 2024/08/13.
//

#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H
#include "Artillery.h"
#include "Cavalry.h"
#include "Infantry.h"


class LegionFactory {
    Infantry* createInfantry();
    Cavalry* createCavalry();
    Artillery* createArtillery();
};



#endif //LEGIONFACTORY_H
