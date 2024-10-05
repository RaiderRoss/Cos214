#ifndef COMMANDTOGGLE_H
#define COMMANDTOGGLE_H
#include "Command.h"
class CommandToggle : public Command
{
public:
    CommandToggle();
    ~CommandToggle();
    void execute(device* dev);
};
#endif