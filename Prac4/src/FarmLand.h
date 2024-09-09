#ifndef FARMLAND_H
#define FARMLAND_H

#include <algorithm>
#include <vector>

#include "FarmUnit.h"

class FarmLand : public FarmUnit {
   public:
	FarmLand(int capacity);
	~FarmLand();
	virtual bool add(FarmUnit* remove);
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
	virtual std::string getCropType();
	virtual void harvestField(FarmUnit* storage);
	virtual void print();
	virtual void plantCrops(int planted);
   private:
	std::vector<FarmUnit*> farmUnit;
};

#endif	// FARMLAND_HX