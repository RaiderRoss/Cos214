#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "device.h"
#include "State.h"
#include "LockState.h"
#include "SwitchState.h"


TEST_CASE("Running the main program logic") {
    State* on = new On();
    State* off = new Off(); 
    State* locked = new Locked();
    State* unlocked = new Unlocked();
    std::cout << on->display() << std::endl;  
    CHECK(on->toggle()->display() == off->display());
    CHECK(off->toggle()->display() == on->display());
    CHECK(locked->toggle()->display() == unlocked->display());
    CHECK(unlocked->toggle()->display() == locked->display()); 
}

    
