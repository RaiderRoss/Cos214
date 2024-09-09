#ifndef FARMLAND_H
#define FARMLAND_H

#include <algorithm>
#include <vector>

#include "FarmUnit.h"
#include "Breadth-First.h"
#include "Depth-First.h"
#include "Iterator.h"
class FarmLand : public FarmUnit {
   public:
	FarmLand(int capacity, std::string name);
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
	virtual Iterator* createIteratorDfs();
	virtual Iterator* createIteratorBfs();
	std::vector<FarmUnit*> childern();
	std::vector<FarmUnit*> farmUnit;
	private:
	std::string name;
};

#endif	// FARMLAND_H