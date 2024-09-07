#ifndef  CROPFIELD_H
#define  CROPFIELD_H

#include <string>
#include "FarmUnit.h"
#include "Soil.h"
class  CropField : public FarmUnit {
public:
    CropField (std::string crop, int capacity, Soil* soil);
    ~CropField ();
    void plantCrops(int planted);
    std::string getCropType();
    std::string getSoilState();
private:
    std::string cropType;
    Soil* soil;
    int capacity;
    int planted;
    virtual void buyTruck();
	virtual void sellTruck();
	virtual void callTruck(TruckerMan* truck);
	virtual void startEngine();
	virtual void assignTrucker(TruckerMan* truck);
	virtual void removeTruck(TruckerMan* truck);
};

#endif //  CROPFIELD_H
