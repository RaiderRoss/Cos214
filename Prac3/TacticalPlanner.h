//
// Created by 2MGOU on 2024/08/20.
//

#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H


#include "BattleStrategy.h"
#include "TacticalMemento.h"
class TacticalPlanner {
public:
TacticalMemento* createMemento();
void restoreMemento(TacticalMemento * memento);
BattleStrategy * getStrategy();
void setStrategy(BattleStrategy * strat);
private:
BattleStrategy * current;

};



#endif //TACTICALPLANNER_H
