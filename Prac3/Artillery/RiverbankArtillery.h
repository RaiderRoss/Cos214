//
// Created by 2MGOU on 2024/08/20.
//

#ifndef RIVERBANK_ARTILLERY_H
#define RIVERBANK_ARTILLERY_H
#include "LegionUnit.h"
#include "Artillery.h"
#include <iostream>
class RiverbankArtillery : public Artillery {
	public:
	virtual void move();
	virtual void attack();
	RiverbankArtillery();
};

#endif	// INFANTRY_H
