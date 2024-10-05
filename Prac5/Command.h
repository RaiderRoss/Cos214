#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>
#include "device.h"
class Command
{
 
public:
    Command();
    ~Command();
    virtual void execute(device* dev) = 0;
};


#endif