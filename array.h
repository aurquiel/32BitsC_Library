#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include "allocator.h"

void InterchangeArrayGeneric(void* arrayA, int64_t sizeArrayA, void* arrayB, int64_t sizeArrayB, int8_t typeData);
void CopyArray(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData);
void ConcatenateArray(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData);
void ClearArray(void* arrayDestiny,int64_t numberBytes, int8_t typeData);
void SetArray(void* arrayDestiny, void *data, int64_t numberBytes, int8_t typeData);
void *FindArray(void* array, void *data, int64_t numberBytes, int8_t typeData);
void *FindArrayMaxValue(void* array, int64_t sizeArray, int8_t typeData);
uint64_t FindNumberRepetitionsArray(void* array, void *data, int64_t sizeArray, int8_t typeData);
void RadixSort(void *array, int64_t sizeArray, int8_t typeData);
void RandomArrayGenerator(void* array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData);
void EndArrayChar(void* array, int64_t numberBytes, int8_t typeData);
int64_t GetIntegerPart(void *number, int8_t typeData);
int64_t GetDecimalPart(void *number, int8_t typeData);

#endif // ARRAY_H_INCLUDED
