//
// Created by 2MGOU on 2024/07/30.
//

#include "Boatman.h"


void Boatman::prepare() {
    cout << "Rows towards certain death." << endl;;
}

void Boatman::execute() {
    cout << "Shoots cannons rapidly into the infantary but one stray cannon ball hits the shield\n" <<
    "bearers and ricochets off the shield and sinks a boat." << endl;
}

void Boatman::retreat() {
  cout << "All the boatmen get scurvy and need to take a tactical retreat to find lemons." << endl;
}

void Boatman::rest() {
  cout << "The boatment find a tropical island and enjoy some refreshign lemonade on the beach." << endl;
}

void Boatman::engage() {
  prepare();
  execute();
}

void Boatman::disengage() {
  retreat();
  rest();
}
