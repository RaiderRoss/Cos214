#include "DeliveryTruck.h"
#include "FarmUnit.h"
DeliveryTruck::DeliveryTruck() {
}

DeliveryTruck::~DeliveryTruck() {
}

void DeliveryTruck::update(FarmUnit* barn) {
	barn->update();
}