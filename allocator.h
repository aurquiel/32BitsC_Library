#ifndef ALLOCATOR_H_INCLUDED
#define ALLOCATOR_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "header.h"
#include "error.h"

/** \brief This function is a wrapper of the malloc function, enhancing the notification error in case of NULL as result of the allocation process.
 *
 * \param numberOfElements
 * number of elements to allocate
 * \param typePointer
 * type of the elements to be allocated
 * \return pointer to the allocated memory
 *
 */
void *AllocatorMalloc(int64_t numberOfElements, int8_t typePointer);



/** \brief This function is a wrapper of the malloc function to allocate an array of pointers, enhancing the notification error in case of NULL as result of the allocation process.
 *
 * \param numberOfElements
 * number of elements to allocate
 * \param typePointer
 * type of the elements to be allocated
 * \return pointer to the allocated memory
 *
 */
void **AllocatorMallocTwoDimension(int64_t numberOfElements, int8_t typePointer);



/** \brief This function is a wrapper of the calloc function, enhancing the notification error in case of NULL as result of the allocation process.
 *
 * \param numberOfElements
 * number of elements to allocate
 * \param typePointer
 * type of the elements to be allocated
 * \return pointer to the allocated memory
 *
 */
void *AllocatorCalloc(int64_t numberOfElements, int8_t typePointer);



/** \brief This function is a wrapper of the calloc function to allocate an array of pointers, enhancing the notification error in case of NULL as result of the allocation process.
 *
 * \param numberOfElements
 * number of elements to allocate
 * \param typePointer
 * type of the elements to be allocated
 * \return pointer to the allocated memory
 *
 */
void **AllocatorCallocTwoDimension(int64_t numberOfElements, int8_t typePointer);


/** \brief This function is a wrapper of the realloc function, enhancing the notification error in case of NULL as result of the allocation process.
 *
 * \param arrayAllocated
 * pointer to the array to be reallocated
 * \param numberOfElements
 * number of elements to allocate
 * \param typePointer
 * type of the elements to be allocated
 * \return pointer to the allocated memory
 *
 */
void *AllocatorRealloc(void* arrayAllocated, uint64_t numberOfElements, int8_t typePointer);



/** \brief This function is a wrapper of the free function, enhancing the freeing process ensuring that the memory was released.
 *
 * \param arrayAllocated
 * pointer to the array to be reallocated
 *
 */
void AllocatorFree(void* arrayAllocated);

#endif // ALLOCATOR_H_INCLUDED
