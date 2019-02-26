#ifndef ARRAY_C_INCLUDED
#define ARRAY_C_INCLUDED

#include "array.h"

void _ArrayInterchange(void* arrayA, const uint32_t sizeArrayA, void* arrayB, const uint32_t sizeArrayB, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if((sizeArrayA <= 0) || (sizeArrayB <= 0) || (sizeArrayA != sizeArrayB))
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    void *auxiliarArray = _AllocatorCalloc(sizeArrayA, typeData, fileName, lineNumber, functionName);

    _ArrayCopy(auxiliarArray, sizeArrayA, arrayA, sizeArrayA, typeData, fileName, lineNumber, functionName);
    _ArrayCopy(arrayA, sizeArrayA, arrayB, sizeArrayB, typeData, fileName, lineNumber, functionName);
    _ArrayCopy(arrayB, sizeArrayB, auxiliarArray, sizeArrayA, typeData, fileName, lineNumber, functionName);
    AllocatorFree(auxiliarArray);
}

void _ArrayCopy(void* arrayDestiny, const uint32_t sizeArrayDestiny, const void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( (sizeArrayDestiny <= 0) || (sizeArraySource <= 0) || (sizeArrayDestiny < sizeArraySource) )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        memcpy((char*)arrayDestiny, (char*)arraySource, sizeof(char)*sizeArraySource);
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        memcpy((unsigned char*)arrayDestiny, (unsigned char*)arraySource, sizeof(unsigned char)*sizeArraySource);
    }
    else if(INT8 == typeData)
    {
        memcpy((int8_t*)arrayDestiny, (int8_t*)arraySource, sizeof(int8_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        memcpy((uint8_t*)arrayDestiny, (uint8_t*)arraySource, sizeof(uint8_t)*sizeArraySource);
    }
    else if(INT16 == typeData)
    {
        memcpy((int16_t*)arrayDestiny, (int16_t*)arraySource, sizeof(int16_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        memcpy((uint16_t*)arrayDestiny, (uint16_t*)arraySource,  sizeof(uint16_t)*sizeArraySource);
    }
    else if(INT32 == typeData)
    {
        memcpy((int32_t*)arrayDestiny, (int32_t*)arraySource,  sizeof(int32_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        memcpy((uint32_t*)arrayDestiny, (uint32_t*)arraySource,  sizeof(uint32_t)*sizeArraySource);
    }
    else if(FLOAT == typeData)
    {
        memcpy((float*)arrayDestiny, (float*)arraySource,  sizeof(float)*sizeArraySource);
    }
    else if(DOUBLE == typeData)
    {
        memcpy((double*)arrayDestiny, (double*)arraySource,  sizeof(double)*sizeArraySource);
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayConcatenate(void* arrayDestiny, const uint32_t sizeArrayDestiny, void* arraySource, const uint32_t sizeArraySource, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArrayDestiny <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        memcpy((char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeArraySource);
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        memcpy((unsigned char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeArraySource);
    }
    else if(INT8 == typeData)
    {
        memcpy((unsigned char*)arrayDestiny + sizeArrayDestiny, (unsigned char*)arraySource, sizeof(int8_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        memcpy((uint8_t*)arrayDestiny + sizeArrayDestiny, (uint8_t*)arraySource, sizeof(uint8_t)*sizeArraySource);
    }
    else if(INT16 == typeData)
    {
        memcpy((int16_t*)arrayDestiny + sizeArrayDestiny, (int16_t*)arraySource, sizeof(int16_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        memcpy((uint16_t*)arrayDestiny + sizeArrayDestiny, (uint16_t*)arraySource, sizeof(uint16_t)*sizeArraySource);
    }
    else if(INT32 == typeData)
    {
        memcpy((int32_t*)arrayDestiny + sizeArrayDestiny, (int32_t*)arraySource, sizeof(int32_t)*sizeArraySource);
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        memcpy((uint32_t*)arrayDestiny + sizeArrayDestiny, (uint32_t*)arraySource, sizeof(uint32_t)*sizeArraySource);
    }
    else if(FLOAT == typeData)
    {
        memcpy((float*)arrayDestiny + sizeArrayDestiny, (float*)arraySource, sizeof(float)*sizeArraySource);
    }
    else if(DOUBLE == typeData)
    {
        memcpy((double*)arrayDestiny + sizeArrayDestiny, (double*)arraySource, sizeof(double)*sizeArraySource);
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayClear(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    const char emptyEscape = EMPTY_ESCAPE;
    const int32_t zero = FALSE;

    if( (CHAR == typeData) || (UNSIGNED_CHAR == typeData))
    {
        _ArraySet(array, sizeArray, (void*)(&emptyEscape), typeData, fileName, lineNumber, functionName);
    }
    else if( (typeData >= INT8) && (typeData <= DOUBLE) )
    {
        _ArraySet(array, sizeArray, (void*)(&zero), typeData, fileName, lineNumber, functionName);
    }
    else
    {
         ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArraySet(void* array, const uint32_t sizeArray, const void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((char*)array + i) = *((char*)data);
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((unsigned char*)array + i) = *((unsigned char*)data);
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int8_t*)array + i) = *((int8_t*)data);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint8_t*)array + i) = *((uint8_t*)data);
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int16_t*)array + i) = *((int16_t*)data);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint16_t*)array + i) = *((uint16_t*)data);
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int32_t*)array + i) = *((int32_t*)data);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint32_t*)array + i) = *((uint32_t*)data);
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((float*)array + i) = *((float*)data);
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((double*)array + i) = *((double*)data);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void* _ArrayFind(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((char*)array + i) == *((char*)data))
            {
                return ((char*)array + i);
            }
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((unsigned char*)array + i) == *((unsigned char*)data))
            {
                return ((unsigned char*)array + i);
            }
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int8_t*)array + i) == *((int8_t*)data))
            {
                return ((int8_t*)array + i);
            }
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint8_t*)array + i) == *((uint8_t*)data))
            {
                return ((uint8_t*)array + i);
            }
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int16_t*)array + i) == *((int16_t*)data))
            {
                return ((int16_t*)array + i);
            }
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint16_t*)array + i) == *((uint16_t*)data))
            {
                return ((uint16_t*)array + i);
            }
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int32_t*)array + i) == *((int32_t*)data))
            {
                return ((int32_t*)array + i);
            }
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint32_t*)array + i) == *((uint32_t*)data))
            {
                return ((uint32_t*)array + i);
            }
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((float*)array + i) == *((float*)data))
            {
                return ((float*)array + i);
            }
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((double*)array + i) == *((double*)data))
            {
                return ((double*)array + i);
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return NULL;
}

