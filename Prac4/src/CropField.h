#ifndef CROPFIELD_H
#define CROPFIELD_H

#include <string>

#include "Barn.h"
#include "DemolishEcosystem.h"
#include "FarmUnit.h"
#include "FertilizerTruck.h"
#include "Soil.h"
class CropField : public FarmUnit {
   public:
	CropField(std::string crop, int capacity, Soil* soil);
	~CropField();
	void plantCrops(int planted);
	std::string getCropType();
	std::string getSoilState();
	virtual void harvestField(FarmUnit* storage);
	virtual void harvestField();
	virtual void buyTruck();
	virtual void sellTruck();
	virtual void callTruck();
	virtual void startEngine();
	virtual void update();
	virtual void assignTrucker(TruckerMan* truck);
	virtual void removeTruck(TruckerMan* truck);
	virtual void storeCrops(int store);
	virtual int getTotalCapacity();
	virtual void print();
   private:
	std::string cropType;
	Soil* soil;
	int capacity;
	int planted;
};

#endif	//  CROPFIELD_H
