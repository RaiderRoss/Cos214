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
	int lowest = INFINITY;
	TacticalMemento* best = NULL;
	std::string strat = "";
	for (const auto& pair : mementolist) {
		TacticalMemento* mem = pair.second;
		int timesUsed = mem->getNumtimesUsed();
		char last = pair.first.back();
		timesUsed += 1;
		switch (last) {
			case 'g':
				timesUsed *= 2;
				break;
			case 'n':
				timesUsed *= 4;
				break;
			case 'h':
				timesUsed *= 3;
				break;
			default:
				break;
		}

		if (timesUsed < lowest) {
			lowest = timesUsed;
			best = mem;
			strat = pair.first;
		}
	}
	std::cout << "To use : " << strat << std::endl;
	best->use();
	return best;
}

void WarArchives::clear() {
	for (auto it = mementolist.begin(); it != mementolist.end(); ++it) {
		delete it->second;
	}
	mementolist.clear();
}
