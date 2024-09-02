//
// Created by 2MGOU on 2024/08/20.
//

#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
class Fortification : public BattleStrategy {
   public:
	void engage(UnitComponent * component);
};

#endif	// FORTIFICATION_H
