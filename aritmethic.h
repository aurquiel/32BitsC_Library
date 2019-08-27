#ifndef ARITMETHIC_H_INCLUDED
#define ARITMETHIC_H_INCLUDED

#include "error.h"
#include "header.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define AritmethicGetIntegerPartFromCharArray(number, typeData) _AritmethicGetIntegerPartFromCharArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetDecimalPartFromCharArray(number, typeData) _AritmethicGetDecimalPartFromCharArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDigitsFromCharArray(number, typeData) _AritmethicNumberOfDigitsFromCharArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfIntegerDigitsFromCharArray(number, typeData) _AritmethicNumberOfIntegerDigitsFromCharArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDecimalDigitsFromCharArray(number, typeData) _AritmethicNumberOfDecimalDigitsFromCharArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetIndividualDigitFromCharArray(number, positionDigit, typeData) _AritmethicGetIndividualDigitFromCharArray(number, positionDigit, typeData, __FILE__, __LINE__, __FUNCTION__)

#define AritmethicGetIndividualDigit(number, precision, positionDigit, typeData) _AritmethicGetIndividualDigit(number, precision, positionDigit, typeData, __FILE__, __LINE__, __FUNCTION__)


uint32_t _AritmethicGetIntegerPartFromCharArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicGetDecimalPartFromCharArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDigitsFromCharArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfIntegerDigitsFromCharArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDecimalDigitsFromCharArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
int8_t _AritmethicGetIndividualDigitFromCharArray(const void* number, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);


int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t precision, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);

#endif // ARITMETHIC_H_INCLUDED
