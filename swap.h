#ifndef SWAP_H_INCLUDED
#define SWAP_H_INCLUDED


#include <stdint.h>
#include <stdlib.h>
#include "header.h"
#include "error.h"

void Swap(void* a, void* b, int8_t typeData);
void SwapXor(void* a, void* b, int8_t typeData);

#endif // SWAP_H_INCLUDED
