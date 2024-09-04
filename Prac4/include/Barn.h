#ifndef  BARN_H
#define  BARN_H
#include <string>
#include "FarmUnit.h"
class  Barn  : public FarmUnit {
public:
    Barn(std::string crop, int amountStored, int capacity);
    ~ Barn();
    int getTotalCapacity();
    std::string getCropType();
    int getAmountStored();
    void storeCrops(int store);
private:
    std::string cropType;
    int amountStored;
    int capacity;
};

#endif //  BARN_H
