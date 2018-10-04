#ifndef ALLOCATOR_H_INCLUDED
#define ALLOCATOR_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include "header.h"
#include "error.h"

#define AllocatorMalloc(numberOfElements, typeData) _AllocatorMalloc(numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AllocatorMallocTwoDimension(numberOfElements, typeData) _AllocatorMallocTwoDimension(numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AllocatorCalloc(numberOfElements, typeData) _AllocatorCalloc(numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AllocatorCallocTwoDimension(numberOfElements, typeData) _AllocatorCallocTwoDimension(numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AllocatorCallocTwoDimension(numberOfElements, typeData) _AllocatorCallocTwoDimension(numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)
#define AllocatorRealloc(arrayAllocated, numberOfElements, typeData) _AllocatorRealloc(arrayAllocated, numberOfElements, typeData, __FILE__, __FUNCTION__, __LINE__)


void* _AllocatorMalloc(const uint32_t numberOfElements, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void** _AllocatorMallocTwoDimension(const uint32_t numberOfElements, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void* _AllocatorCalloc(const uint32_t numberOfElements, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void** _AllocatorCallocTwoDimension(const uint32_t numberOfElements, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void* _AllocatorRealloc(void* arrayAllocated, const uint32_t numberOfElements, const int8_t typeData, const char* fileName, const char* functionName, const uint32_t lineNumber);
void AllocatorFree(void* arrayAllocated);

#endif // ALLOCATOR_H_INCLUDED
