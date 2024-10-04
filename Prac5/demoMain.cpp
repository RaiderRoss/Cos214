#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <iostream>
#include <string>
#include <memory>

#include "Group.h"
#include "Light.h"
#include "Section.h"
#include "State.h"
#include "colours.cpp"
#include "Alarm.h"
#include "Door.h"
#include "Fridge.h"
#include "Thermostat.h"
#include "device.h"
using namespace std;
////////////////////////// Declare functions //////////////////////////
void displayActions();
void run();
void checkUserInput(string input);
void invalidLoop();
void createDevice();
unique_ptr<Group> house;
////////////////////////// Main functions //////////////////////////
void displayActions() {
	cout << colours::BLUE << "====================🔐 House security 🔐====================" << colours::RESET << endl;
	cout << colours::BOLD + colours::GREEN << "Actions : " << colours::RESET << endl;
	cout << "#################################################" << endl;
	cout << "➥ Add a room : addRoom {room name}\t" << endl;
	cout << "➥ Add a device : addDev\t" << endl;
	cout << "➥ Run an action : run {command}\t" << endl;
	cout << "➥ View valid commands : listCommands\t" << endl;
	cout << "➥ View Layout : listSections\t" << endl;
	cout << "➥ Select a room : selectRoom {room ID}\t" << endl;
	cout << "➥ Select a device : selectDev {device ID}\t" << endl;
	cout << colours::BOLD + colours::RED << "To leave : Exit" << colours::RESET << endl;
	cout << colours::BOLD + colours::ORANGE << "To clear the terminal : Clear" << colours::RESET << endl;
	cout << "#################################################" << endl;
}

void run() {
	cout << "Choose Action⤐ ";
	string input = "";
	getline(cin, input);
	checkUserInput(input);
}

void checkUserInput(string input) {
	if (input == "Exit") {
		return;
	}
	int spacePos = input.find(' ');

	string action, arg;

	if (spacePos != string::npos) {
		action = input.substr(0, spacePos);
		arg = input.substr(spacePos + 1);
	} else {
		action = input;
		arg = "";
	}

	if (action == "addRoom") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		house->addGroup(new Section(arg));
		run();
		return;
	}

	if (action == "addDev") {
		createDevice();
		run();
		return;
	}

	if (action == "selectRoom") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		run();
		return;
	}
	if (action == "selectDev") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		run();
		return;
	}

	if (action == "run") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		run();
		return;
	}
	if (action == "listCommands") {
		cout << colours::LIGHT_GREEN << "\t↳ Engage" << endl;
		cout << "\t↳ Disengage" << endl;
		cout << "\t↳ Toggle" << endl;
		cout << "\t↳ Routines" << colours::RESET << endl;
		run();
		return;
	}
	if (action == "listSections") {
		run();
		return;
	}

	if (action == "Clear") {
		system("clear");
		displayActions();
		run();
		return;
	}

	cout << colours::DARK_RED + colours::BOLD << "Command : " << input << " is an invalid action: " << colours::RESET << endl;
	invalidLoop();
}
void createDevice() {
	cout << "Select a room to add this device to" << endl;
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	std::cout << "Select type of device : " << std::endl;
	cout << colours::LIGHT_GREEN;
	cout << "\t↳ Alarm : 1" << endl;
	cout << "\t↳ Door : 2 " << endl;
	cout << "\t↳ Fridge : 3" << endl;
	cout << "\t↳ Light : 4" << endl;
	cout << "\t↳ Thermostat : 5";
	cout << colours::RESET << endl;
	cout << "Input⤐ ";
	input = "";
	getline(cin, input);
	if (input == "1") {
		house->addGroup(new Alarm("Alarm"));
	} else if (input == "2") {
		house->addGroup(new Door("Door"));
	} else if (input == "3") {
		house->addGroup(new Fridge("Fridge"));
	} else if (input == "4") {
		house->addGroup(new Light("Light"));
	} else if (input == "5") {
		house->addGroup(new Thermostat("Thermostat"));
	} else {
		cout << colours::DARK_RED + colours::BOLD << "Invalid device type" << colours::RESET << endl;
		createDevice();
	}
}

void invalidLoop() {
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	checkUserInput(input);
}

int main(int argc, char const *argv[]) {
	house = make_unique<Section>("House");
	system("clear");

	cout << colours::LIGHT_GREEN + colours::BOLD << "============ Welcome to home management securtiy Co ============" << colours::RESET << endl;
	cout << "This app allowes you to manage devices in your house." << endl;

	cout << "Press Y to start" << endl
		 << "Input⤐ ";
	char input = ' ';
	cin >> input;
	if (input == 'Y') {
		system("clear");
		cin.ignore();
		cout << "All valid commands are shown below : " << endl;
		displayActions();
		run();
		system("clear");
	}
	cout << colours::BOLD + colours::RED << "🗝️ You have left the simulation 🗝️" << colours::RESET << endl;
	return 0;
}
