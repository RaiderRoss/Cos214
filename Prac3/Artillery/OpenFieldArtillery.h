//
// Created by 2MGOU on 2024/08/20.
//

#ifndef OPEN_FIELD_ARTILLERY_H
#define OPEN_FIELD_ARTILLERY_H
#include "Artillery.h"
#include <iostream>
class OpenFieldArtillery : public Artillery {
   public:
	virtual void move();
	virtual void attack();
	OpenFieldArtillery();
};

#endif	// INFANTRY_H
