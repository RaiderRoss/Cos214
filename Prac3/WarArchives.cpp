//
// Created by 2MGOU on 2024/08/20.
//

#include "WarArchives.h"

#include <cmath>
void WarArchives::addTacticalMemento(TacticalMemento* memento, std::string label) {
	if (mementolist.count(label) != 0) {
		return;
	}
	mementolist[label] = memento;
}

void WarArchives::removeTatcticalMemento(std::string label) {
	if (mementolist.count(label) == 0) {
		return;
	}
	mementolist[label] = nullptr;
}

TacticalMemento* WarArchives::getMemento(std::string label) {
	if (mementolist.count(label) == 0) {
		return nullptr;
	}
	return mementolist[label];
}
TacticalMemento* WarArchives::getBest() {
	double lowest = INFINITY;
	TacticalMemento * best = NULL;
	for (const auto& pair : mementolist) {
		TacticalMemento * mem = pair.second;
		if(mem->getNumtimesUsed()==0){

		}
	}
	best->use();
	return best;
}

void WarArchives::clear() {
	for (auto it = mementolist.begin(); it != mementolist.end(); ++it) {
		delete it->second;
	}
	mementolist.clear();
}
