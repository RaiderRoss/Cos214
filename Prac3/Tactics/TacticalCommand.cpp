//
// Created by 2MGOU on 2024/08/20.
//

#include "TacticalCommand.h"

TacticalCommand::TacticalCommand() {
    strategy = new Fortification();
}

void TacticalCommand::setStrategy(BattleStrategy* s) {
    if(s == NULL){
        strategy = new Ambush();
        s = strategy;
        return;
    } 
    if(strategy!=nullptr){
        delete strategy;
    }
    strategy = s;
}

void TacticalCommand::chooseBestStrategy() {

}

void TacticalCommand::executeStategy() {
    strategy->engage(component);
    component->move();
    component->attack();
}

TacticalCommand::~TacticalCommand()
{
    delete component;
}
