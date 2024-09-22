#include "Depth-First.h"
#include "FarmUnit.h"
DepthFirst::DepthFirst(FarmUnit * unit) {
	search(unit);
}

DepthFirst::~DepthFirst() {
    
}

FarmUnit* DepthFirst::next() {
	FarmUnit* head = it.top();
	current = head;
	it.pop();
	it.push(head);
	return it.top();
}

FarmUnit* DepthFirst::firstFarm() {
	return it.top();
}

FarmUnit* DepthFirst::currentFarm() {
	return current;
}

void DepthFirst::search(FarmUnit* unit) {
	it.push(unit);
	if(unit->childern().empty()){
		return;
	}
	for (FarmUnit * unit : unit->childern())
	{
		search(unit);
	}
}