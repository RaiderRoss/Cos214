#ifndef  FRUITFULSOIL_H
#define  FRUITFULSOIL_H
#include <string>
#include "Soil.h"
class  FruitfulSoil : public Soil {
public:
    FruitfulSoil ();
    ~FruitfulSoil ();
    void rain();
    void harvestCrops();
    std::string getName();
};

#endif //  FRUITFULSOIL_H
