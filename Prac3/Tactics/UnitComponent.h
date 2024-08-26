//
// Created by 2MGOU on 2024/08/20.
//

#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H



class UnitComponent {
public:
virtual void move() = 0;
virtual void attack() = 0;
virtual void add(UnitComponent * unit) = 0;
virtual void remove(UnitComponent * unit) = 0;
UnitComponent();
virtual ~UnitComponent();
};



#endif //UNITCOMPONENT_H
