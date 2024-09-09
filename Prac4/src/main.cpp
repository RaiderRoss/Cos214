#include <iostream>

#include "CropField.h"
#include "DrySoil.h"
#include "FarmLand.h"
int main() {
	// Basic farm Testing :
	{
		std::cout << "Here" << std::endl;
		FarmUnit* farm1 = new FarmLand(10);
		delete farm1;
	}
	
	//	Composite farms
	{
		Soil* soil = new DrySoil();
		FarmLand* farm1 = new FarmLand(6);
		FarmUnit* field = new CropField("Wheat", 6, soil);
		farm1->add(field);
		farm1->add(new Barn("Wheat", 2, 5));
		farm1->print();
		std::cout << "####################################" << std::endl;
		field->plantCrops(4);
		farm1->print();
		std::cout << "####################################" << std::endl;
		field->plantCrops(5);
		farm1->print();
		delete farm1;
	}

	// Observer Testing :
	{
		FarmLand* farm1 = new FarmLand(2);

		FarmUnit* field = new CropField("Wheat", 3, soil);
		FarmUnit* decorator = new DemolishEcosystem(field);
	}
	// // Decorator Testing :
	// {
	// 	FarmLand* farm1 = new FarmLand(2);
	//
	// 	FarmUnit* field = new CropField("Wheat", 3, soil);
	// 	FarmUnit* decorator = new DemolishEcosystem(field);
	// }

	return 0;
}
