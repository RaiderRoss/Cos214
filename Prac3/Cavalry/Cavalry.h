//
// Created by 2MGOU on 2024/08/20.
//

#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"

class Cavalry : public LegionUnit {
public:
	virtual void move() = 0;
	virtual void attack() = 0;
    Cavalry();
};



#endif //CAVALRY_H
