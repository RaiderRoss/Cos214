#ifndef STAT_H
#define STAT_H
#include "FarmUnit.h"
class StatBooster
{
private:
FarmUnit* unit;
public:
virtual void amplifications() = 0;
StatBooster();
virtual ~StatBooster();
};




#endif