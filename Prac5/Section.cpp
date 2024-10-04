#include "Section.h"

Section::Section(std::string name) : Group(name) {
	std::cout << "Section " << name << " created with id " << getId() << std::endl;
}

Section::~Section() {
	
}

bool Section::addGroup(Group* gr) {
	children.push_back(std::unique_ptr<Group>(gr));
	return true;
}

bool Section::destroyGroup() {
	std::unique_ptr<Group> gr = std::move(children.back());
	children.pop_back();
	bool found = false;
	for (auto it = children.begin(); it != children.end(); ++it) {
		if (it->get() == gr.get()) {
			children.erase(it);
			found = true;
			break;
		}
	}
	if(gr != nullptr){
		std::vector<std::unique_ptr<Group>>& groupChildren = gr->getChildren();
		for (auto it = groupChildren.begin(); it != groupChildren.end(); ++it) {
			children.push_back(std::move(*it));
		}
	}
	return found;
}

std::vector<std::unique_ptr<Group>>& Section::getChildren() {
	return children;
}

void Section::performAction() {
	
}

string Section::getDeviceType() {
	return "Section";
}

void Section::getStatus() {
	std::cout << "Section : " << this->getName() << std::endl;	
}
