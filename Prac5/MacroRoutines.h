#ifndef MACROROUTINES_H
#define MACROROUTINES_H
#include <iostream>
#include "CommandToggle.h"
#include "CommandOn.h"
#include "CommandOff.h"
#include <vector>
#include <memory>
/** 
 * @file MacroRoutines.h
 * @class MacroRoutines
 * @brief A class to manage and execute a series of commands as a macro routine.
 * 
 * This class allows adding, removing, and executing commands in a sequence.
 */

/**
 * @fn MacroRoutines::MacroRoutines(std::string name)
 * @brief Constructs a MacroRoutines object with a given name.
 * @param name The name of the macro routine.
 */

/**
 * @fn MacroRoutines::~MacroRoutines()
 * @brief Destructor for the MacroRoutines class.
 * 
 * Cleans up all allocated resources.
 */

/**
 * @fn void MacroRoutines::addProcedure(Command* command)
 * @brief Adds a command to the macro routine.
 * @param command A pointer to the command to be added.
 */

/**
 * @fn void MacroRoutines::execute()
 * @brief Executes all commands in the macro routine in the order they were added.
 */

/**
 * @fn void MacroRoutines::removeProcedure(Command* command)
 * @brief Removes a command from the macro routine.
 * @param command A pointer to the command to be removed.
 */

/**
 * @fn std::string MacroRoutines::getName()
 * @brief Gets the name of the macro routine.
 * @return The name of the macro routine.
 */
class MacroRoutines {
   private:
    std::vector<std::unique_ptr<Command>> commands;
    std::string name;
   public:
    MacroRoutines(std::string name);
    ~MacroRoutines();
    void addProcedure(Command* command);
    void execute();
    void removeProcedure(Command* command);
    std::string getName();
};

#endif