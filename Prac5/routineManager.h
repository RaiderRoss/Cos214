#ifndef ROUTINEMANAGER_H
#define ROUTINEMANAGER_H
#include <iostream>
#include <vector>
#include <memory>
#include "MacroRoutines.h"
/**
 * @file routineManager.h
 */

/**
 * @class RoutineManager
 * @brief Class to manage and execute macro routines.
 */

/**
 * @fn RoutineManager::RoutineManager()
 * @brief Constructor for RoutineManager.
 */

/**
 * @fn RoutineManager::~RoutineManager()
 * @brief Destructor for RoutineManager.
 */

/**
 * @fn void RoutineManager::addRoutine(MacroRoutines* routine)
 * @brief Adds a macro routine to the manager.
 * @param routine Pointer to the macro routine to be added.
 */

/**
 * @fn void RoutineManager::removeRoutine(MacroRoutines* routine)
 * @brief Removes a macro routine from the manager.
 * @param routine Pointer to the macro routine to be removed.
 */

/**
 * @fn void RoutineManager::executeRoutine(std::string name)
 * @brief Executes a macro routine by name.
 * @param name Name of the macro routine to be executed.
 */

/**
 * @fn void RoutineManager::listRoutines()
 * @brief Lists all the macro routines managed by the manager.
 */
class RoutineManager {
    public:
        RoutineManager();
        ~RoutineManager();
        void addRoutine(MacroRoutines* routine);
        void removeRoutine(MacroRoutines* routine);
        void executeRoutine(std::string name);
        void listRoutines();
    private:
        std::vector<std::unique_ptr<MacroRoutines>> routines;
};
#endif