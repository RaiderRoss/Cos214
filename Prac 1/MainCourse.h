#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include <iostream>
#include "Course.h"

using namespace std;

class MainCourse : public Course
{
    public:
        MainCourse(int maxNumberOfItems);
        void recommendBeverage();

};

#endif