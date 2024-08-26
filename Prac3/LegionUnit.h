#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <iostream>

#include "UnitComponent.h"
class LegionUnit : public UnitComponent {
   public:
	LegionUnit();
	virtual ~LegionUnit();
	virtual void move() = 0;
	virtual void attack() = 0;
	void add(LegionUnit* unit) {
	}

	void remove(LegionUnit* unit) {

	}
	void clear(){
		
	}
};

#endif	// LEGIONUNIT_H
