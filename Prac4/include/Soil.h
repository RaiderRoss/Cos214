#ifndef  SOIL_H
#define  SOIL_H
#include <string>

class  Soil  {
public:
    Soil();
    ~Soil();
protected:
    virtual void rain();
    virtual void harvestCrops();
    virtual std::string getName();
};

#endif //  SOIL_H
