#ifndef DEVICETRAVERSAL_H
#define DEVICETRAVERSAL_H
#include "Section.h"
class DeviceTraversal {

private:
	Group* current;
	Group* next;

public:
	void displayAll();

	bool isDone();
};

#endif
