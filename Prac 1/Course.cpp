#include "Course.h"

Course::Course(std::string description, int maxNumberOfItems){
    
    if(maxNumberOfItems >= 0){
        this->maxNumberOfItems = maxNumberOfItems;
        this->description = description;
    }
    
}

Course::~Course() {
    for(auto item : menuItems){
        delete item;
    }
}

std::string Course::getDescription(){
    return this->description;
}

bool Course::addMenuItem(std::string description, float price, int stock){
    MenuItem* obj = new MenuItem(description, price, stock);
    if(menuItems.size() >= maxNumberOfItems){
        delete obj;
        return false;
        
    }
    menuItems.push_back(obj);
    return true;

}

void Course::printMenuItems(){
    char i = 'a';
    for(auto item : menuItems){
        cout <<"\t" << i <<".\t" << item->getDescription() << "\n";
        i++;
    }

}

void Course::printInventory(){
    char i = 'a';
    for(auto item : menuItems){
        cout <<"\t" << i <<".\t" << item->getDescription() << "\t" << item->getPrice() << "\t" << item->getStock() << "\n";
        i++;
    }
}

MenuItem* Course::getMenuItem(int index){
    if(menuItems.size() < index || index >= menuItems.size()){
        return NULL;
    }
    return menuItems.at(index);
}

