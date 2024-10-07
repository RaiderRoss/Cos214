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
/** 
 * @file Group.h
 * @class Group
 * @brief Represents a group with an ID and a name.
 * 
 * This class provides functionalities to manage a group, including adding and destroying sub-groups,
 * retrieving children, and performing various actions.
 */

/**
 * @fn Group::Group(std::string name)
 * @brief Constructs a Group with the given name.
 * @param name The name of the group.
 */

/**
 * @fn int Group::custom_hash(const std::string& s, int off = 0)
 * @brief Computes a custom hash for the given string.
 * @param s The string to hash.
 * @param off The offset to start hashing from (default is 0).
 * @return The computed hash value.
 */

/**
 * @fn Group::~Group()
 * @brief Destructor for the Group class.
 */

/**
 * @fn bool Group::addGroup(Group* gr)
 * @brief Adds a sub-group to the current group.
 * @param gr Pointer to the group to be added.
 * @return True if the group was added successfully, false otherwise.
 */

/**
 * @fn bool Group::destroyGroup()
 * @brief Destroys the current group.
 * @return True if the group was destroyed successfully, false otherwise.
 */

/**
 * @fn std::vector<unique_ptr<Group>>& Group::getChildren()
 * @brief Retrieves the children of the current group.
 * @return A reference to a vector of unique pointers to the child groups.
 */

/**
 * @fn void Group::getStatus(int = 0)
 * @brief Retrieves the status of the group.
 * @param Optional parameter to specify additional status information.
 */

/**
 * @fn string Group::getDeviceType()
 * @brief Retrieves the type of device associated with the group.
 * @return The device type as a string.
 */

/**
 * @fn string Group::getName()
 * @brief Retrieves the name of the group.
 * @return The name of the group.
 */

/**
 * @fn int Group::getId()
 * @brief Retrieves the ID of the group.
 * @return The ID of the group.
 */

/**
 * @fn void Group::setState(State* s)
 * @brief Sets the state of the group.
 * @param s Pointer to the state to be set.
 */

/**
 * @fn unique_ptr<DeviceTraversal> Group::createTraversal()
 * @brief Creates a traversal object for the group.
 * @return A unique pointer to the created traversal object.
 */

/**
 * @fn void Group::toggleAction()
 * @brief Toggles the action of the group.
 */

/**
 * @fn void Group::turnOnAction()
 * @brief Turns on the action of the group.
 */

/**
 * @fn void Group::turnOffAction()
 * @brief Turns off the action of the group.
 */
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
