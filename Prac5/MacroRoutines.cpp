#include "MacroRoutines.h"

MacroRoutines::MacroRoutines(std::string name) {
    commands = std::vector<std::unique_ptr<Command>>();
    this->name = name;
}

MacroRoutines::~MacroRoutines() {
    commands.clear();
}

void MacroRoutines::addProcedure(Command* command) {
    commands.push_back(std::unique_ptr<Command>(command));
}

void MacroRoutines::execute() {
    for (std::unique_ptr<Command>& command : commands) {
        command->execute();
    }
}

void MacroRoutines::removeProcedure(Command* command) {
    for (auto it = commands.begin(); it != commands.end(); ++it) {
        if (it->get() == command) {
            commands.erase(it);
            break;
        }
    }
}

std::string MacroRoutines::getName() {
    return name;
}
