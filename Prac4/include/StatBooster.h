#ifndef STAT_H
#define STAT_H
#include "FarmUnit.h"
class StatBooster : public FarmUnit
{
private:
FarmUnit* unit;
public:
virtual void amplifications() = 0;
StatBooster();
virtual ~StatBooster();
virtual void buyTruck();
virtual void sellTruck();
virtual void callTruck();
virtual void startEngine();
virtual void assignTrucker();
virtual std::string getCropType();
virtual int getTotalCapacity();
};




#endif