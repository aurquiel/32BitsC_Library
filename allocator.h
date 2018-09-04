#ifndef ALLOCATOR_H_INCLUDED
#define ALLOCATOR_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "header.h"
#include "error.h"


void *MallocAllocator(int64_t numberOfElements, int8_t typePointer);
void **MallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typePointer);
void *CallocAllocator(int64_t numberOfElements, int8_t typePointer);
void **CallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typePointer);
void *ReallocAllocator(void* arrayAllocated, uint64_t numberOfElements, int8_t typePointer);
void AllocatorFree(void* arrayAllocated);

#endif // ALLOCATOR_H_INCLUDED
