#ifndef ERROR_C_INCLUDED
#define ERROR_C_INCLUDED

#include "error.h"

void ErrorRaise(int64_t messageNumber, const char* fileName, const char* functionName, const int64_t lineNumber)
{
    if(messageNumber == errorSizePrint)
    {
        fprintf(stderr,"Error: -101 Print Size Array.\n File: %s Function: %s, Line: %d", fileName, functionName, lineNumber);
        exit(messageNumber);
    }
    else if(messageNumber == errorTypePrint)
    {
        fprintf(stderr,"Error: -102 Print Data Type.\n File: %s Function: %s, Line: %d", fileName, functionName, lineNumber);
        exit(messageNumber);
    }
    else if(messageNumber == errorSizeArray)
    {
        fprintf(stderr,"Error: -201 Array Size Array.\n File: %s Function: %s, Line: %d", fileName, functionName, lineNumber);
        exit(messageNumber);
    }
    else if(messageNumber == errorTypeArray)
    {
        fprintf(stderr,"Error: -202 Array Type Array.\n File: %s Function: %s, Line: %d", fileName, functionName, lineNumber);
        exit(messageNumber);
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
