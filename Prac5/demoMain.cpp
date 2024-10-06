#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <iostream>
#include <memory>
#include <string>

#include "Alarm.h"
#include "CommandOff.h"
#include "CommandOn.h"
#include "CommandToggle.h"
#include "DeviceTraversal.h"
#include "Door.h"
#include "Fridge.h"
#include "Group.h"
#include "Light.h"
#include "Section.h"
#include "State.h"
#include "Thermostat.h"
#include "device.h"
using namespace std;
////////////////////////// Declare functions //////////////////////////
void displayActions();
void run();
void checkUserInput(string input);
void invalidLoop();
void createDevice();
void createSection(std::string name);
Group* getGroupById(int id);
void runCommand();
////////////////////////// Declare variables //////////////////////////
unique_ptr<Group> house;
unique_ptr<DeviceTraversal> it;
////////////////////////// Main functions //////////////////////////
void displayActions() {
	cout << colours::BLUE << "====================🔐 House security 🔐====================" << colours::RESET << endl;
	cout << colours::BOLD + colours::GREEN << "Actions : " << colours::RESET << endl;
	cout << "#################################################" << endl;
	cout << "➥ Add a section/room : addSec {name}\t" << endl;
	cout << "➥ Add a device : addDev\t" << endl;
	cout << "➥ Run an action : run\t" << endl;
	cout << "➥ View Layout : listSections\t" << endl;
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

	if (action == "addSec") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		createSection(arg);
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
		runCommand();
		run();
		return;
	}
	if (action == "listSections") {
		house->getStatus();
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
void runCommand() {
	cout << "Select a device to run this command on" << endl;
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	Group* curr = getGroupById(stoi(input));
	if (curr == nullptr) {
		cout << colours::DARK_RED + colours::BOLD << "Invalid device ID" << colours::RESET << endl;
		runCommand();
	}
	cout << "Select a command to run" << endl;
	cout << colours::LIGHT_GREEN << "\t↳ Engage 1" << endl;
	cout << "\t↳ Disengage 2" << endl;
	cout << "\t↳ Toggle 3" << endl;
	cout << "\t↳ Routines 4" << colours::RESET << endl;
	cout << "Input⤐ ";
	input = "";
	getline(cin, input);
	device* dev = static_cast<device*>(curr);
	if (input == "1") {
		Command* turnOn = new CommandOn(dev);
		turnOn->execute();
		delete turnOn;
	} else if (input == "2") {
		Command* turnOff = new CommandOff(dev);
		turnOff->execute();
		delete turnOff;
	} else if (input == "3") {
		Command* toggle = new CommandToggle(dev);
		toggle->execute();
		delete toggle;
	} else if (input == "4") {
	} else {
		cout << colours::DARK_RED + colours::BOLD << "Invalid command" << colours::RESET << endl;
		runCommand();
	}
}
Group* getGroupById(int id) {
	it->resetTraversal();
	Group* curr = it->nextGroup();
	while (curr != nullptr) {
		if (curr->getId() == id) {
			return curr;
		}
		curr = it->nextGroup();
	}
	return nullptr;
}
void createSection(std::string name) {
	cout << "Select a room/section to add this section to" << endl;
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	Group* curr = getGroupById(stoi(input));
	if (curr == nullptr) {
		cout << colours::DARK_RED + colours::BOLD << "Invalid section ID" << colours::RESET << endl;
		createSection(name);
	}
	curr->addGroup(new Section(name));
}
void createDevice() {
	cout << "Select a room to add this device to" << endl;
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	Group* curr = getGroupById(stoi(input));
	if (curr == nullptr) {
		cout << colours::DARK_RED + colours::BOLD << "Invalid section ID" << colours::RESET << endl;
		createDevice();
	}
	std::cout << "Select type of device : " << std::endl;
	cout << colours::LIGHT_GREEN;
	cout << "\t↳ Exit : 0" << endl;
	cout << "\t↳ Alarm : 1" << endl;
	cout << "\t↳ Door : 2 " << endl;
	cout << "\t↳ Fridge : 3" << endl;
	cout << "\t↳ Light : 4" << endl;
	cout << "\t↳ Thermostat : 5";
	cout << colours::RESET << endl;
	cout << "Input⤐ ";
	input = "";
	getline(cin, input);
	if (input == "0") {
		return;
	}

	if (input == "1") {
		curr->addGroup(new Alarm("Alarm"));
	} else if (input == "2") {
		curr->addGroup(new Door("Door"));
	} else if (input == "3") {
		curr->addGroup(new Fridge("Fridge"));
	} else if (input == "4") {
		curr->addGroup(new Light("Light"));
	} else if (input == "5") {
		curr->addGroup(new Thermostat("Thermostat"));
	} else {
		cout << colours::DARK_RED + colours::BOLD << "Invalid device type" << colours::RESET << endl;
		createDevice();
	}
}

void invalidLoop() {
	cout << "Choose Action⤐ ";
	string input = "";
	getline(cin, input);
	checkUserInput(input);
}

void runUI() {
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
		std::cout << colours::LIGHT_GREEN + colours::BOLD << std::endl;
		house = make_unique<Section>("House");
		it = house->createTraversal();
		std::cout << colours::RESET << std::endl;
		cout << "All valid commands are shown below : " << endl;
		displayActions();
		run();
		system("clear");
	}
	cout << colours::BOLD + colours::RED << "🗝️ You have left the simulation 🗝️" << colours::RESET << endl;
}
int main(int argc, char const* argv[]) {
	// checkTraverse();
	runUI();
}
