#ifndef MACROROUTINES_H
#define MACROROUTINES_H
#include <iostream>
#include "CommandToggle.h"
#include "CommandOn.h"
#include "CommandOff.h"
#include <vector>
#include <memory>
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