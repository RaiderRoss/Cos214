#ifndef COMMANDON_H
#define COMMANDON_H
#include "Command.h"

class CommandOn : public Command
{
public:
    CommandOn(device* dev);
    ~CommandOn();
    virtual void execute();
};
#endif 