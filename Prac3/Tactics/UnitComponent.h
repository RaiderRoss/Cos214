//
// Created by 2MGOU on 2024/08/20.
//

#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H


class LegionUnit;
class UnitComponent {
public:
virtual void move() = 0;
virtual void attack() = 0;
virtual void add(UnitComponent * unit);
virtual void remove(UnitComponent * unit);
virtual void clear() = 0;
UnitComponent();
virtual ~UnitComponent();
};



#endif //UNITCOMPONENT_H
