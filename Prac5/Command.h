#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>`
#include <string>
#include "Group.h"
/** 
 * @file Command.h
 * @class Command
 * @brief Abstract base class for command pattern.
 *
 * The Command class defines an interface for executing an operation.
 * It holds a reference to a Group object, which represents the receiver of the command.
 *
 * @protected
 * Group* device - Pointer to the receiver object.
 *
 * @public
 * Command(Group* group) - Constructor that initializes the command with a receiver.
 * ~Command() - Destructor.
 * virtual void execute() = 0 - Pure virtual function to execute the command.
 */
class Command {
   protected:
	Group* device;

   public:
	Command(Group* group);
	~Command();
	virtual void execute() = 0;
};

#endif