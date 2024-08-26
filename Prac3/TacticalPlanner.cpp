//
// Created by 2MGOU on 2024/08/20.
//

#include "TacticalPlanner.h"

TacticalMemento* TacticalPlanner::createMemento() {
	TacticalMemento * memeto = new TacticalMemento();
	memeto->storeStrategy(current);
	return memeto;
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
	current = memento->getStrategy();
}
BattleStrategy* TacticalPlanner::getStrategy(){
	return current;
}
void TacticalPlanner::setStrategy(BattleStrategy * strat){
	current = strat;
}