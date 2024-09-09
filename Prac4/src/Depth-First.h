#ifndef DEPTH_FIRST_H
#define DEPTH_FIRST_H
#include <stack>

#include "Iterator.h"
class DepthFirst : public Iterator {
   private:
	std::stack<FarmUnit*> it;

   public:
	DepthFirst(FarmUnit* unit);
	~DepthFirst();
	virtual FarmUnit* next();
	virtual FarmUnit* firstFarm();
	virtual FarmUnit* currentFarm();
	virtual void search(FarmUnit* unit);
};

#endif	// DEPTH_FIRST_H