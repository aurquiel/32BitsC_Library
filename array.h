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

#define ArrayInterchange(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData) _ArrayInterchange(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData, __FILE__,  __LINE__, __FUNCTION__)
#define ArrayCopy(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData) _ArrayCopy(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayConcatenate(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData) _ArrayConcatenate(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, typeData, __FILE__,  __LINE__, __FUNCTION__)
#define ArrayClear(array, sizeArray, typeData) _ArrayClear(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArraySet(array, sizeArray, data, typeData) _ArraySet(array, sizeArray, data, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFind(array, sizeArray, data, typeData) _ArrayFind(array, sizeArray, data, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFindMaxValue(array, sizeArray, typeData) _ArrayFindMaxValue(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFindMinimumValue(array, sizeArray, typeData) _ArrayFindMinimumValue(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFindNumberRepetitions(array, sizeArray, data, typeData) _ArrayFindNumberRepetitions(array, sizeArray, data, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReverse(array, sizeArray, typeData) _ArrayReverse(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReverseInterval(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayReverseInterval(array, sizeArray,  lowerLimit, upperLimit, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReplaceAll(array, sizeArray, data, typeData) _ArrayReplaceAll(array, sizeArray, data, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReplaceFrequency(array, sizeArray, data, frequency, typeData) _ArrayReplaceFrequency(array, sizeArray, data, frequency, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFillSequency(array, sizeArray, startPoint, step, direction, typeData) _ArrayFillSequency(array, sizeArray, startPoint, step, direction, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayMultiplyValue(array, sizeArray, multiple, typeData) _ArrayMultiplyValue(array, multiple, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayAddValue(array, sizeArray, value, typeData) _ArrayAddValue(array, value, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayCountSign(array, sizeArray, sign, typeData) _ArrayCountSign(array, sing, typeData, __FILE__, __LINE__, __FUNCTION__)

void _ArrayInterchange(void* arrayA, const uint32_t sizeArrayA, void* arrayB, const uint32_t sizeArrayB, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayCopy(void* arrayDestiny, const uint32_t sizeArrayDestiny, const void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayConcatenate(void* arrayDestiny, const uint32_t sizeArrayDestiny, void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayClear(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArraySet(void* array, const uint32_t sizeArray, const void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFind(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFindMaxValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFindMinimumValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _ArrayFindNumberRepetitions(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayEndChar(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReverse(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReverseInterval(void *array, const uint32_t sizeArray, void* lowerLimit, void* upperLimit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReplaceAll(void *array, const uint32_t sizeArray, const void* data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReplaceFrequency(void *array, const uint32_t sizeArray, const void* data, uint32_t frequency, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayFillSequency(void *array, const uint32_t sizeArray, const void* startPoint, const void* step, int8_t direction, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayMultiplyValue(void* array, const uint32_t sizeArray, const void* multipe, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayAddValue(void* array, const uint32_t sizeArray, const void* value, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _ArrayCountSign(const void* array, const uint32_t sizeArray, const int8_t sign, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
#endif // ARRAY_H_INCLUDED

