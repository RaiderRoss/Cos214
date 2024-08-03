#include "Starter.h"

Starter::Starter(int maxNumberOfItems) : Course("Starters", maxNumberOfItems) {
}

void Starter::recommendBeverage(){
    std::cout << "Sparkling Water" << std::endl;
}
