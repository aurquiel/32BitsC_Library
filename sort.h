#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include "error.h"
#include "header.h"
#include "allocator.h"
#include "array.h"
#include "radixSort.h"
#include <stdint.h>

#define SortRadixSort(arrayA, sizeArrayA, typeData) _SortRadixSort(arrayA, sizeArrayA, typeData, __FILE__, __LINE__, __FUNCTION__)
#define SortBubbleSort(arrayA, sizeArrayA, typeData) _SortBubbleSort(arrayA, sizeArrayA, typeData, __FILE__, __LINE__, __FUNCTION__)

void _SortRadixSort(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _SortBubbleSort(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);

#endif // SORT_H_INCLUDED
