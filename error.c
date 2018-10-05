#ifndef ERROR_C_INCLUDED
#define ERROR_C_INCLUDED

#include "error.h"

void ErrorRaise(const int32_t messageNumber, const char* fileName, const uint32_t lineNumber, const char* functionName)
{
    if(messageNumber == errorSizePrint)
    {
        fprintf(stderr,"%s\nError Number: %d.\nError Description: Print Size Array.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypePrint)
    {
        fprintf(stderr,"%s\nError Number: %d.\nError Description: Print Data Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorSizeArray)
    {
        fprintf(stderr,"%s\nError Number: %d.\nError Description: Array Size Array.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
    }
    else if(messageNumber == errorTypeArray)
    {
        fprintf(stderr,"%s\nError Number: %d.\nError Description: Array Type Array.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
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
        fprintf(stderr,"%s\nError Number: %d.\nError Description: Allocator Data Type.\nFile: %s\nFile Line: %d\nFunction: %s\n%s\n", ERROR_HEADER_LIINE, messageNumber, fileName, lineNumber, functionName, ERROR_HEADER_LIINE);
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
