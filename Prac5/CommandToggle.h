#ifndef COMMANDTOGGLE_H
#define COMMANDTOGGLE_H
#include "Command.h"
/**
 * @file CommandToggle.h
 * @class CommandToggle
 * @brief A command class to toggle the state of a group of devices.
 * 
 * This class inherits from the Command class and provides an implementation
 * for toggling the state of a group of devices.
 * 
 * @fn CommandToggle::CommandToggle(Group* dev)
 * @brief Constructor that initializes the CommandToggle with a group of devices.
 * @param dev Pointer to the group of devices to be toggled.
 * 
 * @fn CommandToggle::~CommandToggle()
 * @brief Destructor for the CommandToggle class.
 * 
 * @fn void CommandToggle::execute()
 * @brief Executes the toggle command on the group of devices.
 */
class CommandToggle : public Command
{
public:
    CommandToggle(Group* dev);
    ~CommandToggle();
    virtual void execute();
};
#endif