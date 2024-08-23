//
// Created by 2MGOU on 2024/08/20.
//

#ifndef WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H
#include "Artillery.h"

class WoodlandArtillery : public Artillery {
	public:
	virtual void move();
	virtual void attack();
	WoodlandArtillery();
};

#endif	// INFANTRY_H
