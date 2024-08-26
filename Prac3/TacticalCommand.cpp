#include "TacticalCommand.h"

TacticalCommand::TacticalCommand() {
	strategy = nullptr;
	component = new Legion();
	archives = new WarArchives();
}

void TacticalCommand::setStrategy(BattleStrategy* s) {
	if (strategy != nullptr) {
		delete strategy;
	}

	if (s == nullptr) {
		strategy = new Ambush();
		s = strategy;
		return;
	}

	strategy = s;
}
void TacticalCommand::chooseBestStrategy() {
	TacticalPlanner* planner = new TacticalPlanner();
	planner->setStrategy(strategy);
	if (archives->getNumMementos() == 0) {
		strategy = new Fortification();
	}
	archives->addTacticalMemento(planner->createMemento(), "current");
	planner->setStrategy(strategy);
	archives->addTacticalMemento(planner->createMemento(), "best");
	planner->restoreMemento(archives->getMemento("best"));
	strategy = planner->getStrategy();
	component->clear();
	delete planner;
}

void TacticalCommand::executeStategy() {
	if (strategy != nullptr) {
		strategy->engage(component);
	}
	component->move();
	component->attack();
}

TacticalCommand::~TacticalCommand() {
	delete component;
	component = nullptr;
	archives->clear();
	delete archives;
	archives = nullptr;
}