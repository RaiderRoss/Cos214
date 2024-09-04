#ifndef  FRUITFULSOIL_H
#define  FRUITFULSOIL_H
#include <string>
#include "Soil.h"
#include "FloodedSoil.h"
#include "DrySoil.h"
class  FruitfulSoil : public Soil {
public:
    FruitfulSoil ();
    ~FruitfulSoil ();
    void rain(Soil* soil);
    void harvestCrops(Soil* soil);
    std::string getName();
};

#endif //  FRUITFULSOIL_H
