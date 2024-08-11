#include "Caretaker.h"

void Caretaker::restore() {
    
}

void Caretaker::undo() {
  Memento* m = myStack.top();
  myStack.pop();
  if (m != NULL) {
    delete m;
    m = NULL;
  }
}

void Caretaker::save(Memento* m) {
  myStack.push(m);
}
