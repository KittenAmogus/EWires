#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <stdint.h>

typedef struct {
  const uint16_t maxTemp;
  uint16_t temp;
} __attribute__((packed)) Temperature;

#endif // TEMPERATURE_H

