#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "header.h"
#include "error.h"



/** \brief This function prints the elements belonging to an array.
 *
 * \param theArray
 * pointer to the array
 * \param size
 * number of elements of the array
 \param typePointer
 * type of the elements to be printed
 *
 */
void PrintArray(void *theArray, int64_t size, uint8_t typePointer);

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

#endif // PRINT_H_INCLUDED
