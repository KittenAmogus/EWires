#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

#include "base.h"

typedef struct {

  Point *pointPos;
  Point *pointNeg;

  Voltage voltage;
  Temperature temp;

  uint16_t id;

} PACKED Accumulator;

#endif // ACCUMULATOR_H

