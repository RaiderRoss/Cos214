#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>

#include "Group.h"
class Command {
   protected:
	Group* device;

   public:
	Command(Group* group);
	~Command();
	virtual void execute() = 0;
};

#endif