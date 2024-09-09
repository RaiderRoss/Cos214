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
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	// Observer Testing :
	{
		Soil* soil = new FruitfulSoil();
		FarmLand* farm1 = new FarmLand(6);
		FarmUnit* field = new CropField("Wheat", 9, soil);
		farm1->add(field);
		field->plantCrops(2);
		FarmUnit* barn = new Barn("Wheat", 1, 10);
		farm1->add(barn);
		farm1->print();
		std::cout << "####################################" << std::endl;
		farm1->plantCrops(3);
		field->harvestField(barn);
		farm1->print();
		farm1->plantCrops(3);
		field->harvestField(barn);
		field->buyTruck();
		field->callTruck();
		delete farm1;
	}
	// Decorator Testing :
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		FarmLand* farm1 = new FarmLand(2);
		Soil* soil = new DrySoil();
		FarmUnit* field = new CropField("Wheat", 3, soil);
		StatBooster* decoratorField = new DemolishEcosystem(field);
		farm1->add(decoratorField);
		decoratorField->plantCrops(3);
		farm1->print();
		std::cout << "####################################" << std::endl;
		decoratorField->amplifications();
		farm1->print();
		delete farm1;
	}

	return 0;
}
