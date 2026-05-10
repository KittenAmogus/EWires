#ifndef VOLTAGE_H
#define VOLTAGE_H

#include <stdint.h>

#define PACKED __attribute__((packed))

typedef union {
  struct {
    uint16_t value : 15;
    uint16_t isNeg : 1;
  } PACKED;
  int16_t raw;
} Voltage;

#endif // VOLTAGE_H

