#ifndef SORT_C_INCLUDED
#define SORT_C_INCLUDED

#include "sort.h"

void SortRadix(void *array, int64_t sizeArray, int8_t typeData)
{
    if( (sizeArray <= 0) )
    {
        exit(errorSizeArraySort);
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
        exit(errorTypeSort);
    }

}

#endif // SORT_C_INCLUDED
