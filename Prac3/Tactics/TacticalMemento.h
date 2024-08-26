//
// Created by 2MGOU on 2024/08/20.
//

#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H


#include "BattleStrategy.h"
class TacticalMemento {
public:
void storeStrategy(BattleStrategy * strategy);
BattleStrategy * getStrategy();
private:
BattleStrategy * strategy;
};



#endif //TACTICALMEMENTO_H
