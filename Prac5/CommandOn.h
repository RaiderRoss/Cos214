#ifndef COMMANDON_H
#define COMMANDON_H
#include "Command.h"

class CommandOn : public Command
{
public:
    CommandOn();
    ~CommandOn();
    void execute(device* dev);
};
#endif 