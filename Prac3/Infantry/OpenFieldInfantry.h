//
// Created by 2MGOU on 2024/08/20.
//

#ifndef OPENFIELD_INFANTRY_H
#define OPENFIELD_INFANTRY_H
#include "Infantry.h"

#include <iostream>
class OpenfieldInfantry : public Infantry {
 public:
	virtual void move();
	virtual void attack();
	OpenfieldInfantry();
};



#endif //INFANTRY_H
