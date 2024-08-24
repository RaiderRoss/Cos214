//
// Created by 2MGOU on 2024/08/20.
//

#ifndef OPENFIELD_CAVALRY_H
#define OPENFIELD_CAVALRY_H
#include "Cavalry.h"

#include <iostream>
class OpenfieldCavalry : public Cavalry {
public:
	virtual void move();
	virtual void attack();
	OpenfieldCavalry();
};



#endif //INFANTRY_H
