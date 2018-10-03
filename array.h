#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include "allocator.h"
#include "swap.h"
#include "aritmethic.h"
#include "print.h"
#include "randomGenerator.h"

#define ArrayInterchange(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData) _ArrayInterchange(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayCopy(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData) _ArrayCopy(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayConcatenate(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData) _ArrayConcatenate(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayClear(array, sizeArray, typeData) _ArrayClear(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArraySet(array, sizeArray, data, typeData) _ArraySet(array, sizeArray, data, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayFind(array, sizeArray, data, typeData) _ArrayFind(array, sizeArray, data, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayFindMaxValue(array, sizeArray, typeData) _ArrayFindMaxValue(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayFindNumberRepetitions(array, sizeArray, data, typeData) _ArrayFindNumberRepetitions(array, sizeArray, data, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayReverse(array, sizeArray, typeData) _ArrayReverse(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayReverseInterval(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayReverseInterval(array, sizeArray,  lowerLimit, upperLimit, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayReplaceAll(array, sizeArray, data, typeData) _ArrayReplaceAll(array, sizeArray, data, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayReplaceFrequency(array, sizeArray, data, frequency, typeData) _ArrayReplaceFrequency(array, sizeArray, data, frequency, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayShuffle(array, sizeArray, typeData) _ArrayShuffle(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define ArrayFillSequency(array, sizeArray, startPoint, step, direction, typeData) _ArrayFillSequency(array, sizeArray, startPoint, step, direction, typeData, __FILE__, __FUNCTION__, __LINE__)

void _ArrayInterchange(void* arrayA, int64_t sizeArrayA, void* arrayB, int64_t sizeArrayB, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayCopy(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayConcatenate(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayClear(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArraySet(void* array, int64_t sizeArray, void *data, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void *_ArrayFind(void* array, int64_t sizeArray, void *data, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void *_ArrayFindMaxValue(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
uint64_t _ArrayFindNumberRepetitions(void* array, int64_t sizeArray, void *data, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayEndChar(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayRandomGenerator(void* array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayReverse(void *array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayReverseInterval(void *array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayReplaceAll(void *array, int64_t sizeArray, void* data, int8_t typeData, char const *fileName, char const *functionName, long lineNumber);
void _ArrayReplaceFrequency(void *array, int64_t sizeArray, void* data, int64_t frequency, int8_t typeData, char const *fileName, char const *functionName, long lineNumber);
void _ArrayShuffle(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
void _ArrayFillSequency(void *array, int64_t sizeArray, void* startPoint, void* step, int8_t direction, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
#endif // ARRAY_H_INCLUDED
