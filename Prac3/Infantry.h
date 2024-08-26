//
// Created by 2MGOU on 2024/08/20.
//

#ifndef INFANTRY_H
#define INFANTRY_H
#include "LegionUnit.h"

class Infantry : public LegionUnit {
    public:
	virtual void move() = 0;
	virtual void attack() = 0;
    Infantry();
};

#endif	// INFANTRY_H
