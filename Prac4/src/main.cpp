#include <iostream>
#include "FarmLand.h"
#include "FarmUnit.h"
#include "CropField.h"
#include "DrySoil.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    {
        std::string type = "Carrots";
        Soil * soil = new DrySoil();
        FarmUnit * crop = new CropField(type, 4 , soil);
        
    }

    return 0;
}
