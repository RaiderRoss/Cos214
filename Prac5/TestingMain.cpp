#include <iostream>
#include <sstream>
#include <string>

#include "Alarm.h"
#include "AlarmIntegrator.h"
#include "Command.h"
#include "CommandOff.h"
#include "CommandOn.h"
#include "CommandToggle.h"
#include "DeviceTraversal.h"
#include "Door.h"
#include "Fridge.h"
#include "Group.h"
#include "Light.h"
#include "LockState.h"
#include "MacroRoutines.h"
#include "Section.h"
#include "State.h"
#include "SwitchState.h"
#include "Thermostat.h"
#include "ThermostatIntegrator.h"
#include "device.h"
#include "routineManager.h"
using namespace std;
int main() {
	{
		std::cout << colours::LIGHT_GREEN << "Section 1: Checking state display functionality" << colours::RESET << std::endl;
		State* on = new On();
		State* off = new Off();
		State* locked = new Locked();
		State* unlocked = new Unlocked();
		State* s;
		s = on->toggle();
		delete s;
		s = off->toggle();
		delete s;
		s = on->engage();
		delete s;
		s = off->engage();
		delete s;
		s = locked->engage();
		delete s;
		s = unlocked->engage();
		delete s;
		s = on->disengage();
		delete s;
		s = off->disengage();
		delete s;
		s = locked->disengage();
		delete s;
		s = unlocked->disengage();
		delete s;
		delete on;
		delete off;
		delete locked;
		delete unlocked;
		std::cout << colours::LIGHT_GREEN << "End of Section 1" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 2: Testing state transitions" << colours::RESET << std::endl;
		State* on = new On();
		State* off = on->toggle();
		State* onAgain = off->toggle();
		State* locked = new Locked();
		State* unlocked = locked->toggle();
		State* lockedAgain = unlocked->toggle();
		delete on;
		delete off;
		delete onAgain;
		delete locked;
		delete unlocked;
		delete lockedAgain;
		std::cout << colours::LIGHT_GREEN << "End of Section 2" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_GREEN << "Section 3: Testing Composite" << colours::RESET << std::endl;
		Group* room1 = new Section("room1");
		Group* room2 = new Section("room2");
		Group* house = new Section("house");
		house->addGroup(room1);
		house->addGroup(room2);
		house->toggleAction();
		house->turnOnAction();
		house->turnOffAction();
		house->destroyGroup();
		house->getStatus();
		house->destroyGroup();
		delete house;
		std::cout << colours::LIGHT_GREEN << "End of Section 3" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 3: Testing devices" << colours::RESET << std::endl;
		Group* dev1 = new Alarm("Alarm");
		Group* dev2 = new Door("Door");
		Group* dev3 = new Fridge("Fridge");
		Group* dev4 = new Light("Light");
		Group* dev5 = new Thermostat("Thermostat");
		ostringstream os;
		streambuf* oldCoutStreamBuf = cout.rdbuf();
		cout.rdbuf(os.rdbuf());
		dev1->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev1->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev1->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev3->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev3->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev3->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev4->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev4->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev4->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev5->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev5->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev5->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(oldCoutStreamBuf);
		delete dev1;
		delete dev2;
		delete dev3;
		delete dev4;
		delete dev5;
		std::cout << colours::LIGHT_GREEN << "End of Section 3" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 5: Integrator" << colours::RESET << std::endl;
		Group* dev1 = new AlarmIntegrator("Alarm");
		Group* dev2 = new ThermostatIntegrator("Light");
		ostringstream os;
		streambuf* oldCoutStreamBuf = cout.rdbuf();
		cout.rdbuf(os.rdbuf());
		dev1->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev1->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev1->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->turnOnAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->turnOffAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		dev2->toggleAction();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		delete dev1;
		delete dev2;
		std::cout << colours::LIGHT_GREEN << "Section 5: Testing commands" << colours::RESET << std::endl;
	}
	{
		Group* dev1 = new Alarm("Alarm");
		Group* dev2 = new Door("Door");
		Command* on1 = new CommandOn(dev1);
		Command* off1 = new CommandOff(dev1);
		Command* toggle1 = new CommandToggle(dev1);
		Command* on2 = new CommandOn(dev2);
		Command* off2 = new CommandOff(dev2);
		Command* toggle2 = new CommandToggle(dev2);
		ostringstream os;
		streambuf* oldCoutStreamBuf = cout.rdbuf();
		cout.rdbuf(os.rdbuf());
		on1->execute();
		os.str("");
		off1->execute();
		cout.rdbuf(oldCoutStreamBuf);
		cout.rdbuf(os.rdbuf());
		os.str("");
		toggle1->execute();
		cout.rdbuf(oldCoutStreamBuf);
		cout.rdbuf(os.rdbuf());
		os.str("");
		on2->execute();
		cout.rdbuf(oldCoutStreamBuf);
		cout.rdbuf(os.rdbuf());
		os.str("");
		off2->execute();
		cout.rdbuf(oldCoutStreamBuf);
		cout.rdbuf(os.rdbuf());
		os.str("");
		toggle2->execute();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(oldCoutStreamBuf);
		delete on1;
		delete off1;
		delete toggle1;
		delete on2;
		delete off2;
		delete toggle2;
		delete dev1;
		delete dev2;
		std::cout << colours::LIGHT_GREEN << "End of Section 5" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 6: Testing iterator" << colours::RESET << std::endl;
		Group* room1 = new Section("room1");
		Group* room2 = new Section("room2");
		Group* house = new Section("house");
		house->addGroup(room1);
		house->addGroup(room2);
		std::unique_ptr<DeviceTraversal> it = house->createTraversal();
		it->nextGroup();
		it->current();
		it->nextGroup();
		it->nextGroup();
		delete house;
		std::cout << colours::LIGHT_GREEN << "End of Section 6" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 7: Testing MacroRoutines" << colours::RESET << std::endl;
		Group* dev1 = new Alarm("Alarm");
		Group* dev2 = new Door("Door");
		Group* dev3 = new Fridge("Fridge");
		Group* dev4 = new Light("Light");
		Group* dev5 = new Thermostat("Thermostat");
		MacroRoutines* macro = new MacroRoutines("Test");
		Command* on1 = new CommandOn(dev1);
		macro->addProcedure(on1);
		macro->addProcedure(new CommandOn(dev2));
		macro->addProcedure(new CommandOn(dev3));
		macro->addProcedure(new CommandOn(dev4));
		macro->addProcedure(new CommandOn(dev5));
		ostringstream os;
		streambuf* oldCoutStreamBuf = cout.rdbuf();
		cout.rdbuf(os.rdbuf());
		macro->execute();
		os.str("");
		cout.rdbuf(oldCoutStreamBuf);
		RoutineManager* routineManager = new RoutineManager();
		routineManager->addRoutine(macro);
		routineManager->executeRoutine("Test");
		macro->removeProcedure(on1);
		routineManager->listRoutines();
		routineManager->removeRoutine(macro);
		delete routineManager;
		delete dev1;
		delete dev2;
		delete dev3;
		delete dev4;
		delete dev5;
		std::cout << colours::LIGHT_GREEN << "End of Section 7" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	{
		std::cout << colours::LIGHT_GREEN << "Section 8: Testing sensors" << colours::RESET << std::endl;
		Group* dev1 = new Alarm("Alarm");
		Group* dev2 = new Light("Light");
		Group* house = new Section("house");
		house->addGroup(dev1);
		house->addGroup(dev2);
		SensorLight* sensor1 = new SensorLight(dev2);
		house->addSensor(sensor1);
		SensorMotion* sensor2 = new SensorMotion(dev1);
		house->addSensor(sensor2);
		ostringstream os;
		streambuf* oldCoutStreamBuf = cout.rdbuf();
		cout.rdbuf(os.rdbuf());
		house->movement();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		cout.rdbuf(os.rdbuf());
		house->light();
		cout.rdbuf(oldCoutStreamBuf);
		os.str("");
		delete house;
		std::cout << colours::LIGHT_GREEN << "End of Section 8" << colours::RESET << std::endl;
		std::cout << colours::LIGHT_BLUE << "============================================================" << colours::RESET << std::endl;
	}
	return 0;
}