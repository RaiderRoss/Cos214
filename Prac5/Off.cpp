#include "Off.h"

State* Off::toggle() {
	return Off::engage();
}

State* Off::engage() {
	return new On();
}

State* Off::disengage() {
	return new Off();
}

std::string Off::display() {
	return "The device is currently : Off";
}
