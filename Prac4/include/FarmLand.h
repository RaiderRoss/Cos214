#ifndef  FARMLAND_H
#define  FARMLAND_H
#include <vector>
#include "FarmUnit.h"


class  FarmLand : public FarmUnit {
public:
    FarmLand ();
    ~FarmLand ();
    bool add();
    bool remove();

private:
    int capacity;
    std::vector<FarmUnit*> farmUnit;
};

#endif //  FARMLAND_H
