
#ifndef CARETAKER_H
#define CARETAKER_H
#include <stack>
#include "Memento.h"
class Caretaker
{
private:
    std::stack<Memento *> myStack;
public:
   void restore();
   void undo();
   void save(Memento * m);
};




#endif  // CARETAKER_H