void* _ArrayFindMaximumValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        char *maxValue = (char*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((char*)array + i) > *maxValue)
            {
                maxValue = ((char*)array + i);
            }
        }

        return maxValue;
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        unsigned char *maxValue = (unsigned char*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((unsigned char*)array + i) > *maxValue)
            {
                maxValue = ((unsigned char*)array + i);
            }
        }

        return maxValue;
    }
    else if(INT8 == typeData)
    {
        int8_t *maxValue = (int8_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int8_t*)array + i) > *maxValue)
            {
                maxValue = ((int8_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t *maxValue = (uint8_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint8_t*)array + i) > *maxValue)
            {
                maxValue = ((uint8_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(INT16 == typeData)
    {
        int16_t *maxValue = (int16_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int16_t*)array + i) > *maxValue)
            {
                maxValue = ((int16_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        uint16_t *maxValue = (uint16_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint16_t*)array + i) > *maxValue)
            {
                maxValue = ((uint16_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(INT32 == typeData)
    {
        int32_t *maxValue = (int32_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int32_t*)array + i) > *maxValue)
            {
                maxValue = ((int32_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        uint32_t *maxValue = (uint32_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint32_t*)array + i) > *maxValue)
            {
                maxValue = ((uint32_t*)array + i);
            }
        }

        return maxValue;
    }
    else if(FLOAT == typeData)
    {
        float *maxValue = (float*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((float*)array + i) > *maxValue)
            {
                maxValue = ((float*)array + i);
            }
        }

        return maxValue;
    }
    else if(DOUBLE == typeData)
    {
        double *maxValue = (double*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
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
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return NULL;
}

void* _ArrayFindMinimumValue(const void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        char *minimumValue = (char*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((char*)array + i) < *minimumValue)
            {
                minimumValue = ((char*)array + i);
            }
        }

        return minimumValue;
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        unsigned char *minimumValue= (unsigned char*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((unsigned char*)array + i) < *minimumValue)
            {
                minimumValue = ((unsigned char*)array + i);
            }
        }

        return minimumValue;
    }
    else if(INT8 == typeData)
    {
        int8_t *minimumValue = (int8_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int8_t*)array + i) < *minimumValue)
            {
                minimumValue = ((int8_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t *minimumValue = (uint8_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint8_t*)array + i) < *minimumValue)
            {
                minimumValue = ((uint8_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(INT16 == typeData)
    {
        int16_t *minimumValue = (int16_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int16_t*)array + i) < *minimumValue)
            {
                minimumValue= ((int16_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        uint16_t *minimumValue = (uint16_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint16_t*)array + i) < *minimumValue)
            {
                minimumValue = ((uint16_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(INT32 == typeData)
    {
        int32_t *minimumValue = (int32_t*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((int32_t*)array + i) < *minimumValue)
            {
                minimumValue = ((int32_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        uint32_t *minimumValue = (uint32_t*)array;
        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((uint32_t*)array + i) < *minimumValue)
            {
                minimumValue = ((uint32_t*)array + i);
            }
        }

        return minimumValue;
    }
    else if(FLOAT == typeData)
    {
        float *minimumValue = (float*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((float*)array + i) < *minimumValue)
            {
                minimumValue = ((float*)array + i);
            }
        }

        return minimumValue;
    }
    else if(DOUBLE == typeData)
    {
        double *minimumValue = (double*)array;

        for(uint32_t i = 0; i<sizeArray; i++)
        {
            if( *((double*)array + i) < *minimumValue)
            {
                minimumValue = ((double*)array + i);
            }
        }

        return minimumValue;
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return NULL;
}

uint32_t _ArrayFindNumberRepetitions(const void* array, const uint32_t sizeArray, void *data, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    uint32_t numberRepetitions = 0;

    if(CHAR == typeData)
    {
        char *positionFound = (char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)_ArrayFind((char*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((char*)positionFound - (char*)array));
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        unsigned char *positionFound = (unsigned char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (unsigned char*)_ArrayFind((unsigned char*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((unsigned char*)positionFound - (unsigned char*)array));
        }
    }
    else if(INT8 == typeData)
    {
        int8_t *positionFound = (int8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int8_t*)_ArrayFind((int8_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int8_t*)positionFound - (int8_t*)array));
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t *positionFound = (uint8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint8_t*)_ArrayFind((uint8_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((uint8_t*)positionFound - (uint8_t*)array));
        }
    }
    else if(INT16 == typeData)
    {
        int16_t *positionFound = (int16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int16_t*)_ArrayFind((int16_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int16_t*)positionFound - (int16_t*)array));
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        uint16_t *positionFound = (uint16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint16_t*)_ArrayFind((uint16_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((uint16_t*)positionFound - (uint16_t*)array));
        }
    }
    else if(INT32 == typeData)
    {
        int32_t *positionFound = (int32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int32_t*)_ArrayFind((int32_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        uint32_t *positionFound = (uint32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint32_t*)_ArrayFind((uint32_t*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((uint32_t*)positionFound - (uint32_t*)array));
        }
    }
    else if(FLOAT == typeData)
    {
        float *positionFound = (float*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (float*)_ArrayFind((float*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((float*)positionFound - (float*)array));
        }
    }
    else if(DOUBLE == typeData)
    {
        double *positionFound = (double*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (double*)_ArrayFind((double*)positionFound, nextSizeArray, data, typeData, fileName, lineNumber, functionName))) )
        {
            positionFound++;
            numberRepetitions++;
            nextSizeArray = (sizeArray - ((double*)positionFound - (double*)array));
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    return numberRepetitions;
}

void _ArrayEndChar(void* array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        memset(((char*)array + sizeArray -1), EMPTY_ESCAPE, 1);
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        memset(((unsigned char*)array + sizeArray - 1), EMPTY_ESCAPE, 1);
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}


void _ArrayReverse(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(char *i = (char*)array, *j = (char*)array + sizeArray - 2 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }

    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(unsigned char *i = (unsigned char*)array, *j = (unsigned char*)array + sizeArray - 2 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT8 == typeData)
    {
        for(int8_t *i = (int8_t*)array, *j = (int8_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint8_t *i = (uint8_t*)array, *j = (uint8_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT16 == typeData)
    {
        for(int16_t *i = (int16_t*)array, *j = (int16_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint16_t *i = (uint16_t*)array, *j = (uint16_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT32 == typeData)
    {
        for(int32_t *i = (int32_t*)array, *j = (int32_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t *i = (uint32_t*)array, *j = (uint32_t*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(FLOAT == typeData)
    {
        for(float *i = (float*)array, *j = (float*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _Swap(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(DOUBLE == typeData)
    {
        for(double *i = (double*)array, *j = (double*)array + sizeArray - 1 ;  i < j ; i++, j--)
        {
            _Swap(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayReverseInterval(void *array, const uint32_t sizeArray, void* lowerLimit, void* upperLimit, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }
    else if( (lowerLimit < array) || upperLimit < lowerLimit )
    {
        exit(errorBoundaryLimits);
    }

    if(CHAR == typeData)
    {
        for(char *i = (char*)lowerLimit, *j = (char*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }

    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(unsigned char *i = (unsigned char*)lowerLimit, *j = (unsigned char*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT8 == typeData)
    {
        for(int8_t *i = (int8_t*)lowerLimit, *j = (int8_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint8_t *i = (uint8_t*)lowerLimit, *j = (uint8_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT16 == typeData)
    {
        for(int16_t *i = (int16_t*)lowerLimit, *j = (int16_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint16_t *i = (uint16_t*)lowerLimit, *j = (uint16_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(INT32 == typeData)
    {
        for(int32_t *i = (int32_t*)lowerLimit, *j = (int32_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t *i = (uint32_t*)lowerLimit, *j = (uint32_t*)upperLimit;  i < j ; i++, j--)
        {
            _SwapXor(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(FLOAT == typeData)
    {
        for(float *i = (float*)lowerLimit, *j = (float*)upperLimit;  i < j ; i++, j--)
        {
            _Swap(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else if(DOUBLE == typeData)
    {
        for(double *i = (double*)lowerLimit, *j = (double*)upperLimit;  i < j ; i++, j--)
        {
            _Swap(i,j,typeData, fileName, lineNumber, functionName);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayReplaceData(void *array, const uint32_t sizeArray, const void* dataFind, const void* dataReplace, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        char *positionFound = (char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (char*)_ArrayFind((char*)positionFound, nextSizeArray, (char*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((char*)dataReplace);
            nextSizeArray = (sizeArray - ((char*)positionFound - (char*)array));
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        unsigned char *positionFound = (unsigned char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (unsigned char*)_ArrayFind((unsigned char*)positionFound, nextSizeArray, (unsigned char*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((unsigned char*)dataReplace);
            nextSizeArray = (sizeArray - ((unsigned char*)positionFound - (unsigned char*)array));
        }
    }
    else if(INT8 == typeData)
    {
        int8_t *positionFound = (int8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int8_t*)_ArrayFind((int8_t*)positionFound, nextSizeArray, (int8_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int8_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int8_t*)positionFound - (int8_t*)array));
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t *positionFound = (uint8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint8_t*)_ArrayFind((uint8_t*)positionFound, nextSizeArray, (uint8_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint8_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint8_t*)positionFound - (uint8_t*)array));
        }
    }
    else if(INT16 == typeData)
    {
        int16_t *positionFound = (int16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int16_t*)_ArrayFind((int16_t*)positionFound, nextSizeArray, (int16_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int16_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int16_t*)positionFound - (int16_t*)array));
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        uint16_t *positionFound = (uint16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint16_t*)_ArrayFind((uint16_t*)positionFound, nextSizeArray, (uint16_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint16_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint16_t*)positionFound - (uint16_t*)array));
        }
    }
    else if(INT32 == typeData)
    {
        int32_t *positionFound = (int32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (int32_t*)_ArrayFind((int32_t*)positionFound, nextSizeArray,(int32_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int32_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        uint32_t *positionFound = (uint32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (uint32_t*)_ArrayFind((uint32_t*)positionFound, nextSizeArray, (uint32_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint32_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint32_t*)positionFound - (uint32_t*)array));
        }
    }
    else if(FLOAT == typeData)
    {
        float *positionFound = (float*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (float*)_ArrayFind((float*)positionFound, nextSizeArray, (float*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((float*)dataReplace);
            nextSizeArray = (sizeArray - ((float*)positionFound - (float*)array));
        }
    }
    else if(DOUBLE == typeData)
    {
        double *positionFound = (double*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (nextSizeArray != 0) && (NULL != (positionFound = (double*)_ArrayFind((double*)positionFound, nextSizeArray, (double*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((double*)dataReplace);
            nextSizeArray = (sizeArray - ((double*)positionFound - (double*)array));
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayReplaceDataFrequency(void *array, const uint32_t sizeArray, const void* dataFind, const void* dataReplace, uint32_t frequency, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(frequency < 0)
    {
        exit(errorNegativeNumberArray);
    }

    if(CHAR == typeData)
    {
        char *positionFound = (char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (char*)_ArrayFind((char*)positionFound, nextSizeArray, (char*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((char*)dataReplace);
            nextSizeArray = (sizeArray - ((char*)positionFound - (char*)array));
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        unsigned char *positionFound = (unsigned char*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (unsigned char*)_ArrayFind((unsigned char*)positionFound, nextSizeArray, (unsigned char*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((unsigned char*)dataReplace);
            nextSizeArray = (sizeArray - ((unsigned char*)positionFound - (unsigned char*)array));
        }
    }
    else if(INT8 == typeData)
    {
        int8_t *positionFound = (int8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (int8_t*)_ArrayFind((int8_t*)positionFound, nextSizeArray, (int8_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int8_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int8_t*)positionFound - (int8_t*)array));
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t *positionFound = (uint8_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (uint8_t*)_ArrayFind((uint8_t*)positionFound, nextSizeArray, (uint8_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint8_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint8_t*)positionFound - (uint8_t*)array));
        }
    }
    else if(INT16 == typeData)
    {
        int16_t *positionFound = (int16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (int16_t*)_ArrayFind((int16_t*)positionFound, nextSizeArray, (int16_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int16_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int16_t*)positionFound - (int16_t*)array));
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        uint16_t *positionFound = (uint16_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (uint16_t*)_ArrayFind((uint16_t*)positionFound, nextSizeArray, (uint16_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint16_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint16_t*)positionFound - (uint16_t*)array));
        }
    }
    else if(INT32 == typeData)
    {
        int32_t *positionFound = (int32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (int32_t*)_ArrayFind((int32_t*)positionFound, nextSizeArray, (int32_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((int32_t*)dataReplace);
            nextSizeArray = (sizeArray - ((int32_t*)positionFound - (int32_t*)array));
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        uint32_t *positionFound = (uint32_t*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (uint32_t*)_ArrayFind((uint32_t*)positionFound, nextSizeArray, (uint32_t*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((uint32_t*)dataReplace);
            nextSizeArray = (sizeArray - ((uint32_t*)positionFound - (uint32_t*)array));
        }
    }
    else if(FLOAT == typeData)
    {
        float *positionFound = (float*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (float*)_ArrayFind((float*)positionFound, nextSizeArray, (float*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((float*)dataReplace);
            nextSizeArray = (sizeArray - ((float*)positionFound - (float*)array));
        }
    }
    else if(DOUBLE == typeData)
    {
        double *positionFound = (double*)array;
        uint32_t nextSizeArray = sizeArray;
        while( (frequency-- != 0) && (nextSizeArray != 0) && (NULL != (positionFound = (double*)_ArrayFind((double*)positionFound, nextSizeArray, (double*)dataFind, typeData, fileName, lineNumber, functionName))) )
        {
            *(positionFound++) = *((double*)dataReplace);
            nextSizeArray = (sizeArray - ((double*)positionFound - (double*)array));
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayFillSequence(void *array, const uint32_t sizeArray, void* const startPoint, void* const step, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( sizeArray <= 0 )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        *((char*)array) = *((char*)startPoint);
        for (uint32_t i = 1; i < sizeArray ; i++)
        {
            *((char*)array + i) = *((char*)array + i -1) + *((char*)step);
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        *((unsigned char*)array) = *((unsigned char*)startPoint);
        for (uint32_t i = 1; i < sizeArray ; i++)
        {
            *((unsigned char*)array + i) = *((unsigned char*)array + i -1) + *((unsigned char*)step);
        }
    }
    else if(INT8 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((int8_t*)array + i) = *((int8_t*)startPoint);
            *((int8_t*)startPoint) += *((int8_t*)step);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((uint8_t*)array + i) = *((uint8_t*)startPoint);
            *((uint8_t*)startPoint) += *((uint8_t*)step);
        }
    }
    else if(INT16 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((int16_t*)array + i) = *((int16_t*)startPoint);
            *((int16_t*)startPoint) += *((int16_t*)step);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((uint16_t*)array + i) = *((uint16_t*)startPoint);
            *((uint16_t*)startPoint) += *((uint16_t*)step);
        }
    }
    else if(INT32 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((int32_t*)array + i) = *((int32_t*)startPoint);
            *((int32_t*)startPoint) += *((int32_t*)step);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((uint32_t*)array + i) = *((uint32_t*)startPoint);
            *((uint32_t*)startPoint) += *((uint32_t*)step);
        }
    }
    else if(FLOAT == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((float*)array + i) = *((float*)startPoint);
            *((float*)startPoint) += *((float*)step);
        }
    }
    else if(DOUBLE == typeData)
    {
        for (uint32_t i = 0; i < sizeArray ; i++)
        {
            *((double*)array + i) = *((double*)startPoint);
            *((double*)startPoint) += *((double*)step);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayMultiplyValue(void* array, const uint32_t sizeArray, const void* multipe, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((char*)array + i) *= *((char*)multipe);
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((unsigned char*)array + i) *= *((unsigned char*)multipe);
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int8_t*)array + i) *= *((int8_t*)multipe);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint8_t*)array + i) *= *((uint8_t*)multipe);
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int16_t*)array + i) *= *((int16_t*)multipe);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint16_t*)array + i) *= *((uint16_t*)multipe);
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int32_t*)array + i) *= *((int32_t*)multipe);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint32_t*)array + i) *= *((uint32_t*)multipe);
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((float*)array + i) *= *((float*)multipe);
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((double*)array + i) *= *((double*)multipe);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

void _ArrayAddValue(void* array, const uint32_t sizeArray, const void* value, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((char*)array + i) += *((char*)value);
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((unsigned char*)array + i) += *((unsigned char*)value);
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int8_t*)array + i) += *((int8_t*)value);
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint8_t*)array + i) += *((uint8_t*)value);
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int16_t*)array + i) += *((int16_t*)value);
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint16_t*)array + i) += *((uint16_t*)value);
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((int32_t*)array + i) += *((int32_t*)value);
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((uint32_t*)array + i) += *((uint32_t*)value);
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((float*)array + i) += *((float*)value);
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            *((double*)array + i) += *((double*)value);
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

uint32_t _ArrayCountSign(const void* array, const uint32_t sizeArray, const int8_t sign, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    uint32_t negatives = 0;
    uint32_t positives = 0;

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((char*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((unsigned char*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((int8_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((uint8_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((int16_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((uint16_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((int32_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((uint32_t*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((float*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            if(*((double*)array + i) >= 0)
            {
                positives++;
            }
            else
            {
                negatives++;
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }

    if(sign == POSITIVE)
    {
        return positives;
    }
    else
    {
        return negatives;
    }
}

void _ArrayCopySignedNumbers(void* arrayDestiny, const uint32_t sizeArrayDestiny, const void* arraySource, const uint32_t sizeArraySource, const int8_t sign, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( (sizeArrayDestiny <= 0) || (sizeArraySource <= 0) || (sizeArrayDestiny < sizeArraySource) )
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0, j = 0; i < sizeArrayDestiny && i < sizeArraySource ; i++)
        {
            if(sign == POSITIVE && *((char*)arraySource + i) >= 0 )
            {
                *((char*)arrayDestiny + j++) = *((char*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((char*)arraySource + i) < 0 )
            {
                *((char*)arrayDestiny + j++) = *((char*)arraySource + i);
            }
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((unsigned char*)arraySource + i) >= 0 )
            {
                *((unsigned char*)arrayDestiny + j++) = *((unsigned char*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((unsigned char*)arraySource + i) < 0 )
            {
                *((unsigned char*)arrayDestiny + j++) = *((unsigned char*)arraySource + i);
            }
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((int8_t*)arraySource + i) >= 0 )
            {
                *((int8_t*)arrayDestiny + j++) = *((int8_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((int8_t*)arraySource + i) < 0 )
            {
                *((int8_t*)arrayDestiny + j++) = *((int8_t*)arraySource + i);
            }
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((uint8_t*)arraySource + i) >= 0 )
            {
                *((int8_t*)arrayDestiny + j++) = *((uint8_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((uint8_t*)arraySource + i) < 0 )
            {
                *((uint8_t*)arrayDestiny + j++) = *((uint8_t*)arraySource + i);
            }
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((int16_t*)arraySource + i) >= 0 )
            {
                *((int16_t*)arrayDestiny + j++) = *((int16_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((int16_t*)arraySource + i) < 0 )
            {
                *((int16_t*)arrayDestiny + j++) = *((int16_t*)arraySource + i);
            }
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((uint16_t*)arraySource + i) >= 0 )
            {
                *((uint16_t*)arrayDestiny + j++) = *((uint16_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((uint16_t*)arraySource + i) < 0 )
            {
                *((uint16_t*)arrayDestiny + j++) = *((uint16_t*)arraySource + i);
            }
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((int32_t*)arraySource + i) >= 0 )
            {
                *((int32_t*)arrayDestiny + j++) = *((int32_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((int32_t*)arraySource + i) < 0 )
            {
                *((int32_t*)arrayDestiny + j++) = *((int32_t*)arraySource + i);
            }
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((uint32_t*)arraySource + i) >= 0 )
            {
                *((uint32_t*)arrayDestiny + j++) = *((uint32_t*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((uint32_t*)arraySource + i) < 0 )
            {
                *((uint32_t*)arrayDestiny + j++) = *((uint32_t*)arraySource + i);
            }
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((float*)arraySource + i) >= 0 )
            {
                *((float*)arrayDestiny + j++) = *((float*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((float*)arraySource + i) < 0 )
            {
                *((float*)arrayDestiny + j++) = *((float*)arraySource + i);
            }
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0, j = 0 ; i < sizeArrayDestiny && i<sizeArraySource; i++)
        {
            if(sign == POSITIVE && *((double*)arraySource + i) >= 0 )
            {
                *((double*)arrayDestiny + j++) = *((double*)arraySource + i);
            }
            else if(sign == NEGATIVE && *((double*)arraySource + i) < 0 )
            {
                *((double*)arrayDestiny + j++) = *((double*)arraySource + i);
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}
#endif // ARRAY_C_INCLUDED
