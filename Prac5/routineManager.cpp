#include "routineManager.h"

RoutineManager::RoutineManager() {

}

RoutineManager::~RoutineManager() {
}

void RoutineManager::addRoutine(MacroRoutines* routine) {
    routines.push_back(std::unique_ptr<MacroRoutines>(routine));
}

void RoutineManager::removeRoutine(MacroRoutines* routine) {
    for (auto it = routines.begin(); it != routines.end(); ++it) {
        if (it->get() == routine) {
            routines.erase(it);
            break;
        }
    }
}

void RoutineManager::executeRoutine(std::string name) {
    for (std::unique_ptr<MacroRoutines>& routine : routines) {
        if (routine->getName() == name) {
            routine->execute();
            return;
        }
    }
    std::cout << "Routine not found" << std::endl;
}

void RoutineManager::listRoutines() {
    for (std::unique_ptr<MacroRoutines>& routine : routines) {
        std::cout << colours::LIGHT_GREEN << "↳ " << routine->getName() << colours::RESET << std::endl;
    }
}
