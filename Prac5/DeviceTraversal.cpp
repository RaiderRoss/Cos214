#include <vector>
#include <algorithm>
#include "DeviceTraversal.h"
#include "Group.h"


DeviceTraversal::DeviceTraversal(Group* root) {
    this->root = root;
    this->curr = nullptr;
    this->next = root;
}

bool DeviceTraversal::isDone() {
	if(next == nullptr){
		next = root;
		return true;
	}
	return false;
}


Group* DeviceTraversal::nextGroup() {
    if (isDone()) {
        return nullptr;
    }
    curr = next;
    next = findNext(curr);
    
    return curr;
}

Group* DeviceTraversal::begin() {
    return root;
}

Group* DeviceTraversal::current() {
    return curr;
}


Group* DeviceTraversal::findNext(Group* group) {
    if (!group->getChildren().empty()) {
        return group->getChildren()[0].get();
    }
    return findSibling(group);
}

Group* DeviceTraversal::findSibling(Group* group) {
    if (group == root) {
        return nullptr;
    }
    Group* parent = findParent(root, group);
    if (parent == nullptr) {
        return nullptr;
    }

    auto it = std::find_if(parent->getChildren().begin(), parent->getChildren().end(),
                           [group](const std::unique_ptr<Group>& child) { return child.get() == group; });
    if (it != parent->getChildren().end() && ++it != parent->getChildren().end()) {
        return it->get();
    }
    return findSibling(parent);
}

Group* DeviceTraversal::findParent(Group* current, Group* target) {
    if (current == nullptr) {
        return nullptr;
    }

    for (const auto& childPtr : current->getChildren()) {
        Group* child = childPtr.get();
        if (child == target) {
            return current;
        }
        Group* parent = findParent(child, target);
        if (parent != nullptr) {
            return parent;
        }
    }

    return nullptr;
}
