#ifndef FIRE_H
#define FIRE_H
#include "StatBooster.h"
class FarmUnit;
class FireHazard : public StatBooster
{
private:
    /* data */
public:
    FireHazard(FarmUnit * unit);
    ~FireHazard();
    virtual void amplifications();
    virtual int getLeftOverCapacity();
    virtual void harvest();
};


#endif