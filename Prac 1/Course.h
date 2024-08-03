#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "MenuItem.h"

using namespace std;

class Course
{

    public:
        Course(std::string description, int maxNumberOfItems);
        virtual std::string getDescription();
        virtual bool addMenuItem(std::string description, float price, int stock);
        virtual void printMenuItems();
        virtual void printInventory();
        virtual MenuItem* getMenuItem(int index);
        virtual void  recommendBeverage() = 0;
        virtual ~Course();
    protected:
        std::string description;
        int maxNumberOfItems;
        vector<MenuItem*> menuItems;

};

#endif