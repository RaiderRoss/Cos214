#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <algorithm>
#include <string>
#include <vector>

#include "TruckerMan.h"
class FarmUnit {
   private:
	std::vector<TruckerMan*> truckWatch;

   protected:
	int capacity;

   public:
	FarmUnit();
	virtual ~FarmUnit();

	virtual bool add(FarmUnit* add);
	virtual bool remove(FarmUnit* remove);
	virtual void storeCrops(int store);
	virtual int getTotalCapacity();
	virtual void buyTruck() = 0;
	virtual void sellTruck() = 0;
	virtual void callTruck() = 0;
	virtual void startEngine() = 0;
	virtual void assignTrucker(TruckerMan* truck) = 0;
	virtual void removeTruck() = 0;
};

#endif	//  FARMUNIT_H