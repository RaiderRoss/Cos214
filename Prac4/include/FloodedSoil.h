#ifndef  FLOODEDSOIL_H
#define  FLOODEDSOIL_H

#include <string>

class  FloodedSoil  {
public:
    FloodedSoil ();
    ~FloodedSoil ();
    void rain();
    void harvestCrops();
    std::string getName();
};

#endif //  FLOODEDSOIL_H
