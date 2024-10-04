#include "Section.h"

Section::Section() {
}

Section::~Section() {
}

bool Section::addGroup(Group* gr) {
	children.push_back(gr);
	return true;
}

bool Section::destroyGroup() {
	std::vector<Group*>::iterator it;
	Group* gr = children.back();
	children.pop_back();
	bool found = false;
	for (it = children.begin(); it != children.end(); it++) {
		if (*it == gr) {
			children.erase(it);
			found = true;
		}
	}
	if(gr != NULL){
		std::vector<Group*> children = gr->getChildren();
		
	}
	delete gr;
	return found;
}

std::vector<Group*> Section::getChildren() {
	return this->children;
}

void Section::performAction() {
	//do nothing
}

string Section::getDeviceType() {
	return "Section";
}

void Section::getStatus() {
	std::cout << "Section : " << this->name << std::endl;	
}
