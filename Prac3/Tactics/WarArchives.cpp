//
// Created by 2MGOU on 2024/08/20.
//

#include "WarArchives.h"

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
