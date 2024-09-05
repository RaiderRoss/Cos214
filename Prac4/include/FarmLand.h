#ifndef  FARMLAND_H
#define  FARMLAND_H
#include <vector>
#include "FarmUnit.h"
#include <algorithm>

class  FarmLand : public FarmUnit {
public:
    FarmLand (int capacity);
    ~FarmLand ();
    bool add(FarmUnit* remove) override; 
    bool remove(FarmUnit* remove) override;
private:
    int capacity;
    std::vector<FarmUnit*> farmUnit;
};

#endif //  FARMLAND_H
