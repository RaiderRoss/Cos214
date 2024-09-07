#ifndef Delivery_H
#define Delivery_H
#include "TruckerMan.h"
#include "barn.h"
class DeliveryTruck : public TruckerMan {
   private:
	/* data */
   public:
	DeliveryTruck(/* args */);
	virtual ~DeliveryTruck();
	virtual void update(FarmUnit* barn);
};

#endif