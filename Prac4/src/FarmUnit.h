#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "TruckerMan.h"
class FarmUnit {
   protected:
	int capacity;
	std::vector<TruckerMan*> truckWatch;

   public:
	FarmUnit(int capacity);
	virtual ~FarmUnit();
	virtual std::string getCropType();
	virtual bool add(FarmUnit* add);
	virtual bool remove(FarmUnit* remove);
	virtual void storeCrops(int store) = 0;
	virtual int getTotalCapacity() = 0;
	virtual void buyTruck() = 0;
	virtual void update() = 0;
	virtual void sellTruck() = 0;
	virtual void callTruck() = 0;
	virtual void startEngine() = 0;
	virtual void assignTrucker(TruckerMan* truck) = 0;
	virtual void removeTruck(TruckerMan* truck) = 0;
	virtual void harvestField(FarmUnit* storage) = 0;
	virtual void print() = 0;
	virtual void plantCrops(int planted) = 0;
	virtual std::vector<FarmUnit*> childern();
};

#endif	//  FARMUNIT_H