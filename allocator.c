#include "allocator.h"

void *AllocatorMalloc(int64_t numberOfElements, int8_t typePointer)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
        exit(errorSizeAllocator);
    else
    {
        if(charPointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(char));
        else if(unsignedCharPointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(unsigned char));
        else if(int8Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int8_t));
        else if(unsignedInt8Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint8_t));
        else if(int16Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int16_t));
        else if(unsignedInt16Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint16_t));
        else if(int32Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int32_t));
        else if(unsignedInt32Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint32_t));
        else if(int64Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int64_t));
        else if(unsignedInt64Pointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint64_t));
        else if(floatPointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(float));
        else if(doublePointer == typePointer)
            auxiliarMemory = (void*)malloc(numberOfElements*sizeof(double));
        else
            exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
        exit(errorNoAllocate);
    else
        return auxiliarMemory;

    return NULL;
}

void **AllocatorMallocTwoDimension(int64_t numberOfElements, int8_t typePointer)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
        exit(errorSizeAllocator);
    else
    {
        if(charPointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(char*));
        else if(unsignedCharPointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(unsigned char*));
        else if(int8Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int8_t*));
        else if(unsignedInt8Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint8_t*));
        else if(int16Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int16_t*));
        else if(unsignedInt16Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint16_t*));
        else if(int32Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int32_t*));
        else if(unsignedInt32Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint32_t*));
        else if(int64Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int64_t*));
        else if(unsignedInt64Pointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint64_t*));
        else if(floatPointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(float*));
        else if(doublePointer == typePointer)
            auxiliarMemory = (void**)malloc(numberOfElements*sizeof(double*));
        else
            exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
        exit(errorNoAllocate);
    else
        return auxiliarMemory;

    return NULL;
}

void *AllocatorCalloc(int64_t numberOfElements, int8_t typePointer)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
        exit(errorSizeAllocator);
    else
    {
        if(charPointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(char));
        else if(unsignedCharPointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(unsigned char));
        else if(int8Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int8_t));
        else if(unsignedInt8Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint8_t));
        else if(int16Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int16_t));
        else if(unsignedInt16Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint16_t));
        else if(int32Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int32_t));
        else if(unsignedInt32Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint32_t));
        else if(int64Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int64_t));
        else if(unsignedInt64Pointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint64_t));
        else if(floatPointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(float));
        else if(doublePointer == typePointer)
            auxiliarMemory = (void*)calloc(numberOfElements,sizeof(double));
        else
            exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
        exit(errorNoAllocate);
    else
        return auxiliarMemory;

    return NULL;
}

void **AllocatorCallocTwoDimension(int64_t numberOfElements, int8_t typePointer)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
        exit(errorSizeAllocator);
    else
    {
        if(charPointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(char*));
        else if(unsignedCharPointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(unsigned char*));
        else if(int8Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int8_t*));
        else if(unsignedInt8Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint8_t*));
        else if(int16Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int16_t*));
        else if(unsignedInt16Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint16_t*));
        else if(int32Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int32_t*));
        else if(unsignedInt32Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint32_t*));
        else if(int64Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int64_t*));
        else if(unsignedInt64Pointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint64_t*));
        else if(floatPointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(float*));
        else if(doublePointer == typePointer)
            auxiliarMemory = (void**)calloc(numberOfElements,sizeof(double*));
        else
            exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
        exit(errorNoAllocate);
    else
        return auxiliarMemory;

    return NULL;
}

void *AllocatorRealloc(void* arrayAllocated, uint64_t numberOfElements, int8_t typePointer)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
        exit(errorSizeAllocator);
    else
    {
        if(charPointer == typePointer)
            auxiliarMemory = (void*)realloc((char*)arrayAllocated,numberOfElements*sizeof(char));
        else if(unsignedCharPointer == typePointer)
            auxiliarMemory = (void*)realloc((unsigned char*)arrayAllocated,numberOfElements*sizeof(unsigned char));
        else if(int8Pointer == typePointer)
            auxiliarMemory = (void*)realloc((int8_t*)arrayAllocated,numberOfElements*sizeof(int8_t));
        else if(unsignedInt8Pointer == typePointer)
            auxiliarMemory = (void*)realloc((uint8_t*)arrayAllocated,numberOfElements*sizeof(uint8_t));
        else if(int16Pointer == typePointer)
            auxiliarMemory = (void*)realloc((int16_t*)arrayAllocated,numberOfElements*sizeof(int16_t));
        else if(unsignedInt16Pointer == typePointer)
            auxiliarMemory = (void*)realloc((uint16_t*)arrayAllocated,numberOfElements*sizeof(uint16_t));
        else if(int32Pointer == typePointer)
            auxiliarMemory = (void*)realloc((int32_t*)arrayAllocated,numberOfElements*sizeof(int32_t));
        else if(unsignedInt32Pointer == typePointer)
            auxiliarMemory = (void*)realloc((uint32_t*)arrayAllocated,numberOfElements*sizeof(uint32_t));
        else if(int64Pointer == typePointer)
            auxiliarMemory = (void*)realloc((int64_t*)arrayAllocated,numberOfElements*sizeof(int64_t));
        else if(unsignedInt64Pointer == typePointer)
            auxiliarMemory = (void*)realloc((uint64_t*)arrayAllocated,numberOfElements*sizeof(uint64_t));
        else if(floatPointer == typePointer)
            auxiliarMemory = (void*)realloc((float*)arrayAllocated,numberOfElements*sizeof(float));
        else if(doublePointer == typePointer)
            auxiliarMemory = (void*)realloc((double*)arrayAllocated,numberOfElements*sizeof(double));
        else
            exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
        exit(errorNoAllocate);
    else
        return auxiliarMemory;

    return NULL;
}

void AllocatorFree(void* arrayAllocated)
{
    free(arrayAllocated);
    free(arrayAllocated);
}
