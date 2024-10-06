#include "Unlocked.h"

State* Unlocked::toggle() {
	return Unlocked::engage();
}

State* Unlocked::engage() {
	std::cout << "The device is now locked" << std::endl;
	return new Locked();
}

State* Unlocked::disengage() {
	std::cout << "The device is already unlocked" << std::endl;
	return new Unlocked();
}

std::string Unlocked::display() {
	return "The device is currently : Unlocked";
}
