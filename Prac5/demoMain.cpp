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
#include "routineManager.h"
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
void runUI();
void addRoutine(std::string name);
void runRoutine();
////////////////////////// Declare variables //////////////////////////
unique_ptr<Group> house;
unique_ptr<DeviceTraversal> it;
unique_ptr<RoutineManager> routineManager;
////////////////////////// Main functions //////////////////////////
void displayActions() {
	cout << colours::BLUE << "====================🔐 House security 🔐====================" << colours::RESET << endl;
	cout << colours::BOLD + colours::GREEN << "Actions : " << colours::RESET << endl;
	cout << "#################################################" << endl;
	cout << "➥ Add a section/room : addSection {name}\t" << endl;
	cout << "➥ Add a device : addDevice\t" << endl;
	cout << "➥ Add a routine : addRoutine {name}\t" << endl;
	cout << "➥ Run an action : runAction\t" << endl;
	cout << "➥ Run a routine : runRoutine\t" << endl;
	cout << "➥ View Layout : listSections\t" << endl;
	cout << "➥ View Routines : listRoutines\t" << endl;
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
	if (input == "exit") {
		system("clear");
		cout << colours::BOLD + colours::RED << "🗝️ You have left the simulation 🗝️" << colours::RESET << endl;
		exit(69);
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
	std::transform(action.begin(), action.end(), action.begin(), ::tolower);

	if (action == "addsection") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		createSection(arg);
		run();
		return;
	}

	if (action == "adddevice") {
		createDevice();
		run();
		return;
	}

	if (action == "addroutine") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		addRoutine(arg);
		run();
		return;
	}

	if (action == "runaction") {
		runCommand();
		run();
		return;
	}
	if (action == "runroutine") {
		runRoutine();
		run();
		return;
	}
	if (action == "listsections") {
		house->getStatus();
		run();
		return;
	}
	if (action == "listroutines") {
		routineManager->listRoutines();
		run();
		return;
	}

	if (action == "clear") {
		system("clear");
		displayActions();
		run();
		return;
	}

	cout << colours::DARK_RED + colours::BOLD << "Command : " << input << " is an invalid action: " << colours::RESET << endl;
	invalidLoop();
}
void addRoutine(std::string name) {
	it->resetTraversal();
	Group* curr = nullptr;
	std::replace(name.begin(), name.end(), ' ', '_');
	MacroRoutines* routine = new MacroRoutines(name);
	while (!it->isDone()) {
		curr = it->nextGroup();
		if (curr == nullptr) {
			break;
		}
		std::cout << curr->getName() << " | " << curr->getId() << std::endl;
		std::cout << "Would you like to add this device/section to the routine? (Y/N)" << std::endl;
		std::cout << "Input⤐ ";
		string input = "";
		getline(cin, input);
		if (input == "Y") {
			std::cout << "Select a command to run for this device/section" << std::endl;
			std::cout << colours::LIGHT_GREEN << "\t↳ Engage 1" << std::endl;
			std::cout << "\t↳ Disengage 2" << std::endl;
			std::cout << "\t↳ Toggle 3" << colours::RESET << std::endl;
			std::cout << "Input⤐ ";
			input = "";
			getline(cin, input);
			if (input == "1") {
				Command* turnOn = new CommandOn(curr);
				routine->addProcedure(turnOn);
			} else if (input == "2") {
				Command* turnOff = new CommandOff(curr);
				routine->addProcedure(turnOff);
			} else if (input == "3") {
				Command* toggle = new CommandToggle(curr);
				routine->addProcedure(toggle);
			} else {
				std::cout << colours::DARK_RED + colours::BOLD << "Invalid command" << colours::RESET << std::endl;
				addRoutine(name);
			}
		}
	}
	routineManager->addRoutine(routine);
	std::cout << "Routine : " << name << " added" << std::endl;
}
void runRoutine() {
	std::cout << "Select a routine to run" << std::endl;
	routineManager->listRoutines();
	std::cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	routineManager->executeRoutine(input);
}
void runCommand() {
	string input = "";
	cout << "Select a device/section to run this command on" << endl;
	cout << "Input⤐ ";
	getline(cin, input);
	Group* curr = getGroupById(stoi(input));
	if (curr == nullptr) {
		cout << colours::DARK_RED + colours::BOLD << "Invalid device ID" << colours::RESET << endl;
		runCommand();
	}
	cout << "Select a command to run" << endl;
	cout << colours::LIGHT_GREEN << "\t↳ Engage 1" << endl;
	cout << "\t↳ Disengage 2" << endl;
	cout << "\t↳ Toggle 3" << colours::RESET << endl;
	cout << "Input⤐ ";
	getline(cin, input);
	if (input == "1") {
		Command* turnOn = new CommandOn(curr);
		turnOn->execute();
		delete turnOn;
	} else if (input == "2") {
		Command* turnOff = new CommandOff(curr);
		turnOff->execute();
		delete turnOff;
	} else if (input == "3") {
		Command* toggle = new CommandToggle(curr);
		toggle->execute();
		delete toggle;
	} else {
		cout << colours::DARK_RED + colours::BOLD << "Invalid command" << colours::RESET << endl;
		runCommand();
	}
}

Group* getGroupById(int id) {
	it->resetTraversal();
	Group* curr = nullptr;
	while (!it->isDone()) {
		curr = it->nextGroup();
		if (curr->getId() == id) {
			return curr;
		}
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
		routineManager = make_unique<RoutineManager>();
		it = house->createTraversal();
		std::cout << colours::RESET << std::endl;
		cout << "All valid commands are shown below : " << endl;
		displayActions();
		run();
	}
}
int main(int argc, char const* argv[]) {
	runUI();
}
