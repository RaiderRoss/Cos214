#ifndef FIRE_H
#define FIRE_H
#include "StatBooster.h"
class FarmUnit;
class DemolishEcosystem : public StatBooster
{
private:
    /* data */
public:
    DemolishEcosystem(FarmUnit * unit);
    ~DemolishEcosystem();
    virtual void amplifications();
    virtual void harvest(FarmUnit * storage);
    void increaseProducion();
};


#endif