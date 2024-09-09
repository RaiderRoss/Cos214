#ifndef BARN_H
#define BARN_H
#include <string>

#include "DeliveryTruck.h"
#include "FarmUnit.h"
#include <iostream>
class Barn : public FarmUnit {
   public:
	Barn(std::string crop, int amountStored, int capacity);
	virtual ~Barn();
	std::string getCropType();
	int getAmountStored();
	virtual void storeCrops(int store);
	virtual void update();
	virtual void buyTruck();
	virtual void sellTruck();
	virtual void callTruck();
	virtual void startEngine();
	virtual void assignTrucker(TruckerMan* truck);
	virtual void removeTruck(TruckerMan* truck);
	virtual void harvestField(FarmUnit* storage);
	virtual void print();
	virtual void plantCrops(int planted);
   private:
	std::string cropType;
	int amountStored;
	int capacity;
};

#endif	//  BARN_H
