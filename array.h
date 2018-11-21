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
#define ArrayFindMaximumValue(array, sizeArray, typeData) _ArrayFindMaximumValue(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFindMinimumValue(array, sizeArray, typeData) _ArrayFindMinimumValue(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFindNumberRepetitions(array, sizeArray, data, typeData) _ArrayFindNumberRepetitions(array, sizeArray, data, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayEndChar(array, sizeArray, typeData) _ArrayEndChar(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayRandomGenerator(array, sizeArray, lowerLimit, upperLimit, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReverse(array, sizeArray, typeData) _ArrayReverse(array, sizeArray, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReverseInterval(array, sizeArray, lowerLimit, upperLimit, typeData) _ArrayReverseInterval(array, sizeArray,  lowerLimit, upperLimit, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReplaceData(array, sizeArray, dataFind, dataReplace, typeData) _ArrayReplaceData(array, sizeArray, dataFind, dataReplace, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayReplaceDataFrequency(array, sizeArray, dataFind, dataReplace, frequency, typeData) _ArrayReplaceDataFrequency(array, sizeArray, dataFind, dataReplace, frequency, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayFillSequence(array, sizeArray, startPoint, step, typeData) _ArrayFillSequence(array, sizeArray, startPoint, step, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayMultiplyValue(array, sizeArray, multiple, typeData) _ArrayMultiplyValue(array, sizeArray, multiple, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayAddValue(array, sizeArray, value, typeData) _ArrayAddValue(array, sizeArray, value, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayCountSign(array, sizeArray, sign, typeData) _ArrayCountSign(array, sizeArray, sign, typeData, __FILE__, __LINE__, __FUNCTION__)
#define ArrayCopySignedNumbers(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, sign, typeData) _ArrayCopySignedNumbers(arrayDestiny, sizeArrayDestiny, arraySource, sizeArraySource, sign, typeData, __FILE__, __LINE__, __FUNCTION__)

void _ArrayInterchange(void* arrayA, const uint32_t sizeArrayA, void* arrayB, const uint32_t sizeArrayB, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayCopy(void* arrayDestiny, const uint32_t sizeArrayDestiny, const void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayConcatenate(void* arrayDestiny, const uint32_t sizeArrayDestiny, void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayClear(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArraySet(void* array, const uint32_t sizeArray, const void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFind(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFindMaximumValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void* _ArrayFindMinimumValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _ArrayFindNumberRepetitions(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayEndChar(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReverse(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReverseInterval(void *array, const uint32_t sizeArray, void* lowerLimit, void* upperLimit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReplaceData(void *array, const uint32_t sizeArray, const void* dataFind, const void* dataReplace, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayReplaceDataFrequency(void *array, const uint32_t sizeArray, const void* dataFind, const void* dataReplace, uint32_t frequency, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayFillSequence(void *array, const uint32_t sizeArray, void* const startPoint, void* const step, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayMultiplyValue(void* array, const uint32_t sizeArray, const void* multipe, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayAddValue(void* array, const uint32_t sizeArray, const void* value, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _ArrayCountSign(const void* array, const uint32_t sizeArray, const int8_t sign, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
void _ArrayCopySignedNumbers(void* arrayDestiny, const uint32_t sizeArrayDestiny, const void* arraySource, const uint32_t sizeArraySource, const int8_t sign, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
#endif // ARRAY_H_INCLUDED

