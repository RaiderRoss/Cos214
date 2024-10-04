#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <iostream>

#include "colours.cpp"
using namespace std;
void displayActions();
void run();
void checkUserInput(string input);
void invalidLoop();
void displayActions() {
	cout << colours::BLUE << "====================🔐 House security 🔐====================" << colours::RESET << endl;
	cout << colours::BOLD + colours::GREEN << "Actions : " << colours::RESET << endl;
	cout << "#################################################" << endl;
	cout << "➥ Add a room : addRoom {room name}\t" << endl;
	cout << "➥ Add a device : addDev {device name}\t" << endl;
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
	cout << "Input⤐ ";
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
		arg.erase(remove(arg.begin(), arg.end(), ' '), arg.end());
		time_t t = time(0);
		string id = to_string(t);
		id = id.substr(id.length() - 4, 2) + "room" + id.substr(id.length() - 2, id.length()) + arg;
		cout << "Created a room with ID : " << id << endl;
		run();
		return;
	}

	if (action == "addDev") {
		if (arg == "") {
			cout << "No Arguements given!" << endl;
			invalidLoop();
		}
		arg.erase(remove(arg.begin(), arg.end(), ' '), arg.end());
		time_t t = time(0);
		string id = to_string(t);
		id = id.substr(id.length() - 4, 2) + "dev" + id.substr(id.length() - 2, id.length()) + arg;
		cout << "Created a device with ID : " << id << endl;
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

void invalidLoop() {
	cout << "Input⤐ ";
	string input = "";
	getline(cin, input);
	checkUserInput(input);
}

int main(int argc, char const *argv[]) {
	system("clear");

	cout << colours::LIGHT_GREEN + colours::BOLD << "============ Welcome to home management securtiy Co ============" << colours::RESET << endl;
	cout << "This app allowes you to manage devices in your house." << endl;

	cout << "Press X to start" << endl
		 << "Input⤐ ";
	char input = ' ';
	cin >> input;
	if (input == 'X') {
		cin.ignore();
		cout << "All valid commands are shown below : " << endl;
		displayActions();
		run();
		system("clear");
	}
	cout << colours::BOLD + colours::RED << "You have left the simulation :(" << colours::RESET << endl;
	return 0;
}
