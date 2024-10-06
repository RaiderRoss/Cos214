#ifndef COMMANDOFF_H
#define COMMANDOFF_H
#include "Command.h"
class CommandOff : public Command
{
public:
    CommandOff(Group* dev);
    ~CommandOff();
    virtual void execute();
};
#endif