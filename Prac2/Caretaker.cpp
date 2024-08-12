#include "Caretaker.h"

void Caretaker::clear() {
  while (!myStack.empty()) {
    Memento* m = myStack.top();
    if (m != NULL) {
      delete m;
      m = NULL;
    }
  }
}

Memento* Caretaker::undo() {
  Memento* m = myStack.top();
  myStack.pop();
  return m;
}

void Caretaker::save(Memento* m) {
  myStack.push(m);
}
