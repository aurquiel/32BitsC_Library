#include "print.h"

void PrintArray(void *theArray, int64_t size, uint8_t typePointer)
{
    if(size <= 0)
        exit(errorSizePrint);
    else
    {
        if(charPointer == typePointer)
        {
            char* auxiliarPointer = (char*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%c", auxiliarPointer[i]);
            printf("\n");
        }
        else if(unsignedCharPointer == typePointer)
        {
            unsigned char* auxiliarPointer = (unsigned char*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%c", auxiliarPointer[i]);
            printf("\n");
        }
        else if(int8Pointer == typePointer)
        {
            int8_t* auxiliarPointer = (int8_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(unsignedInt8Pointer == typePointer)
        {
            uint8_t* auxiliarPointer = (uint8_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(int16Pointer == typePointer)
        {
            int16_t* auxiliarPointer = (int16_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(unsignedInt16Pointer == typePointer)
        {
            uint16_t* auxiliarPointer = (uint16_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(int32Pointer == typePointer)
        {
            int32_t* auxiliarPointer = (int32_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%d ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(unsignedInt32Pointer == typePointer)
        {
            uint32_t* auxiliarPointer = (uint32_t*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%u ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(int64Pointer == typePointer)
        {
            int64_t* auxiliarPointer = (int64_t*)theArray;
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
        else if(unsignedInt64Pointer == typePointer)
        {
            uint64_t* auxiliarPointer = (uint64_t*)theArray;
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
        else if(floatPointer == typePointer)
        {
            float* auxiliarPointer = (float*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%f ", auxiliarPointer[i]);
            printf("\n");
        }
        else if(doublePointer == typePointer)
        {
            double* auxiliarPointer = (double*)theArray;
            for(uint64_t i = 0; i < size; i++)
                printf("%f ", auxiliarPointer[i]);
            printf("\n");
        }
        else
            exit(errorTypePrint);
    }
}
