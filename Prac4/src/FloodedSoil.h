#ifndef  FLOODEDSOIL_H
#define  FLOODEDSOIL_H

#include <string>
#include "Soil.h"
#include "FruitfulSoil.h"
class  FloodedSoil : public Soil {
public:
    FloodedSoil ();
    virtual ~FloodedSoil ();
    void rain() override;
    void harvestCrops(int harvested, FarmUnit* storage) override;
    std::string getName() override;
private:
    int productivityMultiplier;
};

#endif //  FLOODEDSOIL_H
