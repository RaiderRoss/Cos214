//
// Created by 2MGOU on 2024/08/20.
//

#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H
#include "Cavalry.h"


class RiverbankCavalry : public Cavalry {
public:
	virtual void move();
	virtual void attack();
	RiverbankCavalry();
};



#endif //INFANTRY_H
