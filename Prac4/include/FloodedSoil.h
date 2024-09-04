#ifndef  FLOODEDSOIL_H
#define  FLOODEDSOIL_H

#include <string>
#include "Soil.h"
#include "FruitfulSoil.h"
class  FloodedSoil : public Soil {
public:
    FloodedSoil ();
    ~FloodedSoil ();
    void rain(Soil* soil);
    void harvestCrops(Soil* soil);
    std::string getName();
private:
    int productivityMultiplier;
};

#endif //  FLOODEDSOIL_H
