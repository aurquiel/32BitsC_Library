#ifndef SWAP_H_INCLUDED
#define SWAP_H_INCLUDED


#include <stdint.h>
#include <stdlib.h>
#include "header.h"
#include "error.h"

#define Swap(a, b, typeData) _Swap(a, b, typeData, __FILE__, __FUNCTION__, __LINE__)
#define SwapXor(a, b, typeData) _SwapXor(a, b, typeData, __FILE__, __FUNCTION__, __LINE__)

void _Swap(void* a, void* b, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void _SwapXor(void* a, void* b, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);

#endif // SWAP_H_INCLUDED
