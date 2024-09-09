#ifndef BREADTH_FIRST_H
#define BREADTH_FIRST_H
#include <queue>

#include "Iterator.h"
class FarmLand;
class BreadthFirst : public Iterator {
   private:
	std::queue<FarmUnit*> it;

   public:
	BreadthFirst(FarmUnit* land);
	~BreadthFirst();
	virtual FarmUnit* next();
	virtual void search(FarmUnit* unit);
	virtual FarmUnit* firstFarm();
	virtual FarmUnit* currentFarm();
	bool contains(FarmUnit* unit);
};

#endif	// BREADTH_FIRST_H