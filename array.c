#ifndef ARRAY_C_INCLUDED
#define ARRAY_C_INCLUDED

#include "array.h"
#include "radixSort.h"
#include "math.h"

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

void ConcatenateArray(void* arrayDestiny, int64_t sizeArrayDestiny, void* arraySource, int64_t sizeArraySource, int8_t typeData)
{
    if( (sizeArrayDestiny <= 0) )
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
    else if(typeData == INT8)
    {
        memcpy((unsigned char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeof(int8_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT8)
    {
        memcpy((uint8_t*)arrayDestiny + sizeArrayDestiny, (uint8_t*)arraySource, sizeof(uint8_t)*sizeArraySource);
    }
    else if(typeData == INT16)
    {
        memcpy((int16_t*)arrayDestiny + sizeArrayDestiny, (int16_t*)arraySource, sizeof(int16_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT16)
    {
        memcpy((uint16_t*)arrayDestiny + sizeArrayDestiny, (uint16_t*)arraySource, sizeof(uint16_t)*sizeArraySource);
    }
    else if(typeData == INT32)
    {
        memcpy((int32_t*)arrayDestiny + sizeArrayDestiny, (int32_t*)arraySource, sizeof(int32_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT32)
    {
        memcpy((uint32_t*)arrayDestiny + sizeArrayDestiny, (uint32_t*)arraySource, sizeof(uint32_t)*sizeArraySource);
    }
    else if(typeData == INT64)
    {
        memcpy((int64_t*)arrayDestiny + sizeArrayDestiny, (int64_t*)arraySource, sizeof(int64_t)*sizeArraySource);
    }
    else if(typeData == UNSIGNED_INT64)
    {
        memcpy((uint64_t*)arrayDestiny + sizeArrayDestiny, (uint64_t*)arraySource, sizeof(uint64_t)*sizeArraySource);
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

    const char emptyEscape = EMPTY_ESCAPE;
    const int8_t zero = ZERO;

    if( (typeData == CHAR) || (typeData == UNSIGNED_CHAR))
    {
        SetArray(arrayDestiny, (void*)(&emptyEscape), sizeArray, typeData);
    }
    else if( (typeData == INT8) || (typeData == UNSIGNED_INT8) || (typeData == INT16) || (typeData == UNSIGNED_INT16) ||
        (typeData == INT32) || (typeData == UNSIGNED_INT32) || (typeData == INT64) || (typeData == UNSIGNED_INT64) ||
        (typeData == FLOAT) || (typeData == DOUBLE) )
    {
        SetArray(arrayDestiny, (void*)(&zero), sizeArray, typeData);
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

void *FindArray(void* array, void *data, int64_t sizeArray, int8_t typeData)
{
    if(sizeArray <= 0)
    {
        exit(errorSizeArray);
    }

    if(typeData == CHAR)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((char*)array + i) == *((char*)data))
            {
                return ((char*)array + i);
            }
        }
    }
    else if(typeData == UNSIGNED_CHAR)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((unsigned char*)array + i) == *((unsigned char*)data))
            {
                return ((unsigned char*)array + i);
            }
        }
    }
    else if(typeData == INT8)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int8_t*)array + i) == *((int8_t*)data))
            {
                return ((int8_t*)array + i);
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint8_t*)array + i) == *((uint8_t*)data))
            {
                return ((uint8_t*)array + i);
            }
        }
    }
    else if(typeData == INT16)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int16_t*)array + i) == *((int16_t*)data))
            {
                return ((int16_t*)array + i);
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint16_t*)array + i) == *((uint16_t*)data))
            {
                return ((uint16_t*)array + i);
            }
        }
    }
    else if(typeData == INT32)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int32_t*)array + i) == *((int32_t*)data))
            {
                return ((int32_t*)array + i);
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint32_t*)array + i) == *((uint32_t*)data))
            {
                return ((uint32_t*)array + i);
            }
        }
    }
    else if(typeData == INT64)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int64_t*)array + i) == *((int64_t*)data))
            {
                return ((int64_t*)array + i);
            }
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint64_t*)array + i) == *((uint64_t*)data))
            {
                return ((uint64_t*)array + i);
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((float*)array + i) == *((float*)data))
            {
                return ((float*)array + i);
            }
        }
    }
    else if(typeData == DOUBLE)
    {
        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((double*)array + i) == *((double*)data))
            {
                return ((double*)array + i);
            }
        }
    }
    else
    {
        exit(errorTypeArray);
    }

    return NULL;
}

