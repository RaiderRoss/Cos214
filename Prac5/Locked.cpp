#include "Locked.h"

State* Locked::toggle() {
	return Locked::disengage();
}

State* Locked::engage() {
	return new Locked();
}

State* Locked::disengage() {
	return new Unlocked();
}

std::string Locked::display() {
	return "The device is currently : Locked";
}
