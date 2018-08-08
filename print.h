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

#endif // PRINT_H_INCLUDED