void *FindArrayMaxValue(void* array, int64_t sizeArray, int8_t typeData)
{
    if(sizeArray <= 0)
    {
        exit(errorSizeArray);
    }

    if(typeData == CHAR)
    {
        char *maxValue = (char*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((char*)array + i) > *maxValue)
            {
                maxValue = ((char*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == UNSIGNED_CHAR)
    {
        unsigned char *maxValue = (unsigned char*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((unsigned char*)array + i) > *maxValue)
            {
                maxValue = ((unsigned char*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == INT8)
    {
        int8_t *maxValue = (int8_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int8_t*)array + i) > *maxValue)
            {
                maxValue = ((int8_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == UNSIGNED_INT8)
    {
        uint8_t *maxValue = (uint8_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint8_t*)array + i) > *maxValue)
            {
                maxValue = ((uint8_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == INT16)
    {
        int16_t *maxValue = (int16_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int16_t*)array + i) > *maxValue)
            {
                maxValue = ((int16_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == UNSIGNED_INT16)
    {
        uint16_t *maxValue = (uint16_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint16_t*)array + i) > *maxValue)
            {
                maxValue = ((uint16_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == INT32)
    {
        int32_t *maxValue = (int32_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int32_t*)array + i) > *maxValue)
            {
                maxValue = ((int32_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == UNSIGNED_INT32)
    {
        uint32_t *maxValue = (uint32_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint32_t*)array + i) > *maxValue)
            {
                maxValue = ((uint32_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == INT64)
    {
        int64_t *maxValue = (int64_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((int64_t*)array + i) > *maxValue)
            {
                maxValue = ((int64_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == UNSIGNED_INT64)
    {
        uint64_t *maxValue = (uint64_t*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((uint64_t*)array + i) > *maxValue)
            {
                maxValue = ((uint64_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == FLOAT)
    {
        float *maxValue = (float*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((float*)array + i) > *maxValue)
            {
                maxValue = ((float*)array + i);
            }
        }

        return maxValue;
    }
    else if(typeData == DOUBLE)
    {
        double *maxValue = (double*)array;

        for(int64_t i = 0; i<sizeArray; i++)
        {
            if( *((double*)array + i) > *maxValue)
            {
                maxValue = ((double*)array + i);
            }
        }

        return maxValue;
    }
    else
    {
        exit(errorTypeArray);
    }

    return NULL;
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
            nextSizeArray = (sizeArray - ((char*)positionFound - (char*)array));
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
            nextSizeArray = (sizeArray - ((unsigned char*)positionFound - (unsigned char*)array));
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
            nextSizeArray = (sizeArray - ((int8_t*)positionFound - (int8_t*)array));
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
            nextSizeArray = (sizeArray - ((uint8_t*)positionFound - (uint8_t*)array));
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
            nextSizeArray = (sizeArray - ((int16_t*)positionFound - (int16_t*)array));
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
            nextSizeArray = (sizeArray - ((uint16_t*)positionFound - (uint16_t*)array));
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
        uint32_t *positionFound = (uint32_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint32_t*)FindArray((uint32_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((uint32_t*)positionFound - (uint32_t*)array));
        }
    }
    else if(typeData == INT64)
    {
        int64_t *positionFound = (int64_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int64_t*)FindArray((int64_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int64_t*)positionFound - (int64_t*)array));
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        uint64_t *positionFound = (uint64_t*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint64_t*)FindArray((uint64_t*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((uint64_t*)positionFound - (uint64_t*)array));
        }
    }
    else if(typeData == FLOAT)
    {
        float *positionFound = (float*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (float*)FindArray((float*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((float*)positionFound - (float*)array));
        }
    }
    else if(typeData == DOUBLE)
    {
        double *positionFound = (double*)array;
        int64_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (double*)FindArray((double*)positionFound, data, nextSizeArray, typeData))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((double*)positionFound - (double*)array));
        }
    }
    else
    {
        exit(errorTypeArray);
    }

    return numberRepetitions;
}

void RadixSort(void *array, int64_t sizeArray, int8_t typeData)
{
    if( (sizeArray <= 0) )
    {
        exit(errorSizePrint);
    }

    if(typeData == CHAR)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,char,typeData);
    }
    else if(typeData == UNSIGNED_CHAR)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,unsigned char,typeData);
    }
    else if(typeData == INT8)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,int8_t,typeData);
    }
    else if(typeData == UNSIGNED_INT8)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,uint8_t,typeData);
    }
    else if(typeData == INT16)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,int16_t,typeData);
    }
    else if(typeData == UNSIGNED_INT16)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,uint16_t,typeData);
    }
    else if(typeData == INT32)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,int32_t,typeData);
    }
    else if(typeData == UNSIGNED_INT32)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,uint32_t,typeData);
    }
    else if(typeData == INT64)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,int64_t,typeData);
    }
    else if(typeData == UNSIGNED_INT64)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,uint64_t,typeData);
    }
    else if(typeData == FLOAT)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,float,typeData);
    }
    else if(typeData == DOUBLE)
    {
        RADIX_SORT_OPERATIONS(array,sizeArray,double,typeData);
    }
    else
    {
        exit(errorTypeArray);
    }

}

