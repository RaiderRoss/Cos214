//
// Created by 2MGOU on 2024/08/20.
//

#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"

class Artillery : public LegionUnit {
public:
	virtual void move() = 0;
	virtual void attack() = 0;
    Artillery();
};



#endif //ARTILLERY_H
