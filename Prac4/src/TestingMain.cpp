#include <iostream>

#include "CropField.h"
#include "DrySoil.h"
#include "FarmLand.h"
#include "FireHazard.h"
int main() {
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────Composite Testing────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		Soil* soil = new DrySoil();
		FarmLand* farm1 = new FarmLand(6, "Wheat farm");
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
		farm1->remove(field);
		farm1->print();
		delete farm1;
	}
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────Observer Testing────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		Soil* soil = new FruitfulSoil();
		FarmLand* farm1 = new FarmLand(6, "Potatoe farm");
		FarmUnit* field = new CropField("Potatoe", 9, soil);
		farm1->add(field);
		field->plantCrops(2);
		FarmUnit* barn = new Barn("Potatoe", 1, 10);
		farm1->add(barn);
		farm1->print();
		std::cout << "####################################" << std::endl;
		barn->buyTruck();
		field->plantCrops(3);
		field->buyTruck();
		field->harvestField(barn);
		farm1->print();
		barn->sellTruck();
		field->plantCrops(7);
		field->harvestField(barn);
		field->plantCrops(6);
		field->harvestField(barn);
		farm1->print();
		delete farm1;
	}
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧Decorator Testing────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		FarmLand* farm1 = new FarmLand(2, "Barley Farm");
		Soil* soil = new FloodedSoil();
		FarmUnit* field = new CropField("Barley", 3, soil);
		FarmUnit* barn = new Barn("Barley", 1, 10);
		StatBooster* decoratorField = new DemolishEcosystem(field);
		farm1->add(decoratorField);
		decoratorField->plantCrops(3);
		farm1->print();
		std::cout << "####################################" << std::endl;
		farm1->print();
		delete farm1;
		delete field;
	}
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────Iterator Testing────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		FarmLand* farm1 = new FarmLand(4, "1");
		FarmLand* farm2 = new FarmLand(1, "12");
		FarmLand* farm3 = new FarmLand(2, "13");
		FarmLand* farm4 = new FarmLand(1, "14");
		FarmLand* farm121 = new FarmLand(1, "121");
		FarmLand* farm1211 = new FarmLand(2, "1211");
		FarmLand* farm131 = new FarmLand(1, "131");
		FarmLand* farm132 = new FarmLand(2, "132");
		FarmLand* farm1321 = new FarmLand(1, "1321");
		farm1->add(farm2);
		farm1->add(farm3);
		farm1->add(farm4);
		farm121->add(farm1211);
		farm2->add(farm121);
		farm132->add(farm1321);
		farm3->add(farm131);
		farm3->add(farm132);
		farm1->print();
		Iterator* dfs = farm1->createIteratorDfs();
		dfs->firstFarm()->print();
		Iterator* bfs = farm1->createIteratorBfs();
		bfs->firstFarm()->print();
		std::cout << bfs->isDone();
		bfs->next()->print();
		delete dfs;
		delete bfs;
		delete farm1;
	}
	std::cout << "\033[1;31m•☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────Farm Land────☾••☽────✧˖°˖☆˖°˖✧────☾••☽────✧˖°˖☆˖°˖✧────☾•\033[0m" << std::endl;
	{
		FarmUnit* farm = new FarmLand(2, "WHEAT");
		Soil* dry = new DrySoil();
		dry->getName();
		dry->rain();
		FarmUnit* barn = new Barn("WHEAT", 0, 1);
		farm->harvestField(barn);
		FarmLand* farm = new FarmLand(1, "1321");
		farm->update();
		farm->sellTruck();
		farm->callTruck();
		farm->startEngine();
		farm->getCropType();
		farm->harvestField(barn);
		farm->plantCrops(10);
	}
	return 0;
}
