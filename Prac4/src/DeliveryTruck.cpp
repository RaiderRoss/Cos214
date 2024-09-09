#include "DeliveryTruck.h"
#include "FarmUnit.h"
DeliveryTruck::DeliveryTruck() {
}

DeliveryTruck::~DeliveryTruck() {
}

void DeliveryTruck::update(FarmUnit* barn) {
	std::cout << "Called a truck because the barn was full" << std::endl;
	barn->update();
}