#ifndef  FRUITFULSOIL_H
#define  FRUITFULSOIL_H
#include <string>
#include "Soil.h"
#include "FloodedSoil.h"
#include "DrySoil.h"
class  FruitfulSoil : public Soil {
public:
    FruitfulSoil ();
    ~FruitfulSoil ();
virtual    void rain() ;
   virtual void harvestCrops(int harvested, FarmUnit* storage) ;
  virtual  std::string getName() ;
};

#endif //  FRUITFULSOIL_H
