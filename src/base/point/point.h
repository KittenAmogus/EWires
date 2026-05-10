#ifndef POINT_H
#define POINT_H

#include <stdint.h>

#include "voltage.h"

typedef struct {

  struct {
    int32_t x : 16;
    int32_t y : 16;
  } PACKED pos;

  Voltage voltage;

  uint16_t id;

} PACKED Point;

#endif // POINT_H

