#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <iostream>
#include <memory>
#include <string>

#include "Alarm.h"
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
Group * getGroupById(int id);
////////////////////////// Declare variables //////////////////////////
unique_ptr<Group> house;
unique_ptr<DeviceTraversal> it;
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
void runCommand(){

}
Group *getGroupById(int id) {
	Group* curr = it->begin();
	while (curr != nullptr) {
		std::cout << "Traversing" << curr->getId() << std::endl;
		if (curr->getId() == id) {
			return curr;
		}
		curr = it->nextGroup();
	}
	return nullptr;
}

void createDevice() {
	cout << "Select a room to add this device to" << endl;
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	Group* curr = getGroupById(stoi(input));
	if (curr == nullptr) {
		cout << colours::DARK_RED + colours::BOLD << "Invalid room ID" << colours::RESET << endl;
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
void checkTraverse() {
    Group* root = new Section("House");
    Group* a1 = new Section("Room1");
    Group* a2 = new Section("Room2");
    Group* a1c = new Section("Dev1");
    Group* a2a = new Section("Dev22");
    Group* a2b = new Section("Dev23");
    Group* b = new Section("Room3");
    Group* c = new Section("Room4");
    Group* c1 = new Section("DevC1");
    Group* c2 = new Section("DevC2");
    Group* c2a = new Section("DevC2A");
    Group* d = new Section("Room5");
    root->addGroup(a1);
    root->addGroup(a2);
    root->addGroup(b);
    root->addGroup(c);
    root->addGroup(d);
    a1->addGroup(a1c);
    a2->addGroup(a2a);
    a2->addGroup(a2b);
    c->addGroup(c1);
    c->addGroup(c2);
    c2->addGroup(c2a);
	root->getStatus();

}


void runUI() {
	house = make_unique<Section>("House");
	it = house->createTraversal();
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
}
int main(int argc, char const* argv[]) {
	//checkTraverse();
	runUI();
}
