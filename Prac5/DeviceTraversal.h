#ifndef DEVICETRAVERSAL_H
#define DEVICETRAVERSAL_H

class DeviceTraversal {

private:
	Section* current;
	Section* next;

public:
	void displayAll();

	bool isDone();
};

#endif
