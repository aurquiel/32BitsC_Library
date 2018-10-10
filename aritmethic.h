#ifndef ARITMETHIC_H_INCLUDED
#define ARITMETHIC_H_INCLUDED

#include "error.h"
#include "header.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define AritmethicGetIntegerString(number, typeData) _AritmethicGetIntegerString(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetDecimalString(number, precision, typeData) _AritmethicGetDecimalString(number, precision, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDigits(number, precision, typeData) _AritmethicNumberOfDigits(number, precision, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicNumberOfDigitsString(number, typeData) _AritmethicNumberOfDigitsString(number, typeData, __FILE__, __LINE__, __FUNCTION__)
#define AritmethicGetIndividualDigit(number, precision, positionDigit, typeData) _AritmethicGetIndividualDigit(number, precision, positionDigit, typeData, __FILE__, __LINE__, __FUNCTION__)


uint32_t _AritmethicGetIntegerString(void *number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicGetDecimalString(void *number, const int32_t precision, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDigits(const void* number, const int8_t precision, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
uint32_t _AritmethicNumberOfDigitsString(const void* number, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);
int8_t _AritmethicGetIndividualDigit(const void* number, const uint32_t precision, const uint32_t positionDigit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName);

#endif // ARITMETHIC_H_INCLUDED
