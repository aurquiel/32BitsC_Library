#ifndef ARRAY_C_INCLUDED
#define ARRAY_C_INCLUDED

#include "array.h"

void InterchangeArrayGeneric(void* a, void *b, int64_t sizeA, int64_t sizeB, int8_t typePointer)
{
    if((sizeA <= 0) || (sizeB <= 0) || (sizeA != sizeB))
        exit(errorSizeArray);
    else
    {
        void *auxiliarArray;
        if(POINTER_CHAR == typePointer)
            auxiliarArray = (char*)CallocAllocator(sizeA,POINTER_CHAR);
        else if(POINTER_UNSIGNED_CHAR == typePointer)
            auxiliarArray = (unsigned char*)CallocAllocator(sizeA,POINTER_UNSIGNED_CHAR);
        else if(POINTER_INT8  == typePointer)
            auxiliarArray = (int8_t*)CallocAllocator(sizeA,POINTER_INT8);
        else if(POINTER_UNSIGNED_INT8 == typePointer)
            auxiliarArray = (uint8_t*)CallocAllocator(sizeA,POINTER_UNSIGNED_INT8);
        else if(POINTER_INT16 == typePointer)
            auxiliarArray = (int8_t*)CallocAllocator(sizeA,POINTER_INT16);
        else if(POINTER_UNSIGNED_INT16 == typePointer)
            auxiliarArray = (uint16_t*)CallocAllocator(sizeA,POINTER_UNSIGNED_INT16);
        else if(POINTER_INT32 == typePointer)
            auxiliarArray = (int32_t*)CallocAllocator(sizeA,POINTER_INT32);
        else if(POINTER_UNSIGNED_INT32 == typePointer)
            auxiliarArray = (uint32_t*)CallocAllocator(sizeA,POINTER_UNSIGNED_INT32);
        else if(POINTER_INT64 == typePointer)
            auxiliarArray = (int64_t*)CallocAllocator(sizeA,POINTER_INT64);
        else if(POINTER_UNSIGNED_INT64 == typePointer)
            auxiliarArray = (uint64_t*)CallocAllocator(sizeA,POINTER_UNSIGNED_INT64);
        else if(POINTER_FLOAT == typePointer)
            auxiliarArray = (float*)CallocAllocator(sizeA,POINTER_FLOAT);
        else if(POINTER_DOUBLE == typePointer)
            auxiliarArray = (double*)CallocAllocator(sizeA,POINTER_DOUBLE);
        else
            exit(errorTypeArray);

        memcpy(auxiliarArray,a,sizeA);
        memcpy(a,b,sizeA);
        memcpy(b,auxiliarArray,sizeA);

        AllocatorFree(auxiliarArray);
    }
}

void CopyArray(void* arrayDestiny, void* arraySource, int64_t numberBytes, int8_t typeData)
{
    if(numberBytes <= 0)
        exit(errorSizeArray);
    else

    if(typeData == CHAR)
        memcpy((char*)arrayDestiny, (char*)arraySource, numberBytes);
    else if (typeData == UNSIGNED_CHAR)
        memcpy((unsigned char*)arrayDestiny, (unsigned char*)arraySource, numberBytes);
    else if(typeData == INT8)
        memcpy((int8_t*)arrayDestiny, (int8_t*)arraySource, numberBytes);
    else if(typeData == UNSIGNED_INT8)
        memcpy((uint8_t*)arrayDestiny, (uint8_t*)arraySource, numberBytes);
    else if(typeData == INT16)
        memcpy((int16_t*)arrayDestiny, (int16_t*)arraySource, numberBytes);
    else if(typeData == UNSIGNED_INT16)
        memcpy((uint16_t*)arrayDestiny, (uint16_t*)arraySource, numberBytes);
    else if(typeData == INT32)
        memcpy((int32_t*)arrayDestiny, (int32_t*)arraySource, numberBytes);
    else if(typeData == UNSIGNED_INT32)
        memcpy((uint32_t*)arrayDestiny, (uint32_t*)arraySource, numberBytes);
    else if(typeData == FLOAT)
        memcpy((float*)arrayDestiny, (float*)arraySource, numberBytes);
    else if(typeData == DOUBLE)
        memcpy((double*)arrayDestiny, (double*)arraySource, numberBytes);
    else
        exit(errorTypeArray);
}

void ConcatenateCharArray(void* arrayDestiny, void* arraySource, int8_t typeData)
{
    uint64_t lengthArrayDestiny = (uint64_t)strlen((char*)arrayDestiny);
    uint64_t lengthArraySource = (uint64_t)strlen((char*)arraySource);

    if(typeData == CHAR)
        memcpy((char*)arrayDestiny + lengthArrayDestiny, (unsigned char*)arraySource, lengthArraySource);
    else if(typeData == UNSIGNED_CHAR)
        memcpy((unsigned char*)arrayDestiny + lengthArrayDestiny, (unsigned char*)arraySource, lengthArraySource);
    else
        exit(errorTypeArray);
}

