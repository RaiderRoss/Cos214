//
// Created by 2MGOU on 2024/08/20.
//

#ifndef RIVERBANK_INFANTRY_H
#define RIVERBANK_INFANTRY_H
#include "Infantry.h"


class RiverbankInfantry : public Infantry {
 public:
	virtual void move();
	virtual void attack();
	RiverbankInfantry();
};



#endif //INFANTRY_H
