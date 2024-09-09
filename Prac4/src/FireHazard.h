#ifndef DEMO_H
#define DEMO_H
#include "StatBooster.h"
#include "Barn.h"
class FireHazard : public StatBooster
{
public:
    FireHazard(FarmUnit * field);
    ~FireHazard();
    virtual void amplifications();
    virtual void construct();
    virtual int getLeftOverCapacity();
};


#endif