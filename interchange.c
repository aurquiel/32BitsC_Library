#ifndef INTERCHANGE_C_INCLUDED
#define INTERCHANGE_C_INCLUDED

#include "interchange.h"

void InterchangeTotalGeneric(void* a, void *b, int64_t sizeA, int64_t sizeB, int8_t typePointer)
{
    if((sizeA <= 0) || (sizeB <= 0) || (sizeA != sizeB))
        exit(errorSizeInterchange);
    else
    {
        void *auxiliarArray;
        if(charPointer == typePointer)
            auxiliarArray = (char*)AllocatorCalloc(sizeA,charPointer);
        else if(unsignedCharPointer == typePointer)
            auxiliarArray = (unsigned char*)AllocatorCalloc(sizeA,unsignedCharPointer);
        else if(int8Pointer == typePointer)
            auxiliarArray = (int8_t*)AllocatorCalloc(sizeA,int8Pointer);
        else if(unsignedInt8Pointer == typePointer)
            auxiliarArray = (uint8_t*)AllocatorCalloc(sizeA,unsignedInt8Pointer);
        else if(int16Pointer == typePointer)
            auxiliarArray = (int8_t*)AllocatorCalloc(sizeA,int16Pointer);
        else if(unsignedInt16Pointer == typePointer)
            auxiliarArray = (uint16_t*)AllocatorCalloc(sizeA,unsignedInt16Pointer);
        else if(int32Pointer == typePointer)
            auxiliarArray = (int32_t*)AllocatorCalloc(sizeA,int32Pointer);
        else if(unsignedInt32Pointer == typePointer)
            auxiliarArray = (uint32_t*)AllocatorCalloc(sizeA,unsignedInt32Pointer);
        else if(int64Pointer == typePointer)
            auxiliarArray = (int64_t*)AllocatorCalloc(sizeA,int64Pointer);
        else if(unsignedInt64Pointer == typePointer)
            auxiliarArray = (uint64_t*)AllocatorCalloc(sizeA,unsignedInt64Pointer);
        else if(floatPointer == typePointer)
            auxiliarArray = (float*)AllocatorCalloc(sizeA,floatPointer);
        else if(doublePointer == typePointer)
            auxiliarArray = (double*)AllocatorCalloc(sizeA,doublePointer);
        else
            exit(errorTypeInterchange);

        memcpy(auxiliarArray,a,sizeA);
        memcpy(a,b,sizeA);
        memcpy(b,auxiliarArray,sizeA);

        AllocatorFree(auxiliarArray);
    }
}

#endif // INTERCHANGE_C_INCLUDED