void ClearArray(void* arrayDestiny, int64_t numberBytes, int8_t typeData)
{
    if(numberBytes <= 0)
        exit(errorSizeArray);
    else

    if(typeData == CHAR)
        memset((char*)arrayDestiny, '\0', numberBytes);
    else if (typeData == UNSIGNED_CHAR)
        memset((unsigned char*)arrayDestiny, '\0', numberBytes);
    else if(typeData == INT8)
        memset((int8_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == UNSIGNED_INT8)
        memset((uint8_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == INT16)
        memset((int16_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == UNSIGNED_INT16)
        memset((uint16_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == INT32)
        memset((int32_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == UNSIGNED_INT32)
        memset((uint32_t*)arrayDestiny, '\0', numberBytes);
    else if(typeData == FLOAT)
        memset((float*)arrayDestiny, '\0', numberBytes);
    else if(typeData == DOUBLE)
        memset((double*)arrayDestiny, '\0', numberBytes);
    else
        exit(errorTypeArray);
}

void SetArrayCharacter(void* arrayDestiny, unsigned char character, int64_t numberBytes, int8_t typeData)
{
    if(numberBytes <= 0)
        exit(errorSizeArray);
    else

    if(typeData == CHAR)
        for (int64_t i = 0; i<numberBytes; i++)
            if( *(char*)(arrayDestiny+i) != '\0')
                memset( (char*)(arrayDestiny + i), character, 1);

    else if (typeData == UNSIGNED_CHAR)
        for (int64_t i = 0; i<numberBytes; i++)
            if( *(unsigned char*)(arrayDestiny+i) != '\0')
                memset((unsigned char*)arrayDestiny + i, character, 1);

    else if(typeData == INT8)
        memset((int8_t*)arrayDestiny, character, numberBytes);
    else if(typeData == UNSIGNED_INT8)
        memset((uint8_t*)arrayDestiny, character, numberBytes);
    else if(typeData == INT16)
        memset((int16_t*)arrayDestiny, character, numberBytes);
    else if(typeData == UNSIGNED_INT16)
        memset((uint16_t*)arrayDestiny, character, numberBytes);
    else if(typeData == INT32)
        memset((int32_t*)arrayDestiny, character, numberBytes);
    else if(typeData == UNSIGNED_INT32)
        memset((uint32_t*)arrayDestiny, character, numberBytes);
    else if(typeData == FLOAT)
        memset((float*)arrayDestiny, character, numberBytes);
    else if(typeData == DOUBLE)
        memset((double*)arrayDestiny, character, numberBytes);
    else
        exit(errorTypeArray);
}

void *FindArray(void* array, void *data, int64_t numberBytes, int8_t typeData)
{
    if(numberBytes <= 0)
        exit(errorSizeArray);
    else
    Data("\nData: %c\n", *(char*)data);
    if(typeData == CHAR)
        for(int64_t i = 0; i<numberBytes; i++)
        {
            printf("\nPalabra: %c\n", *(char*)array + i);

            if( (*(char*)array + i) == *((char*)data) )
                return (void*)(array + i);
        }


    else if(typeData == UNSIGNED_CHAR)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(unsigned char*)array + i) == *((unsigned char*)data) )
                return (void*)(array + i);

    else if(typeData == INT8)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(int8_t*)array + i) == *((int8_t*)data) )
                return (void*)(array + i);

    else if(typeData == UNSIGNED_INT8)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(uint8_t*)array + i) == *((uint8_t*)data))
                return (void*)(array + i);

    else if(typeData == INT16)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(int16_t*)array + i) == *((int16_t*)data))
                return (void*)(array +i);

    else if(typeData == UNSIGNED_INT16)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(uint16_t*)array + i) == *((uint16_t*)data) )
                return (void*)(array + i);

    else if(typeData == INT32)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(int32_t*)array + i) == *((int32_t*)data))
                return (void*)(array + i);

    else if(typeData == UNSIGNED_INT32)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(uint32_t*)array + i) == *((uint32_t*)data))
                return (void*)(array + i);

    else if(typeData == FLOAT)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(int64_t*)array + i) == *((int64_t*)data) )
                return (void*)(array + i);

    else if(typeData == DOUBLE)
        for(int64_t i = 0; i<numberBytes; i++)
            if( (*(uint64_t*)array + i) == *((uint64_t*)data) )
                return (void*)(array + i);
    else
        exit(errorTypeArray);
    return NULL;
}
#endif // ARRAY_C_INCLUDED
