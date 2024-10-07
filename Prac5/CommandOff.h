#ifndef COMMANDOFF_H
#define COMMANDOFF_H
#include "Command.h"
/**
 * @class CommandOff
 * @brief A concrete command class to turn off a group of devices.
 *
 * This class inherits from the Command base class and provides the implementation
 * for turning off a group of devices.
 *
 * @details
 * The CommandOff class encapsulates the action of turning off a group of devices.
 * It overrides the execute() method to perform the specific action.
 *
 * @note
 * Ensure that the Group pointer passed to the constructor is valid and properly
 * managed to avoid memory leaks or undefined behavior.
 *
 * @see Command
 */
class CommandOff : public Command
{
public:
    CommandOff(Group* dev);
    ~CommandOff();
    virtual void execute();
};
#endif