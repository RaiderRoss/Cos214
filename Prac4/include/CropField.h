#ifndef  CROPFIELD_H
#define  CROPFIELD_H

#include <string>
#include "FarmUnit.h"
#include "Soil.h"
class  CropField : public FarmUnit {
public:
     CropField ();
    ~ CropField ();
private:
    std::string cropType;
    Soil soil;
};

#endif //  CROPFIELD_H
