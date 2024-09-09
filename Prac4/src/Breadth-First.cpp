#include "Breadth-First.h"
#include "FarmUnit.h"
BreadthFirst::BreadthFirst(FarmUnit* land) {
	search(land);
}

FarmUnit* BreadthFirst::next() {
	FarmUnit* head = it.front();
	current = head;
	it.pop();
	it.push(head);
	return it.front();
}

void BreadthFirst::search(FarmUnit* unit) {
	if (!contains(unit)) {
		it.push(unit);
	}
	for (FarmUnit* child : unit->childern()) {
		it.push(child);
        search(child);
	}
}

FarmUnit* BreadthFirst::firstFarm() {
	return it.front();
}

FarmUnit* BreadthFirst::currentFarm() {
	return current;
}

bool BreadthFirst::contains(FarmUnit* unit) {
	std::queue<FarmUnit*> tempQueue = it;
	while (!tempQueue.empty()) {
		FarmUnit* child = tempQueue.front();
		tempQueue.pop();
		if (child == unit) {
			return true;
		}
	}
	return false;
}

BreadthFirst::~BreadthFirst() {
}
