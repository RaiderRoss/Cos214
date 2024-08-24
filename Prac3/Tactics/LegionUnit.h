#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <iostream>

class LegionUnit {
public:
    LegionUnit(); 
    virtual ~LegionUnit();  

    virtual void move() = 0;
    virtual void attack() = 0;
};

#endif  // LEGIONUNIT_H
