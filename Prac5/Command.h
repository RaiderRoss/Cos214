#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>

#include "device.h"
class Command {
   protected:
	device* dev;

   public:
	Command(device* dev);
	~Command();
	virtual void execute() = 0;
};

#endif