#include "MenuItem.h"
#include <string>

MenuItem::MenuItem(std::string description, float price, int stock) {
    this->description = description;
    this->price = price;
    this->stock = stock;

}

std::string MenuItem::getDescription(){
    return this->description;
}

float MenuItem::getPrice(){
    return this->price;
}

int MenuItem::getStock(){
    return this->stock;
}

void MenuItem::reduceStock(){
    this->stock = this->stock -1;
}

