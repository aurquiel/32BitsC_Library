#include "print.h"

void _PrintArray(void *array, int64_t sizeArray, uint8_t typeData, char const *fileName, char const *functionName, const int64_t lineNumber)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizePrint, fileName, functionName, lineNumber);
    }

    if(CHAR == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%c", *((char*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%c", *((unsigned char*)array + i));
        }
        printf("\n");
    }
    else if(INT8  == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%d ", *((int8_t*)array +i) );
        }
        printf("\n");
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t* auxiliarPointer = (uint8_t*)array;
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%u ", auxiliarPointer[i]);
        }
        printf("\n");
    }
    else if(INT16 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%d ", *((int16_t*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%u ", *((uint16_t*)array + i));
        }
        printf("\n");
    }
    else if(INT32 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%d ", *((int32_t*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%u ", *((uint32_t*)array + i));
        }
        printf("\n");
    }
    else if(INT64 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            #ifdef __unix__
            printf("%ld ", *((int64_t*)array + i));
            #else //windows
            printf("%I64d ", *((int64_t*)array + i));
            #endif
        }
        printf("\n");
    }
    else if(UNSIGNED_INT64 == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            #ifdef __unix__
            printf("%ld ", *((uint64_t*)array + i));
            #else //Windows
            printf("%I64d ", *((uint64_t*)array + i));
            #endif
        }
        printf("\n");
    }
    else if(FLOAT == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%f ", *((float*)array + i));
        }
        printf("\n");
    }
    else if(DOUBLE == typeData)
    {
        for(uint64_t i = 0; i < (uint64_t)sizeArray; i++)
        {
            printf("%f ", *((double*)array + i));
        }
        printf("\n");
    }
    else
    {
        ErrorRaise(errorSizePrint, fileName, functionName, lineNumber);
    }
}


void PrintChar(char theChar)
{
    printf("%c\n",theChar);
}

void PrintUchar(unsigned char theUchar)
{
    printf("%c\n",theUchar);
}

void Print8int(int8_t theInt)
{
    printf("%d\n",theInt);
}

void Print8Uint(uint8_t theInt)
{
    printf("%u\n",theInt);
}

void Print16int(int16_t theInt)
{
    printf("%d\n",theInt);
}

void Print16Uint(uint16_t theInt)
{
    printf("%u\n",theInt);
}

void Print32int(int32_t theInt)
{
    printf("%d\n",theInt);
}

void Print32Uint(uint32_t theInt)
{
    printf("%u\n",theInt);
}

void Print64int(int64_t theInt)
{
    #ifdef __unix__
    printf("%ld\n", theInt);
    #else //Windows
    printf("%I64d\n", theInt);
    #endif
}

void Print64Uint(uint64_t theInt)
{
    #ifdef __unix__
    printf("%ld\n", theInt);
    #else //Windows
    printf("%I64d\n", theInt);
    #endif
}

void PrintFloat(float theFloat)
{
    printf("%f\n", theFloat);
}

void PrintDouble(double theDouble)
{
    printf("%f\n", theDouble);
}
