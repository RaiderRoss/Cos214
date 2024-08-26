//
// Created by 2MGOU on 2024/08/20.
//

#include "TacticalCommand.h"

TacticalCommand::TacticalCommand() {
    strategy = new Fortification();
}

void TacticalCommand::setStrategy(BattleStrategy* s) {
	if(strategy!=nullptr){
        delete strategy;
    }
    strategy = s;
}

void TacticalCommand::chooseBestStrategy() {
    
}

void TacticalCommand::executeStategy() {
    strategy->engage();
}

TacticalCommand::~TacticalCommand()
{
    delete component;
}
