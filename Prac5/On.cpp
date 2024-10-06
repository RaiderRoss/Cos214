#include "On.h"

State* On::toggle() {
 return On::disengage();
}

State* On::engage() {
	std::cout << "The device is already on" << std::endl;
	return new On();
}

State* On::disengage() {
	std::cout << "The device is now off" << std::endl;
	return new Off();
}

std::string On::display() {
	return "The device is currently : On";
}
