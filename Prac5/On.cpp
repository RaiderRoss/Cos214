#include "On.h"

State* On::toggle() {
 return On::disengage();
}

State* On::engage() {
	return new On();
}

State* On::disengage() {
	return new Off();
}

std::string On::display() {
	return "The device is currently : On";
}
