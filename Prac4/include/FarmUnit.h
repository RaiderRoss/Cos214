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
	FarmUnit();
	virtual ~FarmUnit();

	virtual bool add(FarmUnit* add);
	virtual bool remove(FarmUnit* remove);
	virtual void storeCrops(int store) = 0;
	virtual int getTotalCapacity();
	virtual void buyTruck() = 0;
	virtual void update() = 0;
	virtual void sellTruck() = 0;
	virtual void callTruck() = 0;
	virtual void startEngine() = 0;
	virtual void assignTrucker(TruckerMan* truck) = 0;
	virtual void removeTruck(TruckerMan* truck) = 0;
};

#endif	//  FARMUNIT_H