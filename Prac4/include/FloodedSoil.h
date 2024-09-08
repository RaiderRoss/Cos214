#ifndef  FLOODEDSOIL_H
#define  FLOODEDSOIL_H

#include <string>
#include "Soil.h"
#include "FruitfulSoil.h"
class  FloodedSoil : public Soil {
public:
    FloodedSoil ();
    virtual ~FloodedSoil ();
    void rain(Soil* soil);
    void harvestCrops();
    std::string getName();
private:
    int productivityMultiplier;
};

#endif //  FLOODEDSOIL_H
