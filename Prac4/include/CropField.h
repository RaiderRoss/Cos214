#ifndef  CROPFIELD_H
#define  CROPFIELD_H

#include <string>
#include "FarmUnit.h"
#include "Soil.h"
class  CropField : public FarmUnit {
public:
    CropField (std::string crop, int capacity, Soil* soil);
    ~CropField ();
    int getTotalCapacity();
    void plantCrops(int planted);
    std::string getCropType();
    std::string getSoilState();
private:
    std::string cropType;
    Soil* soil;
    int capacity;
    int planted;
};

#endif //  CROPFIELD_H
