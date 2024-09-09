#ifndef  DRYSOIL_H
#define  DRYSOIL_H
#include <string>
#include "Soil.h"
#include "FruitfulSoil.h"
class  DrySoil : public Soil {
public:
    DrySoil ();
    virtual ~DrySoil ();
    void rain() override;
    void harvestCrops(int harvested, FarmUnit* storage) override;
    std::string getName() override;
};

#endif //  DRYSOIL_H
