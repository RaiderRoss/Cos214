#ifndef COMMANDOFF_H
#define COMMANDOFF_H
#include "Command.h"
class CommandOff : public Command
{
public:
    CommandOff();
    ~CommandOff();
    void execute(device* dev);
};
#endif