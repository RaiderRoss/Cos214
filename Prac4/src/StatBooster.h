#ifndef STAT_H
#define STAT_H
#include "FarmUnit.h"
class StatBooster : public FarmUnit
{
protected:
FarmUnit* unit;
public:
virtual void amplifications() = 0;
StatBooster(FarmUnit * unit);
virtual ~StatBooster();
virtual void buyTruck();
virtual void sellTruck();
virtual void callTruck();
virtual void update();
virtual void storeCrops(int store);
virtual void startEngine();
virtual void assignTrucker(TruckerMan * trucker);
virtual void removeTruck(TruckerMan* truck);
virtual std::string getCropType();
virtual int getTotalCapacity();
virtual void harvestField(FarmUnit* storage);
virtual void plantCrops(int planted);
virtual void print();
};




#endif