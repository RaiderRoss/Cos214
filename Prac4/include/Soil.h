#ifndef  SOIL_H
#define  SOIL_H
#include <string>
#include "FarmUnit.h"
class  Soil  {
public:
    Soil();
    virtual ~Soil();
    virtual void rain(Soil* soil);
    virtual void harvestCrops(Soil* soil);
    virtual std::string getName();
    void setState(Soil* newState);
protected:
    Soil* currentSoilState;
    int productivityMultiplier;
};

#endif //  SOIL_H
