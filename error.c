#ifndef ERROR_C_INCLUDED
#define ERROR_C_INCLUDED

#include "error.h"

void ErrorRaise(int64_t messageNumber, const char* functionName)
{
    if(messageNumber == errorSizePrint)
    {
        fprintf(stderr,"Error: -101 error of array size, In function: %s", functionName);
        exit(messageNumber);
    }
    else if(messageNumber == errorTypePrint)
    {
        fprintf(stderr,"Error: -101 error of array size, In function: %s", functionName);
        exit(messageNumber);
    }
    else if(messageNumber == errorSizeArray)
    {
        fprintf(stderr,"Error: -201 error of array size, In function: %s", functionName);
        exit(messageNumber);
    }
    else if(messageNumber == errorTypeArray)
    {

    }
    else if(messageNumber == errorBoundaryLimits)
    {

    }
    else if(messageNumber == errorNegativeNumberArray)
    {

    }
    else if(messageNumber == errorSizeAllocator)
    {

    }
    else if(messageNumber == errorTypeAllocator)
    {

    }
    else if(messageNumber == errorNoAllocate)
    {

    }
    else if(messageNumber == errorNoOpenFile)
    {

    }
    else if(messageNumber == errorNegativeNumberArtihmetic)
    {

    }

}
#endif // ERROR_C_INCLUDED
