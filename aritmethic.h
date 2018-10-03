#ifndef ARITMETHIC_H_INCLUDED
#define ARITMETHIC_H_INCLUDED

#include "error.h"
#include "header.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define AritmethicGetIntegerPartFromDecimal(number, typeData) _AritmethicGetIntegerPartFromDecimal(number, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AritmethicGetDecimalPartFromDecimal(number, precision, typeData) _AritmethicGetDecimalPartFromDecimal(number, precision, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AritmethicCountNegativeNumbers(array, sizeArray, typeData) _AritmethicCountNegativeNumbers(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AritmethicCountPositiveNumbers(array, sizeArray, typeData) _AritmethicCountPositiveNumbers(array, sizeArray, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AritmethicNumberOfDigits(number, precision, typeData) _AritmethicNumberOfDigits(number, precision, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AritmethicNumberOfDigitsString(number, typeData) _AritmethicNumberOfDigitsString(number, typeData, __FILE__, __FUNCTION__, __LINE__)

int64_t _AritmethicGetIntegerPartFromDecimal(void *number, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
int64_t _AritmethicGetDecimalPartFromDecimal(void *number, int8_t precision ,int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
int64_t _AritmethicCountNegativeNumbers(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
int64_t _AritmethicCountPositiveNumbers(void* array, int64_t sizeArray, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
int64_t _AritmethicNumberOfDigits(void* number, int8_t precision, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
int64_t _AritmethicNumberOfDigitsString(void* number, int8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber);
#endif // ARITMETHIC_H_INCLUDED
