#ifndef RESISTOR_H
#define RESISTOR_H

#include "base.h"

typedef struct {

  Point *pointA;
  Point *pointB;

  const uint16_t resistance;

  Temperature temp;

  uint16_t id;

} PACKED Resistor;

#endif // RESISTOR_H

