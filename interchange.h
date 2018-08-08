#ifndef INTERCHANGE_H_INCLUDED
#define INTERCHANGE_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "allocator.h"

/** \brief This function interchange the data between to pointers "a" and "b".
 *
 * \param a
 * pointer to the array "a"
 * \param b
 * pointer to the array "b"
 * \param sizeA
 * the number of elements of the array "a"
 * \param sizeB
 * the number of elements of the array "b"
 \param typePointer
 * type of the elements of the array "a" and "b"
 *
 */
void InterchangeTotalGeneric(void* a, void *b, int64_t sizeA, int64_t sizeB, int8_t typePointer);

#endif // INTERCHANGE_H_INCLUDED
