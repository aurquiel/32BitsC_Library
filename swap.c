#include "swap.h"

void _Swap(void* a, void* b, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(typeData == CHAR)
    {
        char temporary = *(char*)a;
        *(char*)a = *(char*)b;
        *(char*)b = temporary;
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        unsigned char temporary = *(unsigned char*)a;
        *(unsigned char*)a = *(unsigned char*)b;
        *(unsigned char*)b = temporary;
    }
    else if(typeData == INT8)
    {
        int8_t temporary = *(int8_t*)a;
        *(int8_t*)a = *(int8_t*)b;
        *(int8_t*)b = temporary;
    }
    else if(typeData == UNSIGNED_INT8)
    {
        uint8_t temporary = *(uint8_t*)a;
        *(uint8_t*)a = *(uint8_t*)b;
        *(uint8_t*)b = temporary;
    }
    else if(typeData == INT16)
    {
        int16_t temporary = *(int16_t*)a;
        *(int16_t*)a = *(int16_t*)b;
        *(int16_t*)b = temporary;
    }
    else if(typeData == UNSIGNED_INT16)
    {
        uint16_t temporary = *(uint16_t*)a;
        *(uint16_t*)a = *(uint16_t*)b;
        *(uint16_t*)b = temporary;
    }
    else if(typeData == INT32)
    {
        int32_t temporary = *(int32_t*)a;
        *(int32_t*)a = *(int32_t*)b;
        *(int32_t*)b = temporary;
    }
    else if(typeData == UNSIGNED_INT32)
    {
        uint32_t temporary = *(uint32_t*)a;
        *(uint32_t*)a = *(uint32_t*)b;
        *(uint32_t*)b = temporary;
    }
    else if(typeData == FLOAT)
    {
        float temporary = *(float*)a;
        *(float*)a = *(float*)b;
        *(float*)b = temporary;
    }
    else if(typeData == DOUBLE)
    {
        double temporary = *(double*)a;
        *(double*)a = *(double*)b;
        *(double*)b = temporary;
    }
    else
    {
        ErrorRaise(errorTypeSwap, fileName, lineNumber, functionName);
    }
}

void _SwapXor(void* a, void* b, const int8_t typeData, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(typeData == CHAR)
    {
        *(char*)a = *(char*)a ^ *(char*)b;
        *(char*)b = *(char*)b ^ *(char*)a;
        *(char*)a = *(char*)a ^ *(char*)b;
    }
    else if (typeData == UNSIGNED_CHAR)
    {
        *(unsigned char*)a = *(unsigned char*)a ^ *(unsigned char*)b;
        *(unsigned char*)b = *(unsigned char*)b ^ *(unsigned char*)a;
        *(unsigned char*)a = *(unsigned char*)a ^ *(unsigned char*)b;
    }
    else if(typeData == INT8)
    {
        *(int8_t*)a = *(int8_t*)a ^ *(int8_t*)b;
        *(int8_t*)b = *(int8_t*)b ^ *(int8_t*)a;
        *(int8_t*)a = *(int8_t*)a ^ *(int8_t*)b;
    }
    else if(typeData == UNSIGNED_INT8)
    {
        *(uint8_t*)a = *(uint8_t*)a ^ *(uint8_t*)b;
        *(uint8_t*)b = *(uint8_t*)b ^ *(uint8_t*)a;
        *(uint8_t*)a = *(uint8_t*)a ^ *(uint8_t*)b;
    }
    else if(typeData == INT16)
    {
        *(int16_t*)a = *(int16_t*)a ^ *(int16_t*)b;
        *(int16_t*)b = *(int16_t*)b ^ *(int16_t*)a;
        *(int16_t*)a = *(int16_t*)a ^ *(int16_t*)b;
    }
    else if(typeData == UNSIGNED_INT16)
    {
        *(uint16_t*)a = *(uint16_t*)a ^ *(uint16_t*)b;
        *(uint16_t*)b = *(uint16_t*)b ^ *(uint16_t*)a;
        *(uint16_t*)a = *(uint16_t*)a ^ *(uint16_t*)b;
    }
    else if(typeData == INT32)
    {
        *(int32_t*)a = *(int32_t*)a ^ *(int32_t*)b;
        *(int32_t*)b = *(int32_t*)b ^ *(int32_t*)a;
        *(int32_t*)a = *(int32_t*)a ^ *(int32_t*)b;
    }
    else if(typeData == UNSIGNED_INT32)
    {
        *(uint32_t*)a = *(uint32_t*)a ^ *(uint32_t*)b;
        *(uint32_t*)b = *(uint32_t*)b ^ *(uint32_t*)a;
        *(uint32_t*)a = *(uint32_t*)a ^ *(uint32_t*)b;
    }
    else
    {
        ErrorRaise(errorTypeSwapXor, fileName, lineNumber, functionName);
    }
}
