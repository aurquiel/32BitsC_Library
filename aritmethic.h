#ifndef ARITMETHIC_H_INCLUDED
#define ARITMETHIC_H_INCLUDED

#include "error.h"
#include "header.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define AritmethicGetIntegerFromArray(number, typeData) _AritmethicGetIntegerFromArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetDecimalFromArray(number, typeData) _AritmethicGetDecimalFromArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDigitsFromArray(number, typeData) _AritmethicNumberOfDigitsFromArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfIntegerDigitsFromArray(number, typeData) _AritmethicNumberOfIntegerDigitsFromArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDecimalDigitsFromArray(number, typeData) _AritmethicNumberOfDecimalDigitsFromArray(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetIndividualDigitFromArray(number, positionDigit, typeData) _AritmethicGetIndividualDigitFromArray(number, positionDigit, typeData, __FILE__, __LINE__, __FUNCTION__)

#define AritmethicGetIndividualDigit(number, precision, positionDigit, typeData) _AritmethicGetIndividualDigit(number, precision, positionDigit, typeData, __FILE__, __LINE__, __FUNCTION__)


uint32_t _AritmethicGetIntegerFromArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicGetDecimalFromArray(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfIntegerDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDecimalDigitsFromArray(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
int8_t _AritmethicGetIndividualDigitFromArray(const void* number, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);


int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t precision, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);

#endif // ARITMETHIC_H_INCLUDED
