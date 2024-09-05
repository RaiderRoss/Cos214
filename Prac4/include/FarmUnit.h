#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <string>
class FarmUnit {
   protected:
	int capacity;

   public:
	FarmUnit();
	~FarmUnit();

	virtual bool add(FarmUnit* add);
	virtual bool remove(FarmUnit* remove);
	virtual void storeCrops(int store);
	virtual int getTotalCapacity();
	virtual void buyTruck();
	virtual void sellTruck();
	virtual void callTruck();
	virtual void startEngine();
	virtual void assignTrucker();
};

#endif	//  FARMUNIT_H