#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "State.h"
#include "colours.cpp"
class DeviceTraversal;
using namespace std;
class Group {
   private:
	int id;
	std::string name;

   public:
	Group(std::string name);
	int custom_hash(const std::string& s, int off = 0);
	virtual ~Group();
	virtual bool addGroup(Group* gr);
	virtual bool destroyGroup();
	virtual std::vector<unique_ptr<Group>> &getChildren();
	virtual void getStatus(int = 0) = 0;
	virtual string getDeviceType() = 0;
	string getName();
	int getId();
	void setState(State* s);
	unique_ptr<DeviceTraversal> createTraversal();
	virtual void toggleAction() = 0;
	virtual void turnOnAction() = 0;
	virtual void turnOffAction() = 0;
};

#endif
