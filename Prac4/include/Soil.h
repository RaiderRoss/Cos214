#ifndef  SOIL_H
#define  SOIL_H
#include <string>
#include "FloodedSoil.h"
#include "FarmUnit.h"
class  Soil  {
public:
    Soil();
    ~Soil();
    virtual void rain(Soil* soil);
    virtual void harvestCrops(Soil* soil);
    virtual std::string getName();
protected:
    int productivityMultiplier;
};

#endif //  SOIL_H
