//
// Created by 2MGOU on 2024/08/13.
//

#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H
#include "Artillery.h"
#include "Cavalry.h"
#include "Infantry.h"

class LegionFactory {
    public:
    virtual Infantry* createInfantry() = 0 ;
    virtual Cavalry* createCavalry() = 0;
    virtual Artillery* createArtillery() = 0;
    virtual void deployArtillery() = 0;
};

#endif
