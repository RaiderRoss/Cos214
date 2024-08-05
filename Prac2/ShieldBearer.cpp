//
// Created by 2MGOU on 2024/07/30.
//

#include "ShieldBearer.h"

void ShieldBearer::prepare() {}

void ShieldBearer::execute() {}

void ShieldBearer::retreat() {}

void ShieldBearer::rest() {}

void ShieldBearer::engage() {
  prepare();
  execute();
}

void ShieldBearer::disengage() {
  retreat();
  rest();
}
