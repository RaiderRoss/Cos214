//
// Created by 2MGOU on 2024/07/30.
//

#include "Boatman.h"

void Boatman::prepare() {
    
}

void Boatman::execute() {
    
}

void Boatman::retreat() {

}

void Boatman::rest() {

}

void Boatman::engage() {
  prepare();
  execute();
}

void Boatman::disengage() {
  retreat();
  rest();
}
