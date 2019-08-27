#ifndef SORT_C_INCLUDED
#define SORT_C_INCLUDED

#include "sort.h"

void _SortRadixSort(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( (sizeArray <= 0) )
    {
        ErrorRaise(errorSizeArraySort, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, char, typeData);
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, unsigned char, typeData);
    }
    else if(INT8 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, int8_t, typeData);
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, uint8_t, typeData);
    }
    else if(INT16 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, int16_t, typeData);
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, uint16_t, typeData);
    }
    else if(INT32 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, int32_t, typeData);
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, uint32_t, typeData);
    }
    else if(FLOAT == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, float, typeData);
    }
    else if(DOUBLE == typeData)
    {
        RADIX_SORT_OPERATIONS(array, sizeArray, double, typeData);
    }
    else
    {
        ErrorRaise(errorTypeSort, fileName, lineNumber, functionName);
    }
}

void _SortBubbleSort(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizeArray, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((char*)array + j) > *((char*)array + j +1))
                {
                    _Swap( ((char*)array + j), ((char*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((unsigned char*)array + j) > *((unsigned char*)array + j +1))
                {
                    _Swap( ((unsigned char*)array + j), ((unsigned char*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((int8_t*)array + j) > *((int8_t*)array + j +1))
                {
                    _Swap( ((int8_t*)array + j), ((int8_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((uint8_t*)array + j) > *((uint8_t*)array + j +1))
                {
                    _Swap( ((uint8_t*)array + j), ((uint8_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((int16_t*)array + j) > *((int16_t*)array + j +1))
                {
                    _Swap( ((int16_t*)array + j), ((int16_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((uint16_t*)array + j) > *((uint16_t*)array + j +1))
                {
                    _Swap( ((uint16_t*)array + j), ((uint16_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((int32_t*)array + j) > *((int32_t*)array + j +1))
                {
                    _Swap( ((int32_t*)array + j), ((int32_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((uint32_t*)array + j) > *((uint32_t*)array + j +1))
                {
                    _Swap( ((uint32_t*)array + j), ((uint32_t*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((float*)array + j) > *((float*)array + j +1))
                {
                    _Swap( ((float*)array + j), ((float*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray-1; i++)
        {
            for(uint32_t j = 0; j < sizeArray-i-1; j++)
            {
                if( *((double*)array + j) > *((double*)array + j +1))
                {
                    _Swap( ((double*)array + j), ((double*)array + j + 1), typeData, fileName, lineNumber, functionName);
                }
            }
        }
    }
    else
    {
        ErrorRaise(errorTypeArray, fileName, lineNumber, functionName);
    }
}

#endif // SORT_C_INCLUDED
