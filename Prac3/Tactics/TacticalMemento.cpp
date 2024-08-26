//
// Created by 2MGOU on 2024/08/20.
//

#include "TacticalMemento.h"

void TacticalMemento::storeStrategy(BattleStrategy* strategy) {
    if(strategy != nullptr){
        delete strategy;
    }
    this->strategy = strategy;
}

BattleStrategy* TacticalMemento::getStrategy() {
	return strategy;
}

