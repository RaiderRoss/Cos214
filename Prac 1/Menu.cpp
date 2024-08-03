#include "Menu.h"

Menu::Menu() {}

bool Menu::addCourse(Course* course){
    if(course == NULL){
        return false;
    }
    if(courses.count(course->getDescription()) != 0){
        return false;
    }
    courses[course->getDescription()] = course;
    return true;
}

bool Menu::addMenuItem(std::string courseDescription, std::string description, float price, int stock){
    if(courses.count(courseDescription) == 0){
        return false;
    }
    return courses[courseDescription]->addMenuItem(description,price,stock);
}


void Menu::printMenu() const{
    for(const auto& elem : courses){
        std::cout << elem.first << "\n";
        elem.second->printMenuItems();
    }
}

void Menu::inventory() const{
    for(const auto& elem : courses){
        std::cout << elem.first << "\n";
        elem.second->printInventory();
    }
}

float Menu::orderItem(std::string courseDescription, char item){
    if(courses.count(courseDescription) == 0){
        return 0;
    }
    for(const auto& elem : courses){
        if(elem.first == courseDescription){
            if(elem.second->getMenuItem(item - 97) != NULL && elem.second->getMenuItem(item - 97)->getStock() > 0){
                elem.second->getMenuItem(item - 97)->reduceStock();
                return elem.second->getMenuItem(item - 97)->getPrice();
            }
        }
    }
    return 0;
}

bool Menu::isCoursesEmpty(){
    if(courses.empty()){
        return true;
    }
    return false;
}

void Menu::closeShop(){
    int i = 0;
    for(const auto& elem : courses){
        i++;
    }
    cout << "Closing shop. Deleting all " << i << " courses\n";
    for(auto it = courses.begin(); it != courses.end(); ) {
        it = courses.erase(it);
    }
}

Menu::~Menu() {
    int i = 0;
    for(const auto& elem : courses){
        i++;
    }
    if(i == 0){
        cout << "Menu destructor called\n";
    }
    else{
        this->closeShop();
        cout << "Menu destructor called\n";
    }
}
