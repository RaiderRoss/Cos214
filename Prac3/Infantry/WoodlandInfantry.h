//
// Created by 2MGOU on 2024/08/20.
//

#ifndef WOODLAND_INFANTRY_H
#define WOODLAND_INFANTRY_H
#include "Infantry.h"

class WoodlandInfatry : public Infantry {
   public:
	virtual void move();
	virtual void attack();
	WoodlandInfatry();
};

#endif	// INFANTRY_H
