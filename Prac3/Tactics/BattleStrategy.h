//
// Created by 2MGOU on 2024/08/20.
//

#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include "LegionFactory.h"
#include "OpenFieldFactory.h"
#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
class BattleStrategy {
public:
virtual void engage() = 0;
};



#endif //BATTLESTRATEGY_H
