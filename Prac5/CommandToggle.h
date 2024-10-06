#ifndef COMMANDTOGGLE_H
#define COMMANDTOGGLE_H
#include "Command.h"
class CommandToggle : public Command
{
public:
    CommandToggle(device* dev);
    ~CommandToggle();
    virtual void execute();
};
#endif