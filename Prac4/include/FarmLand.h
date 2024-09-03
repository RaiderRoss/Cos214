#ifndef  FARMLAND_H
#define  FARMLAND_H
#include <vector>
#include "FarmUnit.h"


class  FarmLand  {
public:
     FarmLand ();
    ~ FarmLand ();
private:
    int capacity;
    std::vector<FarmUnit*> farmUnits;
    bool add();
    bool remove();
};

#endif //  FARMLAND_H
