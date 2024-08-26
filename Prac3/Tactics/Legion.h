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
	void add(UnitComponent* unit);
	void remove(UnitComponent* unit);
   private:
   std::list<UnitComponent*> components;
};

#endif	// LEGION_H