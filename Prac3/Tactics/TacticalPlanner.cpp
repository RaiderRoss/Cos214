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
	if(current != nullptr){
		delete current;
	}
	current = memento->getStrategy();
}
