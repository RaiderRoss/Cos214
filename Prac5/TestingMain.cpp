#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "device.h"
#include "Section.h"
#include "State.h"
#include "LockState.h"
#include "SwitchState.h"



TEST_CASE("Section 1: Checking state display functionality") {
    State* on = new On();
    State* off = new Off();
    State* locked = new Locked();
    State* unlocked = new Unlocked();



    CHECK(on->display() == "The device is currently : On");
    CHECK(off->display() == "The device is currently : Off");
    CHECK(locked->display() == "The device is currently : Locked");
    CHECK(unlocked->display() == "The device is currently : Unlocked");
  


    CHECK(on->display() != "The device is currently : Off");
    CHECK(off->display() != "The device is currently : On");
    CHECK(locked->display() != "The device is currently : Unlocked");
    CHECK(unlocked->display() != "The device is currently : Locked");



    delete on;
    delete off;
    delete locked;
    delete unlocked;
}

TEST_CASE("Section 2: Testing state transitions") {
    State* on = new On();
    State* off = on->toggle();
    CHECK(off->display() == "The device is currently : Off");
    State* onAgain = off->toggle();
    CHECK(onAgain->display() == "The device is currently : On");
    State* locked = new Locked();
    State* unlocked = locked->toggle();
    CHECK(unlocked->display() == "The device is currently : Unlocked");
    State* lockedAgain = unlocked->toggle();
    CHECK(lockedAgain->display() == "The device is currently : Locked");



    delete on;
    delete off;
    delete onAgain;
    delete locked;
    delete unlocked;
    delete lockedAgain;
}

TEST_CASE("Section 3: Testing Composite") {
    Group* room1 = new Section("room1");
    Group* room2 = new Section("room2");
    CHECK(room1->getName() == "room1");
    Group* house = new Section("house");
    house->addGroup(room1);
    house->addGroup(room2);
    CHECK(house->getChildren().size() == 2);
    CHECK(house->getChildren()[0]->getName() == "room1");
    CHECK(house->getChildren()[1]->getName() == "room2");
    CHECK(house->getDeviceType() == "Section");
    CHECK(room1->getChildren().size() == 0);
    delete house;
}
TEST_CASE("Section 3: Testing devices") {
    Group* room1 = new Section("room1");
    Group* room2 = new Section("room2");
    CHECK(room1->getName() == "room1");
    Group* house = new Section("house");
    house->addGroup(room1);
    house->addGroup(room2);
    CHECK(house->getChildren().size() == 2);
    CHECK(house->getChildren()[0]->getName() == "room1");
    CHECK(house->getChildren()[1]->getName() == "room2");
    CHECK(house->getDeviceType() == "Section");
    CHECK(room1->getChildren().size() == 0);
    delete house;
}

    
