#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Course.h"

using namespace std;

class Menu 
{
    private:
        map <std::string, Course*> courses;
    public:
        Menu();
        bool addCourse(Course* course);
        bool addMenuItem(std::string courseDescription, std::string description, float ptice, int stock);
        void printMenu() const;
        void inventory() const;
        float orderItem(std::string courseDescription, char item);
        bool isCoursesEmpty();
        void closeShop();
        virtual ~Menu();
        

};

#endif