#include "Off.h"

State* Off::toggle() {
	return Off::engage();
}

State* Off::engage() {
	std::cout << "The device is now on" << std::endl;
	return new On();
}

State* Off::disengage() {
	std::cout << "The device is already off" << std::endl;
	return new Off();
}

std::string Off::display() {
	return "The device is currently : Off";
}