void EndArrayChar(void* array, int64_t sizeArray, int8_t typeData)
{
    --sizeArray; //position of the \0 character
    if(typeData == CHAR)
    {
        memset(((char*)array + sizeArray), EMPTY_ESCAPE, 1);
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        memset(((unsigned char*)array + sizeArray), EMPTY_ESCAPE, 1);
    }
}

void RandomArrayGenerator(void* array, int64_t sizeArray, void* lowerLimit, void* upperLimit, int8_t typeData)
{
    if( (sizeArray <= 0) )
    {
        exit(errorSizePrint);
    }
    srand(time(NULL));

    if(typeData == CHAR)
    {
        if( *((char*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((char*)array + i) = *((char*)lowerLimit) + (char)(rand()%( *((char*)upperLimit) + 1 - *((char*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((char*)array + i) = (char)(rand()%(*((char*)upperLimit) + 1));
                }
                else
                {
                    *((char*)array + i) = -((char)(rand()%(*((char*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == UNSIGNED_CHAR)
    {
        if( *((unsigned char*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((unsigned char*)array + i) = *((unsigned char*)lowerLimit) + (unsigned char)(rand()%( *((unsigned char*)upperLimit) + 1 - *((unsigned char*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((unsigned char*)array + i) = (unsigned char)(rand()%(*((unsigned char*)upperLimit) + 1));
                }
                else
                {
                    *((unsigned char*)array + i) = -((unsigned char)(rand()%(*((unsigned char*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == INT8)
    {
        if( *((int8_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((int8_t*)array + i) = *((int8_t*)lowerLimit) + (int8_t)(rand()%( *((int8_t*)upperLimit) + 1 - *((int8_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((int8_t*)array + i) = (int8_t)(rand()%(*((int8_t*)upperLimit) + 1));
                }
                else
                {
                    *((int8_t*)array + i) = -((int8_t)(rand()%(*((int8_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == UNSIGNED_INT8)
    {
        if( *((uint8_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((uint8_t*)array + i) = *((uint8_t*)lowerLimit) + (uint8_t)(rand()%( *((uint8_t*)upperLimit) + 1 - *((uint8_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((uint8_t*)array + i) = (uint8_t)(rand()%(*((uint8_t*)upperLimit) + 1));
                }
                else
                {
                    *((uint8_t*)array + i) = -((uint8_t)(rand()%(*((uint8_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == INT16)
    {
        if( *((int16_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((int16_t*)array + i) = *((int16_t*)lowerLimit) + (int16_t)(rand()%( *((int16_t*)upperLimit) + 1 - *((int16_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((int16_t*)array + i) = (int16_t)(rand()%(*((int16_t*)upperLimit) + 1));
                }
                else
                {
                    *((int16_t*)array + i) = -((int16_t)(rand()%(*((int16_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == UNSIGNED_INT16)
    {
        if( *((uint16_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((uint16_t*)array + i) = *((uint16_t*)lowerLimit) + (uint16_t)(rand()%( *((uint16_t*)upperLimit) + 1 - *((uint16_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((uint16_t*)array + i) = (uint16_t)(rand()%(*((uint16_t*)upperLimit) + 1));
                }
                else
                {
                    *((uint16_t*)array + i) = -((uint16_t)(rand()%(*((uint16_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == INT32)
    {
        if( *((int32_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((int32_t*)array + i) = *((int32_t*)lowerLimit) + (int32_t)(rand()%( *((int32_t*)upperLimit) + 1 - *((int32_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((int32_t*)array + i) = (int32_t)(rand()%(*((int32_t*)upperLimit) + 1));
                }
                else
                {
                    *((int32_t*)array + i) = -((int32_t)(rand()%(*((int32_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == UNSIGNED_INT32)
    {
        if( *((uint32_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((uint32_t*)array + i) = *((uint32_t*)lowerLimit) + (uint32_t)(rand()%( *((uint32_t*)upperLimit) + 1 - *((uint32_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((uint32_t*)array + i) = (uint32_t)(rand()%(*((uint32_t*)upperLimit) + 1));
                }
                else
                {
                    *((uint32_t*)array + i) = -((uint32_t)(rand()%(*((uint32_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == INT64)
    {
        if( *((int64_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((int64_t*)array + i) = *((int64_t*)lowerLimit) + (int64_t)(rand()%( *((int64_t*)upperLimit) + 1 - *((int64_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((int64_t*)array + i) = (int64_t)(rand()%(*((int64_t*)upperLimit) + 1));
                }
                else
                {
                    *((int64_t*)array + i) = -((int64_t)(rand()%(*((int64_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == UNSIGNED_INT64)
    {
        if( *((uint64_t*)lowerLimit) >= 0)
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                *((uint64_t*)array + i) = *((uint64_t*)lowerLimit) + (uint64_t)(rand()%( *((uint64_t*)upperLimit) + 1 - *((uint64_t*)lowerLimit) ));
            }
        }
        else
        {
            for(int64_t i = 0; i < sizeArray; i++)
            {
                if(rand()%2)
                {
                    *((uint64_t*)array + i) = (uint64_t)(rand()%(*((uint64_t*)upperLimit) + 1));
                }
                else
                {
                    *((uint64_t*)array + i) = -((uint64_t)(rand()%(*((uint64_t*)upperLimit) + 1)));
                }
            }
        }
    }
    else if(typeData == FLOAT)
    {
        for(int64_t i = 0; i < sizeArray; i++)
        {
            int64_t integerPart = GetIntegerPart( ((float*)array + i), typeData);
            Print64int(integerPart);
        }
    }
    else if(typeData == DOUBLE)
    {

    }
    else
    {
        exit(errorTypeArray);
    }
}

int64_t GetIntegerPart(void *number, int8_t typeData)
{
    int64_t integerPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        char *arrayIntegerPart = (char*)CallocAllocator(strlen((char*)number),typeData);
        char *separator = strstr((char*)number,".");
        memcpy(arrayIntegerPart,(char*)number,separator-(char*)number);
        EndArrayChar(arrayIntegerPart,separator-(char*)number + 1,CHAR);

        char *pointerEnd = NULL;
        integerPart = (int64_t)strtol(arrayIntegerPart, &pointerEnd, 10);
        AllocatorFree(arrayIntegerPart);
    }
    else if(typeData == FLOAT)
    {
        integerPart = ((int64_t)(*((float*)number)));
    }
    else if(typeData == DOUBLE)
    {
        integerPart = ((int64_t)(*((double*)number)));
    }
    else
    {
        exit(errorTypeArray);
    }

    return integerPart;
}

int64_t GetDecimalPart(void *number, int8_t typeData)
{
    int64_t decimalPart = 0;

    if(typeData == CHAR || typeData == UNSIGNED_CHAR)
    {
        int64_t sizeArray = strlen((char*)number);
        char *arrayDecimalPart = (char*)CallocAllocator(sizeArray,typeData);
        char *separator = strstr((char*)number,".");
        memcpy(arrayDecimalPart,separator + 1,(char*)number + sizeArray - separator + 1);
        EndArrayChar(arrayDecimalPart,(char*)number + sizeArray - separator + 2, CHAR);

        int64_t sizeArrayDecimalPart = strlen((char*)arrayDecimalPart);
        for(int64_t i = 0, j =sizeArrayDecimalPart; i < sizeArrayDecimalPart ; i++, j--)
        {
            decimalPart += (*(arrayDecimalPart + i) - '0')*pow(10, j-1);
        }
        AllocatorFree(arrayDecimalPart);
    }
    else if(typeData == FLOAT)
    {
        float substractIntegerPart = (float*)number - ((int64_t)(*((float*)number)));

    }
    else if(typeData == DOUBLE)
    {
       // integerPart = ((int64_t)(*((double*)number)));
    }
    else
    {
        exit(errorTypeArray);
    }

    return decimalPart;
}
#endif // ARRAY_C_INCLUDED
