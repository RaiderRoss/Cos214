#include "TacticalCommand.h"

TacticalCommand::TacticalCommand() {
	strategy = nullptr;
	component = new Legion();
	archives = new WarArchives();
}

void TacticalCommand::chooseBestStrategy() {
	TacticalPlanner* planner = new TacticalPlanner();
	if (strategy == NULL) {
		strategy = new Fortification();
		planner->setStrategy(strategy);
		archives->addTacticalMemento(planner->createMemento(), "Fortification");
		strategy = new Ambush();
		planner->setStrategy(strategy);
		archives->addTacticalMemento(planner->createMemento(), "Ambush");
		strategy = new Flanking();
		planner->setStrategy(strategy);
		archives->addTacticalMemento(planner->createMemento(), "Flank");
	}
	
	TacticalMemento * best = archives->getBest();
	planner->restoreMemento(best);
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