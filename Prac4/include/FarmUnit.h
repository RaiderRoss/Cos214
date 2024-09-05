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
	virtual void buyTruck();
	virtual void sellTruck();
	virtual void callTruck();
	virtual void startEngine();
	virtual void assignTrucker(TruckerMan* truck);
	virtual void removeTruck();
};

#endif	//  FARMUNIT_H