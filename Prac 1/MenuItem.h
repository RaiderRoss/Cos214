#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <map>
#include <vector>
#include <string>


using namespace std;

class MenuItem
{
    private:
        string description;
        float price;
        int stock;
    public:
        MenuItem(std::string description, float price, int stock);
        string getDescription();
        float getPrice();
        int getStock();
        void reduceStock();

        

};

#endif