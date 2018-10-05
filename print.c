#include "print.h"

void _PrintArray(void *array, const uint32_t sizeArray, const int8_t typeData, const char *fileName, const uint32_t lineNumber, const char* functionName)
{
    if(sizeArray <= 0)
    {
        ErrorRaise(errorSizePrint, fileName, lineNumber, functionName);
    }

    if(CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%d ", *((char*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_CHAR == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%d ", *((unsigned char*)array + i));
        }
        printf("\n");
    }
    else if(INT8  == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%d ", *((int8_t*)array +i) );
        }
        printf("\n");
    }
    else if(UNSIGNED_INT8 == typeData)
    {
        uint8_t* auxiliarPointer = (uint8_t*)array;
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%u ", auxiliarPointer[i]);
        }
        printf("\n");
    }
    else if(INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%d ", *((int16_t*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_INT16 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%u ", *((uint16_t*)array + i));
        }
        printf("\n");
    }
    else if(INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%d ", *((int32_t*)array + i));
        }
        printf("\n");
    }
    else if(UNSIGNED_INT32 == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%u ", *((uint32_t*)array + i));
        }
        printf("\n");
    }
    else if(FLOAT == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%f ", *((float*)array + i));
        }
        printf("\n");
    }
    else if(DOUBLE == typeData)
    {
        for(uint32_t i = 0; i < sizeArray; i++)
        {
            printf("%f ", *((double*)array + i));
        }
        printf("\n");
    }
    else
    {
        ErrorRaise(errorTypePrint, fileName, lineNumber, functionName);
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

void PrintFloat(float theFloat)
{
    printf("%f\n", theFloat);
}

void PrintDouble(double theDouble)
{
    printf("%f\n", theDouble);
}
