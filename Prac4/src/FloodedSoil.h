#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include <string>

#include "FruitfulSoil.h"
#include "Soil.h"
class FloodedSoil : public Soil {
   public:
	FloodedSoil();
	virtual ~FloodedSoil();
	virtual void rain();
	virtual void harvestCrops(int harvested, FarmUnit* storage);
	virtual std::string getName();

   private:
	int productivityMultiplier;
};

#endif	//  FLOODEDSOIL_H
