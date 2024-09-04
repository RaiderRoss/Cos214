#ifndef  CROPFIELD_H
#define  CROPFIELD_H

#include <string>
#include "FarmUnit.h"
#include "Soil.h"
class  CropField : public FarmUnit {
public:
    CropField (std::string crop, int capacity, Soil soil);
    ~CropField ();
    int getTotalCapacity();
    void plantCrops(int planted);
private:
    std::string cropType;
    Soil soil;
};

#endif //  CROPFIELD_H
