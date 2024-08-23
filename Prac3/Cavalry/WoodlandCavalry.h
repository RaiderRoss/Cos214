//
// Created by 2MGOU on 2024/08/20.
//

#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H
#include "Cavalry.h"

class WoodlandCavalry : public Cavalry {
   public:
	virtual void move();
	virtual void attack();
	WoodlandCavalry();
};

#endif	// INFANTRY_H
