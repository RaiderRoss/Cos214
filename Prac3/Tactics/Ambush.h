//
// Created by 2MGOU on 2024/08/20.
//

#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
public:
	void engage(UnitComponent * component);
	virtual ~Ambush();
};



#endif //AMBUSH_H
