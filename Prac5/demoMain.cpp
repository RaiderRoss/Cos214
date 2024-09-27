#include <stdlib.h>

#include <iostream>

#include "colours.cpp"

void displayActions();
void run();
void checkUserInput(std::string input);
void invalidLoop();

void displayActions() {
	std::cout << colours::BLUE << "====================🔐 House security 🔐====================" << colours::RESET << std::endl;
	std::cout << colours::BOLD + colours::GREEN << "Actions : " << colours::RESET << std::endl;
	std::cout << "#########################" << std::endl;
	std::cout << "➥ Add a room : addRoom {room name}\t" << std::endl;
	std::cout << "➥ Add a device : addDev {device name}\t" << std::endl;
	std::cout << "➥ Run an action : run {command}\t" << std::endl;
	std::cout << "➥ View valid commans : listCommands\t" << std::endl;
	std::cout << "➥ View Layout : listSections\t" << std::endl;
	std::cout << "➥ Select a room : selectRoom {room ID}\t" << std::endl;
	std::cout << "➥ Select a device : selectDev {device ID}\t" << std::endl;

	std::cout << colours::BOLD + colours::RED << "To leave : Exit" << colours::RESET << std::endl;
	std::cout << colours::BOLD + colours::ORANGE << "To clear the terminal : Clear" << colours::RESET << std::endl;
	std::cout << "#########################" << std::endl;
}

void run() {
	std::cout << "Input⤐ ";
	std::string input = "";
	std::getline(std::cin, input);
	checkUserInput(input);
}

void checkUserInput(std::string input) {
	if (input == "Exit") {
		return;
	}

	if (input == "addRoom") {
		run();
		return;
	}

	if (input == "addDev") {
		run();
		return;
	}

	if (input == "run") {
		run();
		return;
	}
	if (input == "listCommands") {
		run();
		return;
	}
	if (input == "listSections") {
		run();
		return;
	}
    if (input == "selectRoom") {
		run();
		return;
	}
	if (input == "selectDev") {
		run();
		return;
	}
	if (input == "Clear") {
		system("clear");
		displayActions();
		run();
		return;
	}

	std::cout << "Command : " << input << " is an invalid action: " << std::endl;
	invalidLoop();
}

void invalidLoop() {
	std::cout << "Input⤐ ";
	std::string input = "";
	std::getline(std::cin, input);
	checkUserInput(input);
}

int main(int argc, char const *argv[]) {
	system("clear");
	displayActions();
	run();
	system("clear");
	std::cout << colours::BOLD + colours::RED << "You have left the simulation :(" << colours::RESET << std::endl;
	return 0;
}
