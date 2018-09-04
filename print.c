#include "print.h"

void PrintArray(void *array, int64_t size, uint8_t typePointer)
{
    if(size <= 0)
        exit(errorSizePrint);
    else
    {
        if(POINTER_CHAR == typePointer)
        {
            char* auxiliarPointer = (char*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%c", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_UNSIGNED_CHAR == typePointer)
        {
            unsigned char* auxiliarPointer = (unsigned char*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%c", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_INT8  == typePointer)
        {
            int8_t* auxiliarPointer = (int8_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_UNSIGNED_INT8 == typePointer)
        {
            uint8_t* auxiliarPointer = (uint8_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_INT16 == typePointer)
        {
            int16_t* auxiliarPointer = (int16_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_UNSIGNED_INT16 == typePointer)
        {
            uint16_t* auxiliarPointer = (uint16_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_INT32 == typePointer)
        {
            int32_t* auxiliarPointer = (int32_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_UNSIGNED_INT32 == typePointer)
        {
            uint32_t* auxiliarPointer = (uint32_t*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_INT64 == typePointer)
        {
            int64_t* auxiliarPointer = (int64_t*)array;
            for(uint64_t i = 0; i < size; i++)
            {
                #ifdef __unix__
                printf("%ld ", auxiliarPointer[i]);
                #else //windows
                printf("%I64d ", auxiliarPointer[i]);
                #endif
            }
            printf("\n");
        }
        else if(POINTER_UNSIGNED_INT64 == typePointer)
        {
            uint64_t* auxiliarPointer = (uint64_t*)array;
            for(uint64_t i = 0; i < size; i++)
            {
                #ifdef __unix__
                printf("%ld ", auxiliarPointer[i]);
                #else //Windows
                printf("%I64d ", auxiliarPointer[i]);
                #endif
            }
            printf("\n");
        }
        else if(POINTER_FLOAT == typePointer)
        {
            float* auxiliarPointer = (float*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%f ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(POINTER_DOUBLE == typePointer)
        {
            double* auxiliarPointer = (double*)array;
            for(uint64_t i = 0; i < size; i++)
                printf("%f ", auxiliarPointer[i]);
            printf("\n");
        }
        else
            exit(errorTypePrint);
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
