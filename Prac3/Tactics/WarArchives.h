//
// Created by 2MGOU on 2024/08/20.
//

#ifndef WARARCHIVES_H
#define WARARCHIVES_H


#include "TacticalMemento.h"
#include <string>
#include <map>
class WarArchives {
public:
void addTacticalMemento(TacticalMemento* memento, std::string label);
void removeTatcticalMemento(std::string label);
TacticalMemento* getMemento(std::string label);
private:
std::map <std::string, TacticalMemento*>  mementolist;
};



#endif //WARARCHIVES_H
