#include <iostream>
using namespace std;
#include <string>

#include "Course.h"
#include "Dessert.h"
#include "MainCourse.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Starter.h"
static void testCourses() {
  cout << "===================Course Testing===================" << endl;
  cout << "======================Starters======================" << endl;
  Course* starter = new Starter(3);
  starter->recommendBeverage();
  cout << starter->addMenuItem("Bannanas", 2.33, 3) << endl;
  cout << starter->addMenuItem("Apples", 5.45, 31) << endl;
  cout << starter->addMenuItem("Cake", 2.14, 6) << endl;
  cout << starter->addMenuItem("Blueberry Pie", 2.43, 2) << endl;
  cout << "Inventory" << "\n";
  starter->printInventory();
  cout << "Menu Items" << "\n";
  starter->printMenuItems();
  cout << "===================Main Course===================" << endl;
  delete starter;
  starter = new MainCourse(2);
  starter->recommendBeverage();
  cout << starter->addMenuItem("Steak", 203.3, 4) << endl;
  cout << starter->addMenuItem("Cucumber", 52.45, 12) << endl;
  cout << starter->addMenuItem("Wors", 89.14, 6) << endl;
  cout << starter->addMenuItem("Soup", 2.43, 56) << endl;
  cout << "Inventory" << "\n";
  starter->printInventory();
  cout << "Menu Items" << "\n";
  starter->printMenuItems();
  starter->getMenuItem(5);
  starter->getMenuItem(-1);
  delete starter;
  starter = nullptr;
}
static void testItems() {
  cout << "===================Item Testing===================" << endl;
  MenuItem t1("Test 1", 20.22, 3);
  MenuItem t2("Test 2", 20.22, 3);
  cout << t1.getDescription() << endl;
  cout << t2.getDescription() << endl;
  cout << t2.getStock() << endl;
  t2.reduceStock();
  cout << t2.getStock() << endl;
}
static void testMenu() {
    cout << "===================Menu Testing===================" << endl;
  Menu* m = new Menu();
  m->addCourse(new Starter(3));
  m->addMenuItem("Starter", "Bacon", 3.33, 4);
  m->addMenuItem("Starter", "Apples", 6.43,8);
  m->addMenuItem("Starter", "Milk", 2.33, 7);
  m->addMenuItem("Starter", "Pork", 3.33, 4);
  m->orderItem("Main",'b');
  m->orderItem("Starter",'d');
  m->orderItem("Starter",'a');

  m->inventory();
  m->printMenu();
  delete m;
}
using namespace std;

int main() {
    testCourses();
    testItems();
  testMenu();
}
