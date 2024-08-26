
#include "includes.h"
void riverbankTesting() {
	std::cout << "\033[32m############################============ River Bank Testing ============############################\033[0m" << std::endl;
	LegionFactory* factory = new RiverbankFactory();
	Cavalry* riverHorsies1 = factory->createCavalry();
	Infantry* riverSwords1 = factory->createInfantry();
	Artillery* riverShooters1 = factory->createArtillery();
	std::cout << "============Moving============" << std::endl;
	riverSwords1->move();
	riverShooters1->move();
	riverHorsies1->move();
	std::cout << "============Attacking============" << std::endl;
	riverSwords1->attack();
	riverShooters1->attack();
	riverHorsies1->attack();
	delete riverHorsies1;
	delete riverShooters1;
	delete riverSwords1;
	delete factory;
}
void openFieldTesting() {
	std::cout << "\033[32m############################============ Open Field Testing ============############################\033[0m" << std::endl;
	LegionFactory* factory = new OpenFieldFactory();
	Cavalry* riverHorsies1 = factory->createCavalry();
	Infantry* riverSwords1 = factory->createInfantry();
	Artillery* riverShooters1 = factory->createArtillery();
	std::cout << "============Moving============" << std::endl;
	riverSwords1->move();
	riverShooters1->move();
	riverHorsies1->move();
	std::cout << "============Attacking============" << std::endl;
	riverSwords1->attack();
	riverShooters1->attack();
	riverHorsies1->attack();
	delete riverHorsies1;
	delete riverShooters1;
	delete riverSwords1;
	delete factory;
}
void woodlandTesting() {
	std::cout << "\033[32m############################============ Woodland Testing ============############################\033[0m" << std::endl;
	LegionFactory* factory = new WoodlandFactory();
	Cavalry* riverHorsies1 = factory->createCavalry();
	Infantry* riverSwords1 = factory->createInfantry();
	Artillery* riverShooters1 = factory->createArtillery();
	std::cout << "============Moving============" << std::endl;
	riverSwords1->move();
	riverShooters1->move();
	riverHorsies1->move();
	std::cout << "============Attacking============" << std::endl;
	riverSwords1->attack();
	riverShooters1->attack();
	riverHorsies1->attack();
	delete riverHorsies1;
	delete riverShooters1;
	delete riverSwords1;
	delete factory;
}
void tacticalTesting() {
	std::cout << "\033[32m############################============ Tactical Testong ============############################\033[0m" << std::endl;
}
int main() {
		std::cout << "\033[31m-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl
			  << "            █▓▒░░Factory Testing now ░░▒▓█" << std::endl
			  << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\033[0m" << std::endl;
	std::cout << "\033[32m############################============ The End ============############################\033[0m" << std::endl;
	riverbankTesting();
	openFieldTesting();
	woodlandTesting();
	std::cout << "\033[31m-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl
			  << "            █▓▒░░Tactics Testing now ░░▒▓█" << std::endl
			  << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\033[0m" << std::endl;
	std::cout << "\033[32m############################============ The End ============############################\033[0m" << std::endl;
	return 0;
}
