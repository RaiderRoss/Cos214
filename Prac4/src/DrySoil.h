#ifndef DRYSOIL_H
#define DRYSOIL_H
#include <string>

#include "FruitfulSoil.h"
#include "Soil.h"
class DrySoil : public Soil {
   public:
	DrySoil();
	virtual ~DrySoil();
	virtual void rain();
	virtual void harvestCrops(int harvested, FarmUnit* storage);
	virtual std::string getName();
};

#endif	//  DRYSOIL_H
