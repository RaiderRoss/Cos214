#ifndef  SOIL_H
#define  SOIL_H
#include <string>
#include "FarmUnit.h"
#include "Barn.h"
class  Soil  {
public:
    Soil();
    virtual ~Soil();
    virtual void rain() = 0;
    virtual void harvestCrops(int harvrested, FarmUnit* storage) = 0;
    virtual std::string getName() = 0;
    virtual void setState(Soil* newState);
protected:
    Soil* currentSoilState;
    int productivityMultiplier;
};

#endif //  SOIL_H
