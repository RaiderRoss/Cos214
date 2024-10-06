#include "Locked.h"

State* Locked::toggle() {
	return Locked::disengage();
}

State* Locked::engage() {
	std::cout << "The device is already locked" << std::endl;
	return new Locked();
}

State* Locked::disengage() {
	std::cout << "The device is now unlocked" << std::endl;
	return new Unlocked();
}

std::string Locked::display() {
	return "The device is currently : Locked";
}
