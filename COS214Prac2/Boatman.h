//
// Created by 2MGOU on 2024/07/30.
//

#ifndef BOATMAN_H
#define BOATMAN_H
#include <string>

#include "Soldiers.h"


class Boatman : public Soldiers {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldifer;
    int amountOfSoldiersPerUnit;
    std::string unitName;
};



#endif //BOATMAN_H
