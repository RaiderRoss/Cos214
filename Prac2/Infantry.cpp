//
// Created by 2MGOU on 2024/07/30.
//

#include "Infantry.h"

void Infantry::prepare() {}

void Infantry::execute() {}

void Infantry::retreat() {}

void Infantry::rest() {}

void Infantry::engage() {
  prepare();
  execute();
}

void Infantry::disengage() {
  retreat();
  rest();
}