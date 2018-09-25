#include "allocator.h"

void *MallocAllocator(int64_t numberOfElements, int8_t typeData)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
    {
        exit(errorSizeAllocator);
    }
    if(CHAR == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(char));
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(unsigned char));
    }
    else if(INT8  == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int8_t));
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint8_t));
    }
    else if(INT16 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int16_t));
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint16_t));
    }
    else if(INT32 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int32_t));
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint32_t));
    }
    else if(INT64 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(int64_t));
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(uint64_t));
    }
    else if(FLOAT == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(float));
    }
    else if(DOUBLE == typeData)
    {
        auxiliarMemory = (void*)malloc(numberOfElements*sizeof(double));
    }
    else
    {
        exit(errorTypeAllocator);
    }


    if(auxiliarMemory == NULL)
    {
        exit(errorNoAllocate);
    }
    else
    {
        return auxiliarMemory;
    }

    return NULL;
}

void **MallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typeData)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
    {
        exit(errorSizeAllocator);
    }

    if(CHAR == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(char*));
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(unsigned char*));
    }
    else if(INT8  == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int8_t*));
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint8_t*));
    }
    else if(INT16 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int16_t*));
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint16_t*));
    }
    else if(INT32 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int32_t*));
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint32_t*));
    }
    else if(INT64 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(int64_t*));
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(uint64_t*));
    }
    else if(FLOAT == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(float*));
    }
    else if(DOUBLE == typeData)
    {
        auxiliarMemory = (void**)malloc(numberOfElements*sizeof(double*));
    }
    else
    {
        exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
    {
        exit(errorNoAllocate);
    }
    else
    {
        return auxiliarMemory;
    }

    return NULL;
}

void *CallocAllocator(int64_t numberOfElements, int8_t typeData)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
    {
        exit(errorSizeAllocator);
    }

    if(CHAR == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(char));
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(unsigned char));
    }
    else if(INT8  == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int8_t));
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint8_t));
    }
    else if(INT16 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int16_t));
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint16_t));
    }
    else if(INT32 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int32_t));
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint32_t));
    }
    else if(INT64 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(int64_t));
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(uint64_t));
    }
    else if(FLOAT == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(float));
    }
    else if(DOUBLE == typeData)
    {
        auxiliarMemory = (void*)calloc(numberOfElements,sizeof(double));
    }
    else
    {
        exit(errorTypeAllocator);
    }


    if(auxiliarMemory == NULL)
    {
        exit(errorNoAllocate);
    }
    else
    {
        return auxiliarMemory;
    }

    return NULL;
}

void **CallocAllocatorTwoDimension(int64_t numberOfElements, int8_t typeData)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
    {
        exit(errorSizeAllocator);
    }

    if(CHAR == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(char*));
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(unsigned char*));
    }
    else if(INT8  == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int8_t*));
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint8_t*));
    }
    else if(INT16 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int16_t*));
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint16_t*));
    }
    else if(INT32 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int32_t*));
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint32_t*));
    }
    else if(INT64 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(int64_t*));
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(uint64_t*));
    }
    else if(FLOAT == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(float*));
    }
    else if(DOUBLE == typeData)
    {
        auxiliarMemory = (void**)calloc(numberOfElements,sizeof(double*));
    }
    else
    {
        exit(errorTypeAllocator);
    }

    if(auxiliarMemory == NULL)
    {
        exit(errorNoAllocate);
    }
    else
    {
        return auxiliarMemory;
    }

    return NULL;
}

void *ReallocAllocator(void* arrayAllocated, uint64_t numberOfElements, int8_t typeData)
{
    void* auxiliarMemory = NULL;

    if(numberOfElements <= 0)
    {
        exit(errorSizeAllocator);
    }

    if(CHAR == typeData)
    {
        auxiliarMemory = (void*)realloc((char*)arrayAllocated,numberOfElements*sizeof(char));
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        auxiliarMemory = (void*)realloc((unsigned char*)arrayAllocated,numberOfElements*sizeof(unsigned char));
    }
    else if(INT8  == typeData)
    {
        auxiliarMemory = (void*)realloc((int8_t*)arrayAllocated,numberOfElements*sizeof(int8_t));
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        auxiliarMemory = (void*)realloc((uint8_t*)arrayAllocated,numberOfElements*sizeof(uint8_t));
    }
    else if(INT16 == typeData)
    {
        auxiliarMemory = (void*)realloc((int16_t*)arrayAllocated,numberOfElements*sizeof(int16_t));
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        auxiliarMemory = (void*)realloc((uint16_t*)arrayAllocated,numberOfElements*sizeof(uint16_t));
    }
    else if(INT32 == typeData)
    {
        auxiliarMemory = (void*)realloc((int32_t*)arrayAllocated,numberOfElements*sizeof(int32_t));
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        auxiliarMemory = (void*)realloc((uint32_t*)arrayAllocated,numberOfElements*sizeof(uint32_t));
    }
    else if(INT64 == typeData)
    {
        auxiliarMemory = (void*)realloc((int64_t*)arrayAllocated,numberOfElements*sizeof(int64_t));
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        auxiliarMemory = (void*)realloc((uint64_t*)arrayAllocated,numberOfElements*sizeof(uint64_t));
    }
    else if(FLOAT == typeData)
    {
        auxiliarMemory = (void*)realloc((float*)arrayAllocated,numberOfElements*sizeof(float));
    }
    else if(DOUBLE == typeData)
    {
        auxiliarMemory = (void*)realloc((double*)arrayAllocated,numberOfElements*sizeof(double));
    }
    else
    {
        exit(errorTypeAllocator);
    }


    if(auxiliarMemory == NULL)
    {
        exit(errorNoAllocate);
    }
    else
    {
        return auxiliarMemory;
    }

    return NULL;
}

void AllocatorFree(void* arrayAllocated)
{
    free(arrayAllocated);
}
