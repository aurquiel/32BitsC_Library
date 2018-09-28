#ifndef ARITMETHIC_H_INCLUDED
#define ARITMETHIC_H_INCLUDED

#include "error.h"
#include "header.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int64_t AritmethicGetIntegerPart(void *number, int8_t typeData);
int64_t AritmethicGetDecimalPart(void *number,int8_t precision ,int8_t typeData);

#endif // ARITMETHIC_H_INCLUDED
