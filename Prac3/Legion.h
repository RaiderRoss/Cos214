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
	virtual void add(UnitComponent* unit);
	virtual void remove(UnitComponent* unit);
	void clear();
   private:
   std::list<UnitComponent*> * components;
};

#endif	// LEGION_H