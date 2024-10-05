#include "Unlocked.h"

State* Unlocked::toggle() {
	return Unlocked::engage();
}

State* Unlocked::engage() {
	return new Locked();
}

State* Unlocked::disengage() {
	return new Unlocked();
}

std::string Unlocked::display() {
	return "The device is currently : Unlocked";
}
