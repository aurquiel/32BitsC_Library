#ifndef ARRAY_C_INCLUDED
#define ARRAY_C_INCLUDED

#include "array.h"

void InterchangeArrayGeneric(void* arrayA, int64_t sizeArrayA, void* arrayB, int64_t sizeArrayB, int8_t typeData)
{
    if((sizeArrayA <= 0) || (sizeArrayB <= 0) || (sizeArrayA != sizeArrayB))
    {
        exit(errorSizeArray);
    }

    void *auxiliarArray = CallocAllocator(sizeArrayA, typeData);

    CopyArray(auxiliarArray, sizeArrayA, arrayA, sizeArrayA, typeData);
    CopyArray(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData);
    CopyArray(arrayB, sizeArrayB, auxiliarArray, sizeArrayA, typeData);
    AllocatorFree(auxiliarArray);
}

void CopyArray(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData)
{
    if( (sizeArrayDestiny <= 0) || (sizeArraySource <= 0) || (sizeArrayDestiny < sizeArraySource) )
    {
        exit(errorSizeArray);
    }

    if(typeData == CHAR)
    {
        memcpy((char*)arrayDestiny, (char*)arraySource, sizeof(char)*sizeArraySource);
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        memcpy((unsigned char*)arrayDestiny, (unsigned char*)arraySource, sizeof(unsigned char)*sizeArraySource);
    }
    else if(typeData == INT8)
    {
        memcpy((int8_t*)arrayDestiny, (int8_t*)arraySource, sizeof(int8_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT8)
    {
        memcpy((uint8_t*)arrayDestiny, (uint8_t*)arraySource, sizeof(uint8_t)*sizeArraySource);
    }
    else if(typeData == INT16)
    {
        memcpy((int16_t*)arrayDestiny, (int16_t*)arraySource, sizeof(int16_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT16)
    {
        memcpy((uint16_t*)arrayDestiny, (uint16_t*)arraySource,  sizeof(uint16_t)*sizeArraySource);
    }
    else if(typeData == INT32)
    {
        memcpy((int32_t*)arrayDestiny, (int32_t*)arraySource,  sizeof(int32_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT32)
    {
        memcpy((uint32_t*)arrayDestiny, (uint32_t*)arraySource,  sizeof(uint32_t)*sizeArraySource);
    }
    else if(typeData == INT64)
    {
        memcpy((int64_t*)arrayDestiny, (int64_t*)arraySource,  sizeof(int64_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT64)
    {
        memcpy((uint64_t*)arrayDestiny, (uint64_t*)arraySource,  sizeof(uint64_t)*sizeArraySource);
    }
    else if(typeData == FLOAT)
    {
        memcpy((float*)arrayDestiny, (float*)arraySource,  sizeof(float)*sizeArraySource);
    }
    else if(typeData == DOUBLE)
    {
        memcpy((double*)arrayDestiny, (double*)arraySource,  sizeof(double)*sizeArraySource);
    }
    else
    {
        exit(errorTypeArray);
    }
}

void ConcatenateArray(void* arrayDestiny, int64_t sizeArrayDestiny, int64_t sizeArraySource, void* arraySource, int8_t typeData)
{
    if( (sizeArrayDestiny <= 0) || (sizeArraySource <= 0) || (sizeArrayDestiny < (sizeArrayDestiny + sizeArraySource)) )
    {
        exit(errorSizePrint);
    }

    if(typeData == CHAR)
    {
        memcpy((char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeArraySource);
    }
    else if(typeData == UNSIGNED_CHAR)
    {
        memcpy((unsigned char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeArraySource);
    }
    else
    {
        exit(errorTypeArray);
    }
}

void ClearArray(void* arrayDestiny, int64_t sizeArray, int8_t typeData)
{
    if(sizeArray <= 0)
    {
        exit(errorSizeArray);
    }

    char emptyEscapeChar = EMPTY_ESCAPE;

    if( (typeData == CHAR) || (typeData == UNSIGNED_CHAR) || (typeData == INT8) || (typeData == UNSIGNED_INT8) || (typeData == INT16) ||
        (typeData == UNSIGNED_INT16) || (typeData == INT32) || (typeData == UNSIGNED_INT32) || (typeData == INT64) || (typeData == UNSIGNED_INT64) ||
        (typeData == FLOAT) || (typeData == DOUBLE) )
    {
        SetArray(arrayDestiny, (void*)(&emptyEscapeChar), sizeArray, typeData);
    }
    else
    {
         exit(errorTypeArray);
    }
}

void SetArray(void* array, void *data, int64_t sizeArray, int8_t typeData)
{
    if(sizeArray <= 0)
    {
        exit(errorSizeArray);
    }

    if(typeData == CHAR)
    {
        memset( (char*)array, *((char*)data), sizeof(char)*sizeArray);
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        memset((unsigned char*)array, *((unsigned char*)data), sizeof(unsigned char)*sizeArray);
    }
    else if(typeData == INT8)
    {
        memset((int8_t*)array, *((int8_t*)data), sizeof(int8_t)*sizeArray);
    }
    else if(typeData == UNSIGNED_INT8)
    {
        memset((uint8_t*)array, *((uint8_t*)data), sizeof(uint8_t)*sizeArray);
    }
    else if(typeData == INT16)
    {
        memset((int16_t*)array, *((int16_t*)data), sizeof(int16_t)*sizeArray);
    }
    else if(typeData == UNSIGNED_INT16)
    {
        memset((uint16_t*)array, *((uint16_t*)data), sizeof(uint16_t)*sizeArray);
    }
    else if(typeData == INT32)
    {
        memset((int32_t*)array, *((int32_t*)data), sizeof(int32_t)*sizeArray);
    }
    else if(typeData == UNSIGNED_INT32)
    {
        memset((uint32_t*)array, *((uint32_t*)data), sizeof(uint32_t)*sizeArray);
    }
    else if(typeData == INT64)
    {
        memset((int64_t*)array, *((int64_t*)data), sizeof(int64_t)*sizeArray);
    }
    else if(typeData == UNSIGNED_INT64)
    {
        memset((uint64_t*)array, *((uint64_t*)data), sizeof(uint64_t)*sizeArray);
    }
    else if(typeData == FLOAT)
    {
        memset((float*)array, *((float*)data), sizeof(float)*sizeArray);
    }
    else if(typeData == DOUBLE)
    {
        memset((double*)array, *((double*)data), sizeof(double)*sizeArray);
    }
    else
    {
        exit(errorTypeArray);
    }
}

int64_t compareFunction(const void * a, const void * b) {
   return ( *(int64_t*)a - *(int64_t*)b );
}

void *FindArray(void* array, void *data, int64_t sizeArray, int8_t typeData)
{
    if(sizeArray <= 0)
    {
        exit(errorSizeArray);
    }

    int numberBytes = 0;

    if(typeData == CHAR)
    {
       numberBytes = sizeof(char);
    }
    else if(typeData == UNSIGNED_CHAR)
    {
       numberBytes = sizeof(unsigned char);
    }
    else if(typeData == INT8)
    {
       numberBytes = sizeof(int8_t);
    }
    else if(typeData == UNSIGNED_INT8)
    {
       numberBytes = sizeof(uint8_t);
    }
    else if(typeData == INT16)
    {
       numberBytes = sizeof(int16_t);
    }
    else if(typeData == UNSIGNED_INT16)
    {
        numberBytes = sizeof(uint16_t);
    }
    else if(typeData == INT32)
    {
        numberBytes = sizeof(int32_t);
    }
    else if(typeData == UNSIGNED_INT32)
    {
        numberBytes = sizeof(uint32_t);
    }
    else if(typeData == INT64)
    {
        numberBytes = sizeof(int64_t);
    }
    else if(typeData == UNSIGNED_INT64)
    {
        numberBytes = sizeof(uint64_t);
    }
    else if(typeData == FLOAT)
    {
       numberBytes = sizeof(float);
    }
    else if(typeData == DOUBLE)
    {
        numberBytes = sizeof(double);
    }
    else
    {
        exit(errorTypeArray);
    }

    return bsearch(data, array, sizeArray, numberBytes, compareFunction);
}

uint64_t FindNumberRepetitionsArray(void* array, void *data, int64_t sizeArray, int8_t typeData)
{
    uint64_t numberRepetitions = 0;

    if(typeData == CHAR)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        unsigned char *positionFound = (unsigned char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (unsigned char*)FindArray((unsigned char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == INT8)
    {
        int8_t *positionFound = (int8_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int8_t*)FindArray((int8_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        uint8_t *positionFound = (uint8_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint8_t*)FindArray((uint8_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == INT16)
    {
        int16_t *positionFound = (int16_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int16_t*)FindArray((int16_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        uint16_t *positionFound = (uint16_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint16_t*)FindArray((uint16_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == INT32)
    {
        int32_t *positionFound = (int32_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int32_t*)FindArray((int32_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == INT64)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == FLOAT)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(typeData == DOUBLE)
    {
        char *positionFound = (char*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)FindArray((char*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else
    {
        exit(errorTypeArray);
    }

    return numberRepetitions;
}

void EndArrayChar(void* array, int64_t sizeArray, int8_t typeData)
{
    --sizeArray; //position of the \0 character
    if(typeData == CHAR)
    {
        memset((char*)(array + sizeArray), EMPTY_ESCAPE, 1);
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        memset((unsigned char*)(array + sizeArray), EMPTY_ESCAPE, 1);
    }
}
#endif // ARRAY_C_INCLUDED
