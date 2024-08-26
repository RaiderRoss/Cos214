#ifndef LEGION_H
#define LEGION_H
#include <list>

#include "UnitComponent.h"
#include "LegionUnit.h"
class Legion : public UnitComponent {
   public:
	Legion();
	~Legion();
	virtual void move();
	virtual void attack();
	virtual void add(LegionUnit* unit);
	virtual void remove(LegionUnit* unit);
	void clear();
   private:
   std::list<LegionUnit*> * components;
};

#endif	// LEGION_H