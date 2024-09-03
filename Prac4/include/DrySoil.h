#ifndef  DRYSOIL_H
#define  DRYSOIL_H

#include <string>

class  DrySoil  {
public:
    DrySoil ();
    ~DrySoil ();
    void rain();
    void harvestCrops();
    std::string getName();
};

#endif //  DRYSOIL_H
