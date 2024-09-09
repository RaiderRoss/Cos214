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
    void rain() override;
    void harvestCrops(int harvested, FarmUnit* storage) override;
    std::string getName() override;
};

#endif //  FRUITFULSOIL_H
