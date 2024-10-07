#ifndef DEVICETRAVERSAL_H
#define DEVICETRAVERSAL_H
class Group;
/**
 * @file DeviceTraversal.h
 * @class DeviceTraversal
 * @brief A class to traverse through a hierarchy of Group objects.
 * 
 * This class provides methods to traverse through a tree-like structure of Group objects.
 * It maintains the current, next, and root Group pointers to facilitate traversal.
 */

/**
 * @fn DeviceTraversal::DeviceTraversal(Group* root)
 * @brief Constructs a DeviceTraversal object with the given root Group.
 * @param root The root Group of the hierarchy to traverse.
 */

/**
 * @fn bool DeviceTraversal::isDone()
 * @brief Checks if the traversal is complete.
 * @return True if the traversal is complete, false otherwise.
 */

/**
 * @fn Group* DeviceTraversal::nextGroup()
 * @brief Advances the traversal to the next Group.
 * @return A pointer to the next Group in the traversal.
 */

/**
 * @fn Group* DeviceTraversal::begin()
 * @brief Resets the traversal to the beginning.
 * @return A pointer to the first Group in the traversal.
 */

/**
 * @fn Group* DeviceTraversal::current()
 * @brief Returns the current Group in the traversal.
 * @return A pointer to the current Group.
 */

/**
 * @fn void DeviceTraversal::resetTraversal()
 * @brief Resets the traversal to the initial state.
 */

/**
 * @fn Group* DeviceTraversal::findNext(Group* group)
 * @brief Finds the next Group in the traversal from the given Group.
 * @param group The current Group.
 * @return A pointer to the next Group.
 */

/**
 * @fn Group* DeviceTraversal::findSibling(Group* group)
 * @brief Finds the sibling of the given Group.
 * @param group The current Group.
 * @return A pointer to the sibling Group.
 */

/**
 * @fn Group* DeviceTraversal::findParent(Group* root, Group* group)
 * @brief Finds the parent of the given Group starting from the root.
 * @param root The root Group of the hierarchy.
 * @param group The current Group.
 * @return A pointer to the parent Group.
 */
class DeviceTraversal {

private:
	Group* curr;
	Group* next;
	Group* root;
	Group* findNext(Group* group);
	Group* findSibling(Group* group);
	Group* findParent(Group* root, Group* group);
public:
	DeviceTraversal(Group* root);
	bool isDone();
	Group* nextGroup();
	Group* begin();
	Group* current();
	void resetTraversal();
};

#endif
