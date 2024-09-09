#ifndef DEMO_H
#define DEMO_H
#include "StatBooster.h"
#include "Barn.h"
class DemolishEcosystem : public StatBooster
{
public:
    DemolishEcosystem(FarmUnit * field);
    ~DemolishEcosystem();
    virtual void amplifications();
    virtual void construct();
};


#endif