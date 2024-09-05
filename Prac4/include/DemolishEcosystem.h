#ifndef DEMO_H
#define DEMO_H
#include "StatBooster.h"
class DemolishEcosystem : public StatBooster
{
public:
    DemolishEcosystem();
    ~DemolishEcosystem();
    virtual void amplifications();
    virtual void construct();
};


#endif