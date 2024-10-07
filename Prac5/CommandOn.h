#ifndef COMMANDON_H
#define COMMANDON_H
#include "Command.h"

/** 
 * @file CommandOn.h
 * @class CommandOn
 * @brief A concrete command class to turn on a group of devices.
 *
 * This class inherits from the Command base class and implements the execute method
 * to turn on a group of devices.
 */

/**
 * @fn CommandOn::CommandOn(Group* dev)
 * @brief Constructor for CommandOn.
 * @param dev Pointer to the group of devices to be controlled.
 */

/**
 * @fn CommandOn::~CommandOn()
 * @brief Destructor for CommandOn.
 */

/**
 * @fn void CommandOn::execute()
 * @brief Executes the command to turn on the group of devices.
 */
class CommandOn : public Command
{
public:
    CommandOn(Group* dev);
    ~CommandOn();
    virtual void execute();
};
#endif 