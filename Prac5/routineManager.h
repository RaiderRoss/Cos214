#ifndef ROUTINEMANAGER_H
#define ROUTINEMANAGER_H
#include <iostream>
#include <vector>
#include <memory>
#include "MacroRoutines.h"
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