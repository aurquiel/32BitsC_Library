#ifndef ALLOCATOR_H_INCLUDED
#define ALLOCATOR_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "header.h"
#include "error.h"


void *AllocatorMalloc(int64_t numberOfElements, int8_t typeData);
void **AllocatorMallocTwoDimension(int64_t numberOfElements, int8_t typeData);
void *AllocatorCalloc(int64_t numberOfElements, int8_t typeData);
void **AllocatorCallocTwoDimension(int64_t numberOfElements, int8_t typeData);
void *AllocatorReallocr(void* arrayAllocated, uint64_t numberOfElements, int8_t typeData);
void AllocatorFree(void* arrayAllocated);

#endif // ALLOCATOR_H_INCLUDED
