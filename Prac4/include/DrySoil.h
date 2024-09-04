#ifndef  DRYSOIL_H
#define  DRYSOIL_H

#include <string>
#include "Soil.h"
class  DrySoil : public Soil {
public:
    DrySoil ();
    ~DrySoil ();
    void rain(Soil* soil);
    void harvestCrops(Soil* soil);
    std::string getName();
};

#endif //  DRYSOIL_H
