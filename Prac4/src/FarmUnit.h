#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
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
	virtual void storeCrops(int store);
	virtual int getTotalCapacity();
	virtual void buyTruck();
	virtual void update();
	virtual void sellTruck();
	virtual void callTruck();
	virtual void startEngine();
	virtual void assignTrucker(TruckerMan* truck);
	virtual void removeTruck(TruckerMan* truck);
	virtual void harvestField(FarmUnit* storage);
	virtual void print() = 0;
	virtual void plantCrops(int planted) = 0;
	virtual void addBarn(int capacity);
};

#endif	//  FARMUNIT_H