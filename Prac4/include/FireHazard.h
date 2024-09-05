#ifndef FIRE_H
#define FIRE_H
#include "StatBooster.h"
class FireHazard : public StatBooster
{
private:
    /* data */
public:
    FireHazard();
    ~FireHazard();
    virtual void amplifications();
    virtual int getLeftOverCapacity();
    virtual void harvest();
};


#endif