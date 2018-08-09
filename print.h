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



/** \brief This function is a wrapper of printf() to print char type only.
 *
 * \param theChar
 * char type to print
 *
 */
void PrintChar(char theChar);



/** \brief This function is a wrapper of printf() to print unsigned char type only.
 *
 * \param theUchar
 * unsigned char type to print
 *
 */
void PrintUchar(unsigned char theUchar);



/** \brief This function is a wrapper of printf() to print int8_t type only.
 *
 * \param theInt
 * int8_t type to print
 *
 */
void Print8int(int8_t theInt);



/** \brief This function is a wrapper of printf() to print uint8_t type only.
 *
 * \param theInt
 * uint8_t type to print
 *
 */
void Print8Uint(uint8_t theInt);



/** \brief This function is a wrapper of printf() to print int16_t type only.
 *
 * \param theInt
 * int16_t type to print
 *
 */
void Print16int(int16_t theInt);



/** \brief This function is a wrapper of printf() to print uint16_t type only.
 *
 * \param theInt
 * uint16_t type to print
 *
 */
void Print16Uint(uint16_t theInt);



/** \brief This function is a wrapper of printf() to print int32_t type only.
 *
 * \param theInt
 * int32_t type to print
 *
 */
void Print32int(int32_t theInt);



/** \brief This function is a wrapper of printf() to print uint32_t type only.
 *
 * \param theInt
 * uint32_t type to print
 *
 */
void Print32Uint(uint32_t theInt);



/** \brief This function is a wrapper of printf() to print int64_t type only.
 *
 * \param theInt
 * int64_t type to print
 *
 */
void Print64int(int64_t theInt);



/** \brief This function is a wrapper of printf() to print uint64_t type only.
 *
 * \param theInt
 * uint64_t type to print
 *
 */
void Print64Uint(uint64_t theInt);

#endif // PRINT_H_INCLUDED
