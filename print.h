#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "header.h"
#include "error.h"

#define PrintArray(array, sizeArray, uint8_t typeData) a_special(__func__)

void PrintArray(void *array, int64_t sizeArray, uint8_t typeData);
void PrintArrayLINE(void *array, int64_t sizeArray, uint8_t typeData, const char *functionCaller);
void PrintChar(char theChar);
void PrintUchar(unsigned char theUchar);
void Print8int(int8_t theInt);
void Print8Uint(uint8_t theInt);
void Print16int(int16_t theInt);
void Print16Uint(uint16_t theInt);
void Print32int(int32_t theInt);
void Print32Uint(uint32_t theInt);
void Print64int(int64_t theInt);
void Print64Uint(uint64_t theInt);
void PrintFloat(float theFloat);
void PrintDouble(double theDouble);

#endif // PRINT_H_INCLUDED
