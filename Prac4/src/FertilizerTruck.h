#ifndef Fertilizer_H
#define Fertilizer_H
#include "FarmUnit.h"
#include "TruckerMan.h"
class FertilizerTruck : public TruckerMan {
   private:
	/* data */
   public:
	FertilizerTruck(/* args */);
	~FertilizerTruck();
	virtual void update(FarmUnit* field);
};

#endif