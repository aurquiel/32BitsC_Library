#ifndef ALLOCATOR_H_INCLUDED
#define ALLOCATOR_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "header.h"
#include "error.h"


void *MallocAllocator(int64_t numberOfElements, int8_t typeData);
void **MallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typeData);
void *CallocAllocator(int64_t numberOfElements, int8_t typeData);
void **CallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typeData);
void *ReallocAllocator(void* arrayAllocated, uint64_t numberOfElements, int8_t typeData);
void AllocatorFree(void* arrayAllocated);

#endif // ALLOCATOR_H_INCLUDED
