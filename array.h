#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include "allocator.h"
#include "swap.h"

void ArrayInterchange(void* arrayA, int64_t sizeArrayA, void* arrayB, int64_t sizeArrayB, int8_t typeData);
void ArrayCopy(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData);
void ArrayConcatenate(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData);
void ArrayClear(void* arrayDestiny, int64_t sizeArray, int8_t typeData);
void ArraySet(void* array, void *data, int64_t sizeArray, int8_t typeData);
void *ArrayFind(void* array, void *data, int64_t sizeArray, int8_t typeData);
void *ArrayFindMaxValue(void* array, int64_t sizeArray, int8_t typeData);
uint64_t ArrayFindNumberRepetitions(void* array, void *data, int64_t sizeArray, int8_t typeData);
void ArrayRandomGenerator(void* array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData);
void ArrayEndChar(void* array, int64_t sizeArray, int8_t typeData);
void ArrayReverse(void *array, int64_t sizeArray, int8_t typeData);
void ArrayReverseInterval(void *array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData);
void ArrayShuffle(void* array, int64_t sizeArray, int8_t typeData);

#endif // ARRAY_H_INCLUDED
