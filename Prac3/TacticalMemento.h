//
// Created by 2MGOU on 2024/08/20.
//

#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"
class TacticalMemento {
    public:
	int getNumtimesUsed();
	void use();
   private:
	int numTimesUsed;
	void storeStrategy(BattleStrategy* strategy);
	BattleStrategy* getStrategy();
	BattleStrategy* strategy;
	friend class TacticalPlanner;
};

#endif	// TACTICALMEMENTO_H
