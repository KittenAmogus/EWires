#ifndef WIRE_H
#define WIRE_H

#include "base.h"

typedef struct {

  Point *pointA;
  Point *pointB;

  uint16_t id;

} PACKED Wire;

#endif // WIRE_H

