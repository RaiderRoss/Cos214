//
// Created by 2MGOU on 2024/08/20.
//

#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H
#include "BattleStrategy.h"
#include "UnitComponent.h"
#include "Fortification.h"
#include "Ambush.h"
#include "Flanking.h"
class TacticalCommand {
public:
TacticalCommand();
void setStrategy(BattleStrategy *s);
void chooseBestStrategy();
void executeStategy();
~TacticalCommand();
private:
BattleStrategy * strategy;
UnitComponent * component;
};



#endif //TACTICALCOMMAND_H
