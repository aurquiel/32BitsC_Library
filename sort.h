#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include "error.h"
#include "header.h"
#include "allocator.h"
#include "array.h"
#include "radixSort.h"
#include <stdint.h>

#define SortRadix(arrayA, sizeArrayA, typeData) _SortRadix(arrayA, sizeArrayA, typeData, __FILE__, __FUNCTION__, __LINE__)

void _SortRadix(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);


#endif // SORT_H_INCLUDED
