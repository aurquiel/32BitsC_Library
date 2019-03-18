#ifndef SORT_C_INCLUDED
#define SORT_C_INCLUDED

#include "sort.h"

void _SortRadix(void *array, const uint32_t sizeArray, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if( (sizeArray <= 0) )
    {
        ErrorRaise(errorSizeArraySort, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
      //  uint32_t negativeNumbers = _ArrayCountSign(array,sizeArray,NEGATIVE,typeData,fileName,lineNumber,functionName);
       // uint32_t positiveNumbers = sizeArray - negativeNumbers;
        //char* ArrayNegatives = _AllocatorCalloc(negativeNumbers,typeData,fileName,lineNumber,functionName);
//        char* ArrayPositives = _AllocatorCalloc(positiveNumbers,typeData,fileName,lineNumber,functionName);
        //_ArrayCopySignNumbers()
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

#endif // SORT_C_INCLUDED